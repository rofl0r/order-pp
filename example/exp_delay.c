// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Exponential delay
//
// This example is a simple Order function, named `8exp_delay(n)',
// whose time complexity is $\Omega(2^n)$. After expending an
// exponential amount of time, `8exp_delay(n)' simply evaluates to
// nothing. `8exp_delay' might become handy when recompiles are too
// fast to take a coffee break\ldots\footnote{This example is rather
// theoretical compared to the other examples.}
//
// Let's then see the definition of `8exp_delay':
//<
#define ORDER_PP_DEF_8exp_delay                 \
ORDER_PP_FN(8fn(8N,                             \
                8unless(8is_0(8N),              \
                        8exp_delay(8dec(8N)),   \
                        8exp_delay(8dec(8N)))))
//>
// Given a number $n$, `8exp_delay' recursively calls itself
// \emph{twice} with $n-1$, unless $n$ is zero. The recursive calls
// essential form a complete binary tree of height $n$.
//
// We'll make this example configurable through the conditionally
// defined `EXP_DELAY_N' object-like macro, whose value will be
// passed to `8exp_delay'.
//<
#ifndef EXP_DELAY_N
#define EXP_DELAY_N 12
#endif
//>
// The default value of 12 can now be overridden by defining the
// `EXP_DELAY_N' macro on the command line. Typically, the command
// line option is `-D' as in `-DEXP_DELAY_N=13', but the details
// vary between different preprocessors, so you should consult your
// preprocessor manual for instructions.
//
// Finally we evaluate our simple program.
//<
ORDER_PP(8exp_delay(EXP_DELAY_N))
//>
// It should be very easy for a preprocessor to preprocess
// `8exp_delay(n)' in $O(n)$ space. Unfortunately, many
// preprocessors actually seem to allocate lots of memory (easily
// gigabytes of memory) during macro expansion and also seem not to
// release that memory until macro expansion (replacement of a
// top-level macro invocation) is finished.\footnote{Could this have
// something to do with the lack of garbage collection in C and
// C++?} On many preprocessors, this simple program quickly runs out
// of memory.
//
// \begin{exercise}
// Try preprocessing this example with different values of
// `EXP_DELAY_N'. What is the maximum number you can use before the
// preprocessor runs out of memory or you get tired of waiting?
// \end{exercise}
//
// \begin{exercise}
// Convince yourself that `8exp_delay(n)' can be evaluated in $O(n)$
// space. Does your preprocessor run out of memory while expanding
// this example? If so, then, for extra credit, write a formal proof
// and send it to your preprocessor vendor.
// \end{exercise}
//
// \begin{exercise}
// Modify this example so that instead of expanding to nothing, each
// time `8exp_delay' is called, it outputs a single `+'. How many
// `+' tokens you get when `EXP_DELAY_N' is `10' or `50' (assuming
// the program would actually finish)?
// \end{exercise}
