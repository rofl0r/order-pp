// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include "order/interpreter.h"

// ## Duff's device
//
// This example uses the Order interpreter to implement a generalized
// macro for implementing Duff's Device.
//
// This example was inspired by an original generalized macro for
// for implementing Duff's Device written by Joerg Walter.

#define GEN_duffs_device(unroll_cnt, counter_t, n, exp)                 \
do {                                                                    \
  counter_t ORDER_PP_FRESH_ID(initial_cnt) = (n);                       \
                                                                        \
  if (ORDER_PP_FRESH_ID(initial_cnt) > 0) {                             \
    counter_t ORDER_PP_FRESH_ID(running_cnt) =                          \
      (ORDER_PP_FRESH_ID(initial_cnt) + (unroll_cnt-1)) / unroll_cnt;   \
                                                                        \
    switch (ORDER_PP_FRESH_ID(initial_cnt) % unroll_cnt) {              \
      do {                                                              \
        ORDER_PP(8do(8for_each_in_range                                 \
                     (8fn(8I,                                           \
                          8emit(8quote(GEN_duffs_device_case),          \
                                8tuple(8I,8quote(exp)))),               \
                      1,                                                \
                      unroll_cnt),                                      \
                     8emit(8quote(GEN_duffs_device_case),               \
                           8quote((0,exp)))));                          \
      } while (--ORDER_PP_FRESH_ID(running_cnt));                       \
    }                                                                   \
  }                                                                     \
} while (0)

#define GEN_duffs_device_case(n,exp) case n : exp;

#ifndef UNROLLING_FACTOR
#define UNROLLING_FACTOR 4
#endif

#ifndef N
#define N 10
#endif

int main(void) {
  int i = 0;
  GEN_duffs_device(UNROLLING_FACTOR, int, 0, ++i);
  if (i != 0) printf("Error!");
  GEN_duffs_device(UNROLLING_FACTOR, int, N, ++i);
  if (i != N) printf("Error!");
  return 0;
}
