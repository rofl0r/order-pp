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

#define GEN_duffs_device(unroll_cnt, counter_t, n, ...)                 \
do {                                                                    \
  counter_t ORDER_PP_FRESH_ID(initial_cnt) = (n);                       \
                                                                        \
  if (ORDER_PP_FRESH_ID(initial_cnt) > 0) {                             \
    counter_t ORDER_PP_FRESH_ID(running_cnt) =                          \
      (ORDER_PP_FRESH_ID(initial_cnt)+unroll_cnt-1) / unroll_cnt;       \
                                                                        \
    switch (ORDER_PP_FRESH_ID(initial_cnt) % unroll_cnt) {              \
      do {                                                              \
      case 0 : __VA_ARGS__;                                             \
        ORDER_PP(8rout(8for_each_in_range                               \
                       (8nat(1),                                        \
                        8pred(8nat(unroll_cnt)),                        \
                        8fn(8I,                                         \
                            8rout(8print((case)                         \
                                         8nat_to_lit(8I)                \
                                         (: __VA_ARGS__;)))))))         \
      } while (--ORDER_PP_FRESH_ID(running_cnt));                       \
    }                                                                   \
  }                                                                     \
} while (0)

#ifndef UNROLLING_FACTOR
#define UNROLLING_FACTOR 4
#endif

int main(void) {
  for (int i=0; i<UNROLLING_FACTOR*2+2; ++i) {
    int cnt=0;
    GEN_duffs_device(UNROLLING_FACTOR, int, i, ++cnt);
    if (cnt != i)
      printf("Error!");
  }
  return 0;
}
