// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include <stdlib.h>
#include "order/interpreter.h"

// ## Duff's device
//
// This example, inspired by an original macro by Joerg Walter, uses
// the Order interpreter to implement a macro for generating Duff's
// device. A Duff's device, named after Tom Duff, who discovered it,
// is an idiom for expressing loop unrolling in C using a switch
// case. For example, consider the following simple array copying
// loop:

#if 0
void copy(int* to, const int* from, int n)
{
  if (n > 0) do
    *to++ = *from++;
  while (--n > 0);
}
#endif

// Applying the idiom, we could unroll it like this:

#if 0
void copy(int* to, int* from, int n)
{
  if (n > 0) {
    int cnt = (n + 7) / 8;
    switch (n % 8) {
      do {
      case 0: *to++ = *from++;
      case 7: *to++ = *from++;
      case 6: *to++ = *from++;
      case 5: *to++ = *from++;
      case 4: *to++ = *from++;
      case 3: *to++ = *from++;
      case 2: *to++ = *from++;
      case 1: *to++ = *from++;
      } while (--cnt > 0);
    }
  }
}
#endif

// It should be noted that the idiom is frequently misunderstood. It
// has nothing to do with memory copying in particular, nor it is
// intended to be the last word in code optimization. It is merely
// an interesting way to implement unrolling in C. Unrolling, of
// course, is an optimization technique that one should only use
// when there are no simple algorithmic improvements, the loop body
// is short enough that the loop overhead is significant and most
// importantly, the loop is a performance bottleneck. It might also
// be the case that the compiler is already performing loop
// unrolling, in which case it is usually better to let the compiler
// do the job.
//
// While the idiom makes it convenient to handle the iterations
// modulo unrolling factor, the programmer still needs to manually
// repeat the loop body, which is boring. We'd like to generate the
// unrolled loop automatically, so that we could just specify the
// desired unrolling factor and write the loop body statement once.
// Essentially, we'd like to be able to write the unrolled copying
// loop something like this:

#if 0
void copy(int* to, int* from, int n)
{
  GEN_duffs_device(8, int, n, *to++ = *from++;);
  //               |   |   |  -- loop body ---
  //               |   |   +---- count
  //               |   +-------- counter type
  //               +------------ unrolling factor
}
#endif

//

#define GEN_duffs_device(unroll_cnt, counter_t, n, ...) \
do {                                                    \
  counter_t ORDER_PP_FRESH_ID(initial_cnt) = (n);       \
                                                        \
  if (ORDER_PP_FRESH_ID(initial_cnt) > 0) {             \
    counter_t ORDER_PP_FRESH_ID(running_cnt) =          \
      (ORDER_PP_FRESH_ID(initial_cnt) +                 \
       ORDER_PP(8to_lit(8dec(8(unroll_cnt))))) /        \
      ORDER_PP(8to_lit(8(unroll_cnt)));                 \
                                                        \
    switch (ORDER_PP_FRESH_ID(initial_cnt) %            \
            ORDER_PP(8to_lit(8(unroll_cnt)))) {         \
      do {                                              \
      case 0 : __VA_ARGS__                              \
        ORDER_PP(8for_each_in_range                     \
                 (8(unroll_cnt), 1,                     \
                  8fn(8I,                               \
                      8print((case)                     \
                             8to_lit(8I)                \
                             (: __VA_ARGS__)))))        \
      } while (--ORDER_PP_FRESH_ID(running_cnt));       \
    }                                                   \
  }                                                     \
} while (0)

// The `main' program is a simple test. It checks that the body of a
// Duff's device is executed the proper number of times. We also
// make this example configurable through the conditional macro
// definition `UNROLLING_FACTOR'.

#ifndef UNROLLING_FACTOR
#define UNROLLING_FACTOR 8
#endif

int main(void) {
  for (int i=0; i<UNROLLING_FACTOR*2+2; ++i) {
    int cnt=0;
    GEN_duffs_device(UNROLLING_FACTOR, int, i, ++cnt;);
    if (cnt != i) {
      printf("ERROR: Unrolling factor = "
             ORDER_PP(8stringize(8to_lit(8(UNROLLING_FACTOR))))
             ", i = %d and cnt = %d.\n", i, cnt);
      exit(EXIT_FAILURE);
    }
  }
  printf("OK.\n");
  return 0;
}
