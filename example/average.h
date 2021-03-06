# ifndef ORDER_EXAMPLE_AVERAGE_H_VAJK20040620
# define ORDER_EXAMPLE_AVERAGE_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Computing an Average
//
// ### Introduction
//
// This example was inspired by the Wiki discussion at \url{http://
// c2.com/cgi/wiki?CompileTimeGenericAverageFunctionInCeePlusPlus}.
//
// The goal is to build a macro for computing the average of a
// number of elements. The macro should expand to an expression that
// has the number of elements computed before run-time, but the
// values of the elements may not be known until run-time. For
// example,
//<
//   AVERAGE(x, y, z)
//>
// should expand to something like
//<
//   ((x + y + z) / 3)
//>
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
// ### The Average Macro
//
// So, without further ado, the following is our average macro
// implementation.
//<
#define AVERAGE(...)                                    \
((ORDER_PP(8seq_for_each_with_delimiter                 \
           (8put,                                       \
            8emit(8quote(+)),                           \
            8tuple_to_seq(8quote((__VA_ARGS__)))))) /   \
 ORDER_PP(8to_lit(8tuple_size(8quote((__VA_ARGS__))))))
//>
// The above macro invokes the Order interpreter, through the
// `ORDER_PP' macro, to evaluate two simple Order programs.
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
// expression. It first converts the argument tuple to a sequence
// using `8tuple_to_seq'. The higher-order procedure
// `8seq_for_each_with_delimiter' has been designed for outputing
// sequences of tokens with a delimiter. It is given two unary
// procedures. The first procedure is for outputing the elements and
// the second is for outputing the delimiters. The first procedure
// is applied to each element of the sequence. The second procedure
// is applied to the result, or return value, of the first procedure
// for all elements except the last. In this case, the delimiter is
// `+', which is given to the binary procedure `8emit', which yields
// an unary procedure. Order, like many other functional programming
// languages, supports partial application of functions. The second
// argument to `8emit' comes from `8put', which always evaluates to
// nil. The only argument to `8put' comes from the sequence, and
// `8put' simply outputs the argument. Once given two arguments,
// `8emit' outputs both of the arguments separated by whitespace.

# endif
