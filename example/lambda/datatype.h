#ifndef ORDER_EXAMPLE_LAMBDA_DATATYPE_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_DATATYPE_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <malloc.h>
#include "order/interpreter.h"

#define DATATYPE_switch(expr, type_name, cases)                 \
do {                                                            \
  type_name ORDER_PP_FRESH_ID(value) = (expr);                  \
  switch (ORDER_PP_FRESH_ID(value)->tag) {                      \
    ORDER_PP(8seq_for_each(8fn(8C,                              \
                               8emit(8quote(DATATYPE_GEN_case), \
                                     8tuple(8quote(type_name),  \
                                            8tuple_at(0,8C),    \
                                            8tuple_at(1,8C),    \
                                            8tuple_at(2,8C)))), \
                           8quote(cases))) } } while (0)

#define DATATYPE_GEN_case(type_name, ctor_name, field_names, body)      \
case DATATYPE_TAG_##type_name##_##ctor_name: {                          \
  ORDER_PP(8seq_for_each_with_idx(8fn(8I, 8VN,                          \
                                      8emit(8quote(DATATYPE_GEN_var),   \
                                            8tuple(8quote(type_name),   \
                                                   8quote(ctor_name),   \
                                                   8I,                  \
                                                   8VN))),              \
                                  8quote(field_names)))                 \
    do ORDER_PP_REM body while (0);                                     \
  break; }

#define DATATYPE_GEN_var(type_name, ctor_name, field_idx, field_name)   \
DATATYPE_FIELD_##field_idx##_TYPE_##type_name##_##ctor_name field_name  \
= ORDER_PP_FRESH_ID(value)->datum.ctor_name._##field_idx;

#define DATATYPE_declare(type_name)                             \
typedef struct type_name *type_name;                            \
                                                                \
ORDER_PP(8seq_for_each                                          \
         (8fn(8V,                                               \
              8seq_for_each_with_idx                            \
              (8fn(8I, 8T,                                      \
                   8emit(8quote(DATATYPE_GEN_field_type),       \
                         8tuple(8quote(type_name),              \
                                8tuple_at(0,8V),                \
                                8I,                             \
                                8T))),                          \
               8tuple_at(1,8V))),                               \
          8tuple_at(1,8quote(DATATYPE_##type_name))))           \
                                                                \
struct type_name {                                              \
  enum {                                                        \
    ORDER_PP(8seq_for_each                                      \
             (8fn(8V,                                           \
                  8emit(8quote(DATATYPE_GEN_tag),               \
                        8tuple(8quote(type_name),               \
                               8tuple_at(0,8V)))),              \
              8tuple_at(1,8quote(DATATYPE_##type_name))))       \
  } tag;                                                        \
                                                                \
  union {                                                       \
    ORDER_PP(8seq_for_each                                      \
             (8fn(8V,                                           \
                  8emit(8quote(DATATYPE_GEN_variant),           \
                        8V)),                                   \
              8tuple_at(1,8quote(DATATYPE_##type_name))))       \
         } datum;                                               \
}

#define DATATYPE_GEN_field_type(type_name, ctor_name, field_idx, field_type)    \
typedef field_type DATATYPE_FIELD_##field_idx##_TYPE_##type_name##_##ctor_name;

#define DATATYPE_GEN_tag(type_name, ctor_name)  \
DATATYPE_TAG_##type_name##_##ctor_name,

#define DATATYPE_GEN_variant(ctor_name, field_types)            \
struct {                                                        \
  ORDER_PP(8seq_for_each_with_idx                               \
           (8fn(8I, 8T,                                         \
                8emit(8T, 8cat(8quote(_), 8I), 8quote(;))),     \
            8quote(field_types)))                               \
       } ctor_name;


#define DATATYPE_define(type_name)                              \
ORDER_PP(8seq_for_each                                          \
         (8fn(8V,                                               \
              8emit(8quote(DATATYPE_GEN_ctor),                  \
                    8tuple(8quote(type_name),                   \
                           8tuple_at(0,8V),                     \
                           8seq_size(8tuple_at(1,8V))))),       \
          8tuple_at(1,8quote(DATATYPE_##type_name))))           \
     typedef type_name ORDER_PP_FRESH_ID(dummy)

#define DATATYPE_GEN_ctor(type_name, ctor_name, field_cnt)      \
type_name type_name##_##ctor_name                               \
(ORDER_PP(8for_each_in_range                                    \
          (8fn(8I,                                              \
               8do(8when(8isnt_0(8I), 8emit_comma),             \
                   8emit(8quote(DATATYPE_GEN_ctor_arg),         \
                         8tuple(8quote(type_name),              \
                                8quote(ctor_name),              \
                                8I)))),                         \
           0,                                                   \
           field_cnt))) {                                       \
  type_name result = malloc(sizeof(struct type_name));          \
  result->tag = DATATYPE_TAG_##type_name##_##ctor_name;         \
  ORDER_PP(8for_each_in_range                                   \
           (8fn(8I,                                             \
                8emit(8quote(DATATYPE_GEN_ctor_assign),         \
                      8tuple(8quote(ctor_name),                 \
                             8I))),                             \
            0,                                                  \
            field_cnt))                                         \
  return result;                                                \
}

#define DATATYPE_GEN_ctor_arg(type_name, ctor_name, field_idx)                  \
DATATYPE_FIELD_##field_idx##_TYPE_##type_name##_##ctor_name _##field_idx

#define DATATYPE_GEN_ctor_assign(ctor_name, field_idx)  \
result->datum.ctor_name._##field_idx = _##field_idx;

#endif
