#ifndef ORDER_EXAMPLE_LAMBDA_DATATYPE_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_DATATYPE_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "checked_malloc.h"
#include "order/interpreter.h"

#define ORDER_PP_DEF_8dt_type_name ORDER_PP_MACRO(8tuple_at_0)
#define ORDER_PP_DEF_8dt_type_variants ORDER_PP_MACRO(8tuple_at_1)

#define ORDER_PP_DEF_8dt_variant_name ORDER_PP_MACRO(8tuple_at_0)
#define ORDER_PP_DEF_8dt_variant_field_types ORDER_PP_MACRO(8tuple_at_1)

#define ORDER_PP_DEF_8dt_import_datatypes                                       \
ORDER_PP_FN(8fn(8S,                                                             \
                8seq_map(8fn(8D,                                                \
                             8tuple(8tuple_at_0(8D),                            \
                                    8vseq_to_seq_of_tuples(8tuple_at_1(8D)))),  \
                         8vseq_to_seq_of_tuples(8S))))

#define DATATYPE_define(datatypes)                                              \
ORDER_PP(8let(8S, 8dt_import_datatypes(8(datatypes)),                           \
              8do(8seq_for_each(8fn(8N,                                         \
                                    8print((typedef const struct)8N(*)8N(;))),  \
                                8seq_map(8dt_type_name, 8S)),                   \
                  8seq_for_each(8emit(8(DATATYPE_GEN_datatype)),                \
                                8S))))

#define DATATYPE_GEN_datatype(type_name, variants)                      \
ORDER_PP(8seq_for_each                                                  \
         (8fn(8V,                                                       \
              8seq_for_each_with_idx                                    \
              (8fn(8I, 8N,                                              \
                   8print((typedef) 8N 8cat(8(DATATYPE_FIELD_),         \
                                            8to_lit(8I),                \
                                            8(_TYPE_),                  \
                                            8dt_variant_name(8V))       \
                          (;))),                                        \
               8dt_variant_field_types(8V))),                           \
          8(variants)))                                                 \
                                                                        \
struct type_name {                                                      \
  enum {                                                                \
    ORDER_PP(8seq_for_each                                              \
             (8fn(8V,                                                   \
                  8print(8cat(8(DATATYPE_TAG_), 8dt_variant_name(8V))   \
                         (,))),                                         \
              8(variants)))                                             \
  } tag;                                                                \
                                                                        \
  union {                                                               \
    ORDER_PP(8seq_for_each                                              \
             (8emit(8(DATATYPE_GEN_variant_struct)),                    \
              8seq_filter(8chain(8seq_isnt_nil,                         \
                                 8dt_variant_field_types),              \
                          8(variants))))                                \
  } datum;                                                              \
};                                                                      \
                                                                        \
ORDER_PP(8seq_for_each                                                  \
         (8fn(8V,                                                       \
              8emit(8(DATATYPE_GEN_ctor),                               \
                    8tuple(8(type_name),                                \
                           8dt_variant_name(8V),                        \
                           8seq_size(8dt_variant_field_types(8V))))),   \
          8(variants)))

#define DATATYPE_GEN_variant_struct(variant_name, field_types)          \
struct {                                                                \
  ORDER_PP(8seq_for_each_with_idx                                       \
           (8fn(8I, 8T,                                                 \
                8print(8T 8cat(8(_),8to_lit(8I)) (;))),                 \
            8(field_types)))                                            \
} variant_name;

#define DATATYPE_GEN_ctor(type_name, variant_name, field_cnt)                   \
inline type_name                                                                \
variant_name(ORDER_PP(8for_each_in_range                                        \
                      (0, 8(field_cnt),                                         \
                       8fn(8I,                                                  \
                           8print(8unless(8is_0(8I),                            \
                                          8emit_comma(8nil))                    \
                                  8cat(8(DATATYPE_FIELD_),                      \
                                       8to_lit(8I),                             \
                                       8(_TYPE_##variant_name))                 \
                                  8cat(8(_), 8to_lit(8I))))))) {                \
  struct type_name* ORDER_PP_FRESH_ID(result) =                                 \
    checked_malloc(sizeof(struct type_name));                                   \
                                                                                \
  ORDER_PP_FRESH_ID(result)->tag = DATATYPE_TAG_##variant_name;                 \
                                                                                \
  ORDER_PP(8for_each_in_range                                                   \
           (0, 8(field_cnt),                                                    \
            8fn(8I,                                                             \
                8let(8F, 8cat(8(_),8to_lit(8I)),                                \
                     8print((ORDER_PP_FRESH_ID(result)->datum.variant_name.)    \
                            8F (=) 8F (;))))))                                  \
                                                                                \
  return ORDER_PP_FRESH_ID(result);                                             \
}

#define ORDER_PP_DEF_8dt_import_cases ORDER_PP_FN       \
(8fn(8S,                                                \
     8vseq_to_seq_of_tuples(8S)))

#define DATATYPE_switch(expr, type_name, cases)         \
do {                                                    \
  const type_name ORDER_PP_FRESH_ID(value) = (expr);    \
                                                        \
  switch (ORDER_PP_FRESH_ID(value)->tag) {              \
    ORDER_PP(8seq_for_each                              \
             (8emit(8(DATATYPE_GEN_case)),              \
              8dt_import_cases(8(cases))))              \
  default:                                              \
    ERROR_exit("Invalid tag %d resulting from '%s'.",   \
               ORDER_PP_FRESH_ID(value)->tag, #expr);   \
  }                                                     \
} while (0)

#define DATATYPE_GEN_case(variant_name, field_names, ...)                       \
case DATATYPE_TAG_##variant_name: {                                             \
  ORDER_PP(8seq_for_each_with_idx                                               \
           (8fn(8I, 8F,                                                         \
                8let(8I, 8to_lit(8I),                                           \
                     8print((const) 8cat(8(DATATYPE_FIELD_),                    \
                                         8I,                                    \
                                         8(_TYPE_##variant_name))               \
                            8F (=)                                              \
                            (ORDER_PP_FRESH_ID(value)->datum.variant_name.)     \
                            8cat(8(_),8I) (;)))),                               \
            8(field_names)))                                                    \
  do { __VA_ARGS__ } while (0);                                                 \
  break;                                                                        \
}

#endif
