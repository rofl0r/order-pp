/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/interpreter.h"
#include <assert.h>

/*
 * This example uses the Order interpreter to implement a generalized
 * macro for implementing Duff's Device.
 *
 * This example was inspired by an original generalized macro for
 * for implementing Duff's Device written by Joerg Walter.
 */

/* Expands to a Duff's Device. */
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
        ORDER_PP(do(for_each_in_range(fn(I,                                             \
                                         emit_expand(quote(GEN_duffs_device_case),      \
                                                     tuple(I,quote(exp)))),             \
                                      1,                                                \
                                      unrolling_factor),                                \
                    emit_expand(quote(GEN_duffs_device_case),                           \
                                quote((0,exp)))));                                      \
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
  assert(i == 0);
  GEN_duffs_device(UNROLLING_FACTOR, int, N, ++i);
  assert(i == N);
  return 0;
}
