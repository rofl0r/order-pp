// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include "order/interpreter.h"

// This example uses the Order interpreter to implement a generalized
// macro for implementing Duff's Device.
//
// This example was inspired by an original generalized macro for
// for implementing Duff's Device written by Joerg Walter.

#define GEN_duffs_device(unrolling_factor, counter_t, n, exp)                           \
do {                                                                                    \
  counter_t duffs_device_initial_cnt = (n);                                             \
                                                                                        \
  if (duffs_device_initial_cnt > 0) {                                                   \
    counter_t duffs_device_running_cnt =                                                \
      (duffs_device_initial_cnt + (unrolling_factor - 1)) / unrolling_factor;           \
                                                                                        \
    switch (duffs_device_initial_cnt % unrolling_factor) {                              \
      do {                                                                              \
        ORDER_PP(8do(8for_each_in_range(8fn(8I,                                         \
                                            8emit(8quote(GEN_duffs_device_case),        \
                                                  8tuple(8I,8quote(exp)))),             \
                                        1,                                              \
                                        unrolling_factor),                              \
                     8emit(8quote(GEN_duffs_device_case),                               \
                           8quote((0,exp)))));                                          \
      } while (--duffs_device_running_cnt);                                             \
    }                                                                                   \
  }                                                                                     \
} while (0)

#define GEN_duffs_device_case(n,exp) case n : exp;

#ifndef UNROLLING_FACTOR
#define UNROLLING_FACTOR 16
#endif

#ifndef N
#define N 1000
#endif

int main(void) {
  int i = 0;
  GEN_duffs_device(UNROLLING_FACTOR, int, 0, ++i);
  if (i != 0) printf("Error!");
  GEN_duffs_device(UNROLLING_FACTOR, int, N, ++i);
  if (i != N) printf("Error!");
  return 0;
}
