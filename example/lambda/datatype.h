#ifndef ORDER_EXAMPLE_LAMBDA_DATATYPE_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_DATATYPE_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "checked_malloc.h"
#include "order/interpreter.h"

#define ORDER_PP_DEF_8DATATYPE_import_datatypes ORDER_PP_FN                     \
(8fn(8TS,                                                                       \
     8seq_map(8fn(8DT,                                                          \
                  8tuple(8tuple_at(0,8DT),                                      \
                         8seq_map(8fn(8V,                                       \
                                      8tuple(8tuple_at(0,8V),                   \
                                             8import_seq(8tuple_at(1,8V)))),    \
                                  8import_tuple_seq(8tuple_at(1,8DT))))),       \
              8import_tuple_seq(8TS))))

#define DATATYPE_define(datatypes)                                              \
ORDER_PP(8let(8TS,8DATATYPE_import_datatypes(8quote(datatypes)),                \
              8do(8seq_for_each(8fn(8DT,                                        \
                                    8let(8N,8tuple_at(0,8DT),                   \
                                         8emit(8quote(typedef const struct),8N, \
                                               8quote(*),8N,8quote(;)))),       \
                                8TS),                                           \
                  8seq_for_each(8fn(8DT,                                        \
                                    8emit(8quote(DATATYPE_GEN_datatype),        \
                                          8DT)),                                \
                                8TS))))

#define DATATYPE_GEN_datatype(P, type_name, variants)                   \
ORDER_PP(8seq_for_each                                                  \
         (8fn(8V,                                                       \
              8seq_for_each_with_idx                                    \
              (8fn(8I, 8T,                                              \
                   8emit(8quote(DATATYPE_GEN_field_typedef),            \
                         8tuple(8tuple_at(0,8V),                        \
                                8I,                                     \
                                8T))),                                  \
               8tuple_at(1,8V))),                                       \
          8quote(P##variants)))                                         \
                                                                        \
struct P##type_name {                                                   \
  enum {                                                                \
    ORDER_PP(8seq_for_each                                              \
             (8fn(8V,                                                   \
                  8emit(8quote(DATATYPE_GEN_tag),                       \
                        8tuple(8tuple_at(0,8V)))),                      \
              8quote(P##variants)))                                     \
  } tag;                                                                \
                                                                        \
  union {                                                               \
    ORDER_PP(8seq_for_each                                              \
             (8fn(8V,                                                   \
                  8when(8seq_isnt_nil(8tuple_at(1,8V)),                 \
                        8emit(8quote(DATATYPE_GEN_variant_struct),      \
                              8V))),                                    \
              8quote(P##variants)))                                     \
  } datum;                                                              \
};                                                                      \
                                                                        \
ORDER_PP(8seq_for_each                                                  \
         (8fn(8V,                                                       \
              8emit(8quote(DATATYPE_GEN_ctor),                          \
                    8tuple(8quote(P##type_name),                        \
                           8tuple_at(0,8V),                             \
                           8seq_size(8tuple_at(1,8V))))),               \
          8quote(P##variants)))

#define DATATYPE_GEN_tag(P, ctor_name) DATATYPE_TAG_##ctor_name,

#define DATATYPE_GEN_field_typedef(P, ctor_name, idx, type)     \
typedef type DATATYPE_FIELD_##idx##_TYPE_##ctor_name;

#define DATATYPE_GEN_variant_struct(P, ctor_name, field_types)  \
struct {                                                        \
  ORDER_PP(8seq_for_each_with_idx                               \
           (8fn(8I, 8T,                                         \
                8emit(8T, 8cat(8quote(_), 8I), 8quote(;))),     \
            8quote(P##field_types)))                            \
} P##ctor_name;

#define DATATYPE_GEN_ctor(P, type_name, ctor_name, field_cnt)           \
inline P##type_name                                                     \
ctor_name(ORDER_PP(8for_each_in_range                                   \
                   (8fn(8I,                                             \
                        8emit(8quote(DATATYPE_GEN_ctor_arg),            \
                              8tuple(8quote(P##ctor_name), 8I))),       \
                    0,                                                  \
                    P##field_cnt))) {                                   \
  struct P##type_name* ORDER_PP_FRESH_ID(result) =                      \
    checked_malloc(sizeof(struct P##type_name));                        \
                                                                        \
  ORDER_PP_FRESH_ID(result)->tag = DATATYPE_TAG_##ctor_name;            \
                                                                        \
  ORDER_PP(8for_each_in_range                                           \
           (8fn(8I,                                                     \
                8emit(8quote(DATATYPE_GEN_ctor_assign),                 \
                      8tuple(8quote(P##ctor_name), 8I))),               \
            0,                                                          \
            P##field_cnt))                                              \
                                                                        \
  return ORDER_PP_FRESH_ID(result);                                     \
}

#define DATATYPE_GEN_ctor_arg(P, ctor_name, field_idx)          \
ORDER_PP(8when(8isnt_0(P##field_idx),                           \
               8emit_comma))                                    \
     DATATYPE_FIELD_##field_idx##_TYPE_##ctor_name _##field_idx

#define DATATYPE_GEN_ctor_assign(P, ctor_name, idx)             \
ORDER_PP_FRESH_ID(result)->datum.P##ctor_name._##idx = _##idx;

#define ORDER_PP_DEF_8DATATYPE_import_cases ORDER_PP_FN \
(8fn(8CS,                                               \
     8seq_map(8fn(8C,                                   \
                  8tuple(8tuple_at(0,8C),               \
                         8import_seq(8tuple_at(1,8C)),  \
                         8tuple_rest_n(2,8C))),         \
              8import_tuple_seq(8CS))))

#define DATATYPE_switch(expr, type_name, cases)         \
do {                                                    \
  const type_name ORDER_PP_FRESH_ID(value) = (expr);    \
                                                        \
  switch (ORDER_PP_FRESH_ID(value)->tag) {              \
    ORDER_PP(8seq_for_each                              \
             (8fn(8C,                                   \
                  8emit(8quote(DATATYPE_GEN_case),      \
                        8C)),                           \
              8DATATYPE_import_cases(8quote(cases))))   \
  default:                                              \
    ERROR_exit("Invalid tag %d resulting from '%s'.",   \
               ORDER_PP_FRESH_ID(value)->tag, #expr);   \
  }                                                     \
} while (0)

#define DATATYPE_GEN_case(P, ctor_name, field_names, body)      \
case DATATYPE_TAG_##ctor_name: {                                \
  ORDER_PP(8seq_for_each_with_idx                               \
           (8fn(8I, 8FN,                                        \
                8emit(8quote(DATATYPE_GEN_var),                 \
                      8tuple(8quote(P##ctor_name),              \
                             8I,                                \
                             8FN))),                            \
            8quote(P##field_names)))                            \
  do { ORDER_PP_OPEN P##body } while (0);                       \
  break;                                                        \
}

#define DATATYPE_GEN_var(P, ctor_name, idx, name)       \
const DATATYPE_FIELD_##idx##_TYPE_##ctor_name P##name   \
= ORDER_PP_FRESH_ID(value)->datum.P##ctor_name._##idx;

#endif
