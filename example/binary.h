#ifndef ORDER_EXAMPLE_BINARY_H_VAJK20040620
#define ORDER_EXAMPLE_BINARY_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// ## Binary literals
//
// In this example, we will implement a macro for specifying binary
// constants. [C99] has decimal, octal and hexadecimal contants, but
// no binary constants. Programmers often use octal or hexadecimal
// constants in place of binary constants, which can be error prone.
//
// The `BINARY(bin_digits)' macro that we will implement will allow
// us to write
//
//   BINARY(0 1 0 1)
//
// to get the constant `5'. In general, any sequence of the tokens
// `0' and `1' given to the `BINARY' macro is interpreted as a binary
// number and converted to the corresponding decimal constant.
//
// With the help of the Order interpreter, the implementation of the
// `BINARY' macro becomes quite trivial:

#define BINARY(tokens)                                  \
ORDER_PP(8to_lit(8seq_fold                              \
                 (8fn(8R, 8X,                           \
                      8add(8mul(8R, 2), 8X)),           \
                  0,                                    \
                  8tokens_to_seq(8quote(tokens)))))

// The above macro invokes the Order interpreter through the
// `ORDER_PP' macro.
//
// ### Grouping digits

#define ORDER_PP_TOKEN_00 (0)0
#define ORDER_PP_TOKEN_01 (0)1
#define ORDER_PP_TOKEN_10 (1)0
#define ORDER_PP_TOKEN_11 (1)1

#define ORDER_PP_TOKEN_000 (0)00
#define ORDER_PP_TOKEN_001 (0)01
#define ORDER_PP_TOKEN_010 (0)10
#define ORDER_PP_TOKEN_011 (0)11
#define ORDER_PP_TOKEN_100 (1)00
#define ORDER_PP_TOKEN_101 (1)01
#define ORDER_PP_TOKEN_110 (1)10
#define ORDER_PP_TOKEN_111 (1)11

#define ORDER_PP_TOKEN_0000 (0)000
#define ORDER_PP_TOKEN_0001 (0)001
#define ORDER_PP_TOKEN_0010 (0)010
#define ORDER_PP_TOKEN_0011 (0)011
#define ORDER_PP_TOKEN_0100 (0)100
#define ORDER_PP_TOKEN_0101 (0)101
#define ORDER_PP_TOKEN_0110 (0)110
#define ORDER_PP_TOKEN_0111 (0)111
#define ORDER_PP_TOKEN_1000 (1)000
#define ORDER_PP_TOKEN_1001 (1)001
#define ORDER_PP_TOKEN_1010 (1)010
#define ORDER_PP_TOKEN_1011 (1)011
#define ORDER_PP_TOKEN_1100 (1)100
#define ORDER_PP_TOKEN_1101 (1)101
#define ORDER_PP_TOKEN_1110 (1)110
#define ORDER_PP_TOKEN_1111 (1)111

// ### Exercises
//
// 1. Why limit to binary literals? Implement an Order function
//    `8tokens_to_num(digits, base)' that converts a token string of
//    digits in base `{1, ..., 36}' to a number. Use the tokens
//    `[0-9A-Z]' as digits. Change the `BINARY' macro to use the
//    `8tokens_to_nat' function.
//
// 2. The `BINARY' macro implemented in this example produces a
//    decimal literal. To make it easier to verify the correctness
//    of the produced literal, it might make sense to generate an
//    octal or hexadecimal literal. Implement an Order function
//    named `8num_to_tokens(num, base)' that converts a number to a
//    token string of digits in base `{1, ..., 36}'. Use the tokens
//    `[0-9A-Z]' as digits.

#endif
