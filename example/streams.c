// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Generating Tables with Streams
//
// This example shows how streams can be used for generating tables.
//
// ### What is a Stream?
//
// A \emph{stream} is basically a list whose elements are computed
// \emph{lazily} as they are requested.\footnote{There is a good
// introduction to streams in the book ``Structure and
// Interpretation of Computer Programs'' \cite{abelson:1996}.} The
// laziness has a couple of useful consequences. First of all, it is
// possible to represent \emph{infinite} lists, e.g. the list of all
// natural numbers. Only a finite number of the elements of an
// infinite stream will ever be computed by an algorithm (a program
// that terminates in finite time). Due to the laziness, one can
// often express algorithms on streams in ways that would be
// horribly inefficient for strict data structures. For example, to
// produce a stream of all the squares of natural numbers less than
// 100, one can (symbolically) compute the stream of squares of
// \emph{all} natural numbers and then take elements from that
// stream only as long as the numbers are less than 100:
//<
//   8stream_take_while(8greater(100),
//                      8stream_map(8sq,
//                                  8stream_of_naturals))
//>
// Only the squares of the first 11 natural numbers would be
// computed if the above stream would be traversed. By itself, the
// above expression actually computes only the first square $0^2=0$.


//<
#include "order/lib/stream.h"
//>

//<
#define ORDER_PP_DEF_8stream_of_fibs                    \
ORDER_PP_MACRO(8stream_map                              \
               (8tuple_at_0,                            \
                8stream_iterate                         \
                (8step(8tuple(8tuple_at_1,              \
                              8uncurry(8plus))),        \
                 8((0,1)))))
//>

//<
#include "order/lib/limits.h"

const unsigned long long
fib[] = {
  ORDER_PP(8stream_for_each
           (8chain(8emit_comma,
                   8put,
                   8flip(8paste,8(ul)),
                   8to_lit),
            8stream_take_while(8greater_eq(8ullong_max),
                               8stream_of_fibs)))
};
//>

//<
#define ORDER_PP_DEF_8sieve                                     \
ORDER_PP_FN(8fn(8S,                                             \
                8stream_cons                                    \
                (8stream_head(8S),                              \
                 8sieve(8stream_filter                          \
                        (8or_chain                              \
                         (8greater(8sq(8stream_head(8S))),      \
                          8chain(8isnt_0,                       \
                                 8flip(8remainder,              \
                                       8stream_head(8S)))),     \
                         8stream_tail(8S))))))
//>

//<
#define ORDER_PP_DEF_8stream_of_primes                  \
ORDER_PP_MACRO(8stream_cons                             \
               (2,                                      \
                8sieve(8stream_iterate(8plus(2),3))))
//>

//<
const int
prime[] = {
  ORDER_PP(8stream_for_each
           (8chain(8emit_comma,
                   8put,
                   8to_lit),
            8stream_take(16,8stream_of_primes)))
};
//>

//<
int main() {
  return 0;
}
//>
