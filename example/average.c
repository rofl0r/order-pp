// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include "order/interpreter.h"

// ## Computing an average
//
// This example was inspired by the Wiki discussion at
//
//   http://c2.com/cgi/wiki?CompileTimeGenericAverageFunctionInCeePlusPlus
//
// The goal is to build a macro for computing the average of a
// number of elements. The macro should expand to an expression that
// has the number of elements computed before run-time, but the
// values of the elements may not be known until run-time. For
// example,
//
//   GEN_average(x, y, z)
//
// should expand to something like
//
//   ((x + y + z) / 3)
//
// Above, the number of elements, `3', is supposed to be computed by
// the macro.
//
// In general, the average of a set of integers might not be an
// integer. However, for consistency with the semantics of C
// operators, we will construct our macro so that it will generate a
// divide by an integer, which means that in order to produce a
// floating point result at least one of the arguments to our macro
// must be a floating point number. In the spirit of C, we will also
// not make any effort to guard against overflow.
//
// So, without further ado, the following is our average macro
// implementation.

#define GEN_average(x, ...)                                     \
((x ORDER_PP(8seq_for_each                                      \
             (8emit(8quote(+)),                                 \
              8tuple_to_seq(8quote((__VA_ARGS__)))))) /         \
 ORDER_PP(8to_lit(8tuple_size(8quote((,__VA_ARGS__))))))

// The above macro invokes the Order interpreter, through the
// `ORDER_PP' macro, to evaluate two simple Order programs. The
// `GEN_average' macro, as defined above, must be given at least two
// arguments, which slightly simplifies the macro. We leave it as an
// exercise to the reader to implement a macro that also works with
// just a single argument.
//
// Let's then consider the Order programs used in the macro. The
// second program, which computes the denominator, simply uses the
// prelude function `8tuple_size' to count the number of elements
// given to the macro and then uses the `8to_lit' function to
// convert the number to a literal. The conversion to a literal is
// necessary, because given a long enough tuple, the function
// `8tuple_size' produce an arbitrary precision natural number as
// the result. The `8quote' expression evaluates to whatever
// argument is given to it verbatim. We use `8quote' above in both
// programs.
//
// The first, and more complicated, program generates the sum
// expression by converting the argument tuple to a sequence, using
// `8tuple_to_seq', and then using the higher-order procedure
// `8seq_for_each' to output the sum. Above, the binary `8emit'
// function is directly applied to only a single argument, `+'.
// Order, like many other purely functional programming languages,
// supports partial application of functions. The second argument to
// `8emit' comes from the sequence. Once given two arguments,
// `8emit' outputs both of the arguments separated by whitespace.
//
// The last thing to do is to test our macro. The following `main'
// program is just a simple test of the macro.

int main() {
  printf(GEN_average(3, 1, 4, 1, 5, 9, 2, 6, 5) == 4
         ? "OK.\n"
         : "ERROR!\n");

  return 0;
}

// It is probably safe to say that, compared to an average function
// implemented using C++ template metaprogramming techniques, our
// macro is both simpler and more flexible. Unsurprisingly, however,
// Scheme syntax-case macros and Common Lisp macros admit an even
// simpler and more robust implementation of the concept.
//
// ### Exercises
//
// 1. The `GEN_average' macro implemented in this example must be
//    given at least two arguments. Change the macro so that it also
//    works given just a single argument.
//
// 2. Implement the same program using the syntax-rules macro system
//    of Scheme. You'll get an extra point if your implementation
//    does not have an arbitrary limit on the number of arguments to
//    the macro and the number of elements is actually computed in
//    macro expansion time.
