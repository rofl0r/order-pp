#ifndef ORDER_EXAMPLE_LAMBDA_BRD_PARSER_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_BRD_PARSER_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"
#include "error.h"
#include "str.h"

#define ORDER_PP_DEF_8BRD_PARSER_import_terminals ORDER_PP_MACRO(8import_tuple_seq)

#define ORDER_PP_DEF_8BRD_PARSER_import_nonterminals ORDER_PP_FN                        \
(8fn(8NS,                                                                               \
     8seq_map(8fn(8NT,                                                                  \
                  8tuple(8tuple_at(0,8NT),                                              \
                         8tuple_at(1,8NT),                                              \
                         8seq_map(8fn(8P,                                               \
                                      8tuple(8import_tuple_seq(8tuple_at(0,8P)),        \
                                             8tuple_rest_n(1,8P))),                     \
                                  8import_tuple_seq(8tuple_at(2,8NT))))),               \
              8import_tuple_seq(8NS))))

#define BRD_PARSER(qr, name, skip_fn, match_fn, terminals, nonterminals)\
ORDER_PP(8seq_for_each(8fn(8ST,                                         \
                           8emit(8quote(BRD_PARSER_GEN_sym_typedef),    \
                                 8tuple(8tuple_at(0,8ST),               \
                                        8tuple_at(1,8ST)))),            \
                       8seq_append(8BRD_PARSER_import_terminals(8quote(terminals)),     \
                                   8BRD_PARSER_import_nonterminals(8quote(nonterminals)))))\
                                                                        \
ORDER_PP(8seq_for_each(8fn(8NT,                                         \
                           8emit(8quote(BRD_PARSER_GEN_prototype),      \
                                 8tuple(8tuple_at(0,8NT)))),            \
                       8BRD_PARSER_import_nonterminals(8quote(nonterminals))))             \
                                                                        \
ORDER_PP(8emit(8quote(BRD_PARSER_GEN_entry_point),                      \
               8tuple(8quote(qr),                                       \
                      8quote(name),                                     \
                      8tuple_at(0,8seq_at(0,8BRD_PARSER_import_nonterminals(8quote(nonterminals)))))))\
                                                                        \
inline void                                                             \
ORDER_PP_FRESH_ID(skip)(str_type *ORDER_PP_FRESH_ID(pstr)) {            \
  skip_fn(ORDER_PP_FRESH_ID(pstr));                                     \
}                                                                       \
                                                                        \
ORDER_PP(8seq_for_each(8fn(8TE,                                         \
                           8emit(8quote(BRD_PARSER_GEN_terminal),       \
                                 8tuple(8tuple_at(0,8TE),               \
                                        8tuple_at(2,8TE)))),            \
                       8BRD_PARSER_import_terminals(8quote(terminals))))                \
                                                                        \
inline _Bool                                                            \
ORDER_PP_FRESH_ID(match)(str_type *ORDER_PP_FRESH_ID(pstr),             \
                         str_type ORDER_PP_FRESH_ID(maybe_prefix)) {    \
  ORDER_PP_FRESH_ID(skip)(ORDER_PP_FRESH_ID(pstr));                     \
                                                                        \
  return match_fn(ORDER_PP_FRESH_ID(pstr),                              \
                  ORDER_PP_FRESH_ID(maybe_prefix));                     \
}                                                                       \
                                                                        \
ORDER_PP(8seq_for_each(8fn(8NT,                                         \
                           8emit(8quote(BRD_PARSER_GEN_nonterminal),    \
                                 8tuple(8tuple_at(0,8NT),               \
                                        8tuple_at(2,8NT)))),            \
                       8BRD_PARSER_import_nonterminals(8quote(nonterminals))))

#define BRD_PARSER_GEN_sym_typedef(P, sym, type)   \
typedef P##type ORDER_PP_FRESH_ID(sym##_type);

#define BRD_PARSER_GEN_prototype(P, sym)        \
static _Bool ORDER_PP_FRESH_ID(P##sym)          \
     (str_type *ORDER_PP_FRESH_ID(pstr),        \
      ORDER_PP_FRESH_ID(sym##_type) *P##sym);

#define BRD_PARSER_GEN_entry_point(P, qr, name, sym)               \
qr _Bool name(str_type *ORDER_PP_FRESH_ID(pstr),                \
              ORDER_PP_FRESH_ID(sym##_type) *sym) {             \
  assert(ORDER_PP_FRESH_ID(pstr));                              \
  assert(*ORDER_PP_FRESH_ID(pstr));                             \
  assert(sym);                                                  \
  return ORDER_PP_FRESH_ID(sym)(ORDER_PP_FRESH_ID(pstr), sym);  \
}

#define BRD_PARSER_GEN_terminal(P, sym, parse)          \
inline _Bool ORDER_PP_FRESH_ID(sym)                     \
     (str_type *ORDER_PP_FRESH_ID(pstr),                \
      ORDER_PP_FRESH_ID(sym##_type) *P##sym) {          \
  ORDER_PP_FRESH_ID(skip)(ORDER_PP_FRESH_ID(pstr));     \
                                                        \
  return P##parse(ORDER_PP_FRESH_ID(pstr), P##sym);     \
}

#define BRD_PARSER_GEN_nonterminal(P, sym, alternatives)        \
static _Bool ORDER_PP_FRESH_ID(P##sym)                          \
     (str_type *ORDER_PP_FRESH_ID(pstr),                        \
      ORDER_PP_FRESH_ID(sym##_type) *P##sym) {                  \
  ORDER_PP_FRESH_ID(skip)(ORDER_PP_FRESH_ID(pstr));             \
                                                                \
  ORDER_PP(8seq_for_each                                        \
           (8fn(8AL,                                            \
                8emit(8quote(BRD_PARSER_GEN_alternative),       \
                      8AL)),                                    \
            8quote(P##alternatives)))                           \
                                                                \
  return 0;                                                     \
}

#define BRD_PARSER_GEN_alternative(P, minals, body)                     \
do {                                                                    \
  str_type ORDER_PP_FRESH_ID(alt_pstr) = *ORDER_PP_FRESH_ID(pstr);      \
                                                                        \
  ORDER_PP(8seq_for_each                                                \
           (8fn(8M,                                                     \
                8if(8same(2,8tuple_size(8M)),                           \
                    8emit(8quote(BRD_PARSER_GEN_try_sym),               \
                          8M),                                          \
                    8emit(8quote(BRD_PARSER_GEN_try_match),             \
                          8M))),                                        \
            8quote(P##minals)))                                         \
                                                                        \
  do { ORDER_PP_OPEN P##body } while (0);                               \
  *ORDER_PP_FRESH_ID(pstr) = ORDER_PP_FRESH_ID(alt_pstr);               \
  return 1;                                                             \
} while (0);

#define BRD_PARSER_GEN_try_sym(P, sym, var)                     \
ORDER_PP_FRESH_ID(sym##_type) var;                              \
if (!ORDER_PP_FRESH_ID(P##sym)(&ORDER_PP_FRESH_ID(alt_pstr),    \
                            &P##var))                           \
     break;

#define BRD_PARSER_GEN_try_match(P, pat)                        \
if (!ORDER_PP_FRESH_ID(match)(&ORDER_PP_FRESH_ID(alt_pstr),     \
                              P##pat))                          \
     break;

#endif
