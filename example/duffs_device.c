// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include <stdlib.h>
#include "order/interpreter.h"

// ## Duff's device
//
// In this example we will use the Order interpreter to implement a
// macro for generating Duff's device. A Duff's device, named after
// Tom Duff, who discovered it, is an idiom for expressing loop
// unrolling in C using a switch-case. For example, consider the
// following simple array copying loop:

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

// Above, the `GEN_duffs_device' macro would generate the repetitive
// switch-case statement, freeing us from the manual labor.
//
// Now that we know what we want, we are ready to implement the
// desired macro.

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
                 (8fn(8I,                               \
                      8print((case)                     \
                             8to_lit(8I)                \
                             (: __VA_ARGS__))),         \
                  8(unroll_cnt),                        \
                  1))                                   \
      } while (--ORDER_PP_FRESH_ID(running_cnt));       \
    }                                                   \
  }                                                     \
} while (0)

// The `GEN_duffs_device' macro uses a do-while block to scope the
// generated code and to ensure that our macro plays nice with other
// C statements. The `ORDER_PP_FRESH_ID' macro is used for
// generating identifiers tagged by the source line number on which
// the macro is invoked. The intention is to avoid unintended
// variable capture and make the generated code referentially
// transparent. The technique isn't entirely fool proof, because
// another macro could generate similarly named identifiers on the
// same line, but it avoids the most common problems.
//
// The most interesting parts of the above macro are the parts where
// we invoke the Order interpreter using the `ORDER_PP' macro to
// evaluate an Order program. We actually invoke the interpreter
// several times. The first two programs compute simple constants
// based on the unrolling factor. The third program is more
// complicated and it generates the cases, except for the first, of
// the switch-case statement, using the higher-order function
// `8for_each_in_range'.
//
// Before we get to the exercises, we'd like to check that our
// generator doesn't have obvious bugs. The following `main' program
// is a simple test. It checks that the body of a Duff's device is
// executed the proper number of times for a range of loop counts.
// We also make the main program configurable through the
// conditional macro definition `UNROLLING_FACTOR'.

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

// How about compiling and running this example to see if our Duff's
// device generation macro works as expected?
//
// ### Acknowledgements
//
// This example was inspired by an original macro written by Joerg
// Walter for generating Duff's Device.
//
// ### Exercises
//
// 1. The `array_ops.c' example generates array manipulation
//    procedures. The generated procedures use an a simple loop to
//    process the arrays. Change the `array_ops.c' example to use
//    the `GEN_duffs_device' macro to generate unrolled array
//    manipulation procedures. Did the unrolling improve the
//    performance of the generated array manipulation procedures?
//
// 2. The use of the switch-case statement for unrolling can
//    actually make it difficult for a compiler to take full
//    advantage of unrolling, because it may make it more difficult
//    to reorder the generated machine instructions in the unrolled
//    loop for optimal CPU pipeline usage. Implement a new macro
//    `UNROLL', with parameters identical to `GEN_duffs_device',
//    that generates an unrolled loop without using a switch-case.
//    The inner loop of the generated code should simply repeat the
//    given statements by the unrolling factor. The remainder
//    elements can be handled using an additional loop. Which
//    technique allows your compiler to generate better code?
