// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include <stdio.h>
# include "binary.h"

// ### Testing
//
// The last thing to do is to test our macro. Unlike in most of the
// examples, the `BINARY' macro implementation uses many hand
// written token extraction macros that might contain errors. In
// order to test all the token extraction macros, we could manually
// write a corresponding test for each macro, but a better way is to
// generate the tests, which reduces the chance of having an
// undetected typo.
//
// First we'll implement an Order function to convert a number
// to a sequence of binary digits.
//<
#define ORDER_PP_DEF_8num_to_seq_of_binary_digits               \
ORDER_PP_FN(8fn(8N,                                             \
                8if(8is_0(8N),                                  \
                    8seq(0),                                    \
                    8seq_reverse(8seq_unfold                    \
                                 (8isnt_0,                      \
                                  8ap(8flip(8quotient), 2),     \
                                  8ap(8flip(8remainder), 2),    \
                                  8N)))))
//>
// We'll also use an ad hoc code generation macro to generate a
// single test case.
//<
#define CHECK(digits, value)                         \
printf(BINARY(digits) == value                       \
       ? #digits " == " #value " -- OK.\n"           \
       : #digits " != " #value " -- ERROR!\n");
//>
// We are then ready to generate the tests. We will use the Order
// interpreter to generate invocations of the above `CHECK'
// macro. We'll also write one simple sanity check that contains
// multiple tokens. These test cases should give a fairly good
// coverage.
//<
int main(void) {

  ORDER_PP
    (8for_each_in_range
     (8fn(8B,
          8for_each_in_range
          (8chain
           (8emit(8(CHECK)),
            8fn(8N,
                8tuple(8seq_cat
                       (8let((8D, 8num_to_seq_of_binary_digits(8N)),
                             8seq_append
                             (8seq_repeat(8sub(8B, 8seq_size(8D)),
                                          8seq(0)),
                              8D))),
                       8to_lit(8N)))),
           0, 8pow(2, 8B))),
      1, 5))

  CHECK(1 01 010 0010 11, 0xA8B)

  return 0;
}
//>
//
// ### Acknowledgements
//
// This example was inspired by an example written by Paul
// Mensonides for the Chaos preprocessor library.
//
// ### Exercises
//
// \begin{enumerate}
// \item Why limit to binary literals? Implement an Order function
//       `8tokens_to_num(digits, base)' that converts a token
//       string of digits in base $\{1, \ldots, 36\}$ to a number.
//       Use the tokens `[0-9A-Z]' as digits. Change the
//       `BINARY' macro to use the `8tokens_to_num'
//       function. (Hint: Use token extraction macros to convert the
//       characters directly to the corresponding decimal values
//       (e.g. extracting an `A' should produce `10' and a
//       `B' should produce `11').)
// \end{enumerate}
