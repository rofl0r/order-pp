// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// ## Exponential delay
//
// This example is a simple Order function, named `exp_delay(n)',
// whose time complexity of is $\Omega(2^n)$. After expending an
// exponential amount of time, `exp_delay(n)' simply evaluates to
// nothing. `exp_delay' might become handy when recompiles are too
// fast to take a coffee break...
//
// Let's then see the definition of `exp_delay'.

#define ORDER_PP_DEF_8exp_delay                 \
ORDER_PP_FN(8fn(8N,                             \
                8unless(8is_0(8N),              \
                        8exp_delay(8dec(8N)),   \
                        8exp_delay(8dec(8N)))))

// The above object-like macro definition is an Order function
// definition, which is denoted by the use of the `ORDER_PP_FN'
// macro. All top-level Order definitions use the prefix
// `ORDER_PP_DEF_', which allows the Order interpreter to analyze
// expressions. The prefix `8' is used to eliminate the possibility
// that a user defined macro would clash with an Order expression.
//
// Given a number $n$, `exp_delay' recursively calls itself /twice/
// with $n-1$, unless $n$ is zero. The recursive calls essential
// form a complete binary tree of depth $n+1$.
//
// We'll make this example configurable through the conditionally
// defined `EXP_DELAY_N' object-like macro, whose value will be
// passed to `exp_delay'.

#ifndef EXP_DELAY_N
#define EXP_DELAY_N 10
#endif

// The default value of 10 can now be overridden by defining the
// `EXP_DELAY_N' macro on the command line. Typically, the command
// line option is `-d' as in `-dEXP_DELAY_N=12', but the details
// vary between different preprocessors, so you should consult your
// preprocessor manual for instructions.
//
// Finally we evaluate our simple program.

ORDER_PP(8exp_delay(EXP_DELAY_N))

// It should be very easy for a preprocessor to preprocess
// `exp_delay(n)' in $O(n)$ space. Unfortunately, many preprocessors
// actually seem to allocate lots of memory during macro expansion
// and also seem not to release that memory until macro expansion is
// finished. On most preprocessors, this simple program quickly runs
// out of memory.
//
// ### Exercises
//
// 1. Try preprocessing this example with different values of
//    `EXP_DELAY_N'. What is the maximum number you can use before
//    the preprocessor runs out of memory or you get tired of
//    waiting?
//
// 2. Convince yourself that `exp_delay(n)' can be evaluated in
//    $O(n)$ space. For extra credit, write a formal proof.
//
// 3. Modify this example so that instead of expanding to nothing,
//    each time `exp_delay' is called, it outputs a single `+'. How
//    many `+' tokens you get when `EXP_DELAY_N' is `10' or `100'
//    (assuming the program would actually finish)?
