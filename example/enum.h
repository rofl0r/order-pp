# ifndef ORDER_EXAMPLE_ENUM_H_VAJK20041119
# define ORDER_EXAMPLE_ENUM_H_VAJK20041119

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Printable Enumeration
//
//<
#define ENUM(name, rators)                                      \
enum name {                                                     \
  ORDER_PP(8seq_for_each_with_delimiter                         \
           (8fn(8X,                                             \
                8if(8equal(2, 8tuple_size(8X)),                 \
                    8print(8tuple_at_0(8X)(=)8tuple_at_1(8X)),  \
                    8put_open(8X))),                            \
            8emit_comma,                                        \
            8vseq_to_seq_of_tuples(8(rators))))                 \
};                                                              \
                                                                \
inline const char* name##_to_string(enum name e) {              \
  switch (e) {                                                  \
    ORDER_PP(8seq_for_each                                      \
             (8fn(8N,                                           \
                  8print((case) 8N (:)                          \
                         (return) 8stringize(8N) (;))),         \
              8seq_map(8tuple_at_0,                             \
                       8vseq_to_seq_of_tuples(8(rators)))))     \
  default:                                                      \
    return "<unknown>";                                         \
  }                                                             \
}
//>

# endif
