#ifndef ORDER_EXAMPLE_LAMBDA_BRD_PARSER_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_BRD_PARSER_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "error.h"
#include "str.h"
#include "order/interpreter.h"

#define ORDER_PP_DEF_8bp_import_terminals ORDER_PP_MACRO(8vseq_to_seq_of_tuples)

#define ORDER_PP_DEF_8bp_import_nonterminals                                                            \
ORDER_PP_FN(8fn(8S,                                                                                     \
                8seq_map(8fn(8N,                                                                        \
                             8tuple(8tuple_at_0(8N),                                                    \
                                    8tuple_at_1(8N),                                                    \
                                    8seq_map(8fn(8P,                                                    \
                                                 8tuple(8vseq_to_seq_of_tuples(8tuple_at_0(8P)),        \
                                                        8tuple_drop_1(8P))),                            \
                                             8vseq_to_seq_of_tuples(8tuple_at_2(8N))))),                \
                         8vseq_to_seq_of_tuples(8S))))

#define BRD_PARSER(qr, name, skip_fn, match_fn, terminals, nonterminals)        \
ORDER_PP(8seq_for_each                                                          \
         (8fn(8M,                                                               \
              8emit(8(BRD_PARSER_GEN_sym_typedef),                              \
                    8tuple(8tuple_at_0(8M),                                     \
                           8tuple_at_1(8M)))),                                  \
          8seq_append                                                           \
          (8bp_import_terminals(8(terminals)),                                  \
           8bp_import_nonterminals(8(nonterminals)))))                          \
                                                                                \
ORDER_PP(8let((8S, 8bp_import_nonterminals(8(nonterminals))),                   \
              8seq_for_each(8fn(8N,                                             \
                                8emit(8(BRD_PARSER_GEN_prototype),              \
                                      8tuple(8tuple_at_0(8N)))),                \
                            8S),                                                \
              8emit(8(BRD_PARSER_GEN_entry_point),                              \
                    8tuple(8(qr),                                               \
                           8(name),                                             \
                           8tuple_at_0(8seq_at(0,8S))))))                       \
                                                                                \
inline void                                                                     \
ORDER_PP_FRESH_ID(skip)(str_type *ORDER_PP_FRESH_ID(pstr)) {                    \
  skip_fn(ORDER_PP_FRESH_ID(pstr));                                             \
}                                                                               \
                                                                                \
ORDER_PP(8seq_for_each(8fn(8T,                                                  \
                           8emit(8(BRD_PARSER_GEN_terminal),                    \
                                 8tuple(8tuple_at_0(8T),                        \
                                        8tuple_at_2(8T)))),                     \
                       8bp_import_terminals(8(terminals))))                     \
                                                                                \
inline _Bool                                                                    \
ORDER_PP_FRESH_ID(match)(str_type *ORDER_PP_FRESH_ID(pstr),                     \
                         str_type ORDER_PP_FRESH_ID(maybe_prefix)) {            \
  ORDER_PP_FRESH_ID(skip)(ORDER_PP_FRESH_ID(pstr));                             \
                                                                                \
  return match_fn(ORDER_PP_FRESH_ID(pstr),                                      \
                  ORDER_PP_FRESH_ID(maybe_prefix));                             \
}                                                                               \
                                                                                \
ORDER_PP(8seq_for_each(8fn(8N,                                                  \
                           8emit(8(BRD_PARSER_GEN_nonterminal),                 \
                                 8tuple(8tuple_at_0(8N),                        \
                                        8tuple_at_2(8N)))),                     \
                       8bp_import_nonterminals(8(nonterminals))))

#define BRD_PARSER_GEN_sym_typedef(sym, type)   \
typedef type ORDER_PP_FRESH_ID(sym##_type);

#define BRD_PARSER_GEN_prototype(sym)           \
static _Bool ORDER_PP_FRESH_ID(sym)             \
     (str_type *ORDER_PP_FRESH_ID(pstr),        \
      ORDER_PP_FRESH_ID(sym##_type) *sym);

#define BRD_PARSER_GEN_entry_point(qr, name, sym)               \
qr _Bool name(str_type *ORDER_PP_FRESH_ID(pstr),                \
              ORDER_PP_FRESH_ID(sym##_type) *sym) {             \
  assert(ORDER_PP_FRESH_ID(pstr));                              \
  assert(*ORDER_PP_FRESH_ID(pstr));                             \
  assert(sym);                                                  \
  return ORDER_PP_FRESH_ID(sym)(ORDER_PP_FRESH_ID(pstr),        \
                                sym);                           \
}

#define BRD_PARSER_GEN_terminal(sym, parse)             \
inline _Bool ORDER_PP_FRESH_ID(sym)                     \
     (str_type *ORDER_PP_FRESH_ID(pstr),                \
      ORDER_PP_FRESH_ID(sym##_type) *sym) {             \
  ORDER_PP_FRESH_ID(skip)(ORDER_PP_FRESH_ID(pstr));     \
                                                        \
  return parse(ORDER_PP_FRESH_ID(pstr), sym);           \
}

#define BRD_PARSER_GEN_nonterminal(sym, alternatives)           \
static _Bool ORDER_PP_FRESH_ID(sym)                             \
     (str_type *ORDER_PP_FRESH_ID(pstr),                        \
      ORDER_PP_FRESH_ID(sym##_type) *sym) {                     \
  ORDER_PP_FRESH_ID(skip)(ORDER_PP_FRESH_ID(pstr));             \
                                                                \
  ORDER_PP(8seq_for_each                                        \
           (8emit(8(BRD_PARSER_GEN_alternative)),               \
            8(alternatives)))                                   \
                                                                \
  return 0;                                                     \
}

#define BRD_PARSER_GEN_alternative(minals, body)                \
do {                                                            \
  str_type ORDER_PP_FRESH_ID(alt_pstr) =                        \
    *ORDER_PP_FRESH_ID(pstr);                                   \
                                                                \
  ORDER_PP(8seq_for_each                                        \
           (8fn(8M,                                             \
                8emit(8if(8equal(2, 8tuple_size(8M)),           \
                          8(BRD_PARSER_GEN_try_sym),            \
                          8(BRD_PARSER_GEN_try_match)),         \
                      8M)),                                     \
            8(minals)))                                         \
                                                                \
  do { ORDER_PP_REM body } while (0);                           \
  *ORDER_PP_FRESH_ID(pstr) = ORDER_PP_FRESH_ID(alt_pstr);       \
  return 1;                                                     \
} while (0);

#define BRD_PARSER_GEN_try_sym(sym, var)                        \
ORDER_PP_FRESH_ID(sym##_type) var;                              \
if (!ORDER_PP_FRESH_ID(sym)(&ORDER_PP_FRESH_ID(alt_pstr),       \
                            &var))                              \
     break;

#define BRD_PARSER_GEN_try_match(pat)                           \
if (!ORDER_PP_FRESH_ID(match)(&ORDER_PP_FRESH_ID(alt_pstr),     \
                              pat))                             \
     break;

#endif
