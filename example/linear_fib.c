/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/interpreter.h"
#include <stdio.h>

/*
 * This simple example shows how you can implement algorithms in Order
 * using recursion.
 */

/* First consider the following C implementation of Fibonacci. */
int linear_fib_3(int n, int i, int j) {
  if (!n)
    return i;
  else
    return linear_fib_3(n-1, j, i+j);
}

int linear_fib(int n) {
  return linear_fib_3(n, 0, 1);
}

/* Then consider the following Order implementation of Fibonacci. */
#define ORDER_PP_DEF_linear_fib_3                       \
ORDER_PP_FN(fn(N,I,J,                                   \
               if(is_0(N),                              \
                  I,                                    \
                  linear_fib_3(dec(N),J,add(I,J)))))

#define ORDER_PP_DEF_linear_fib                 \
ORDER_PP_FN(fn(N,                               \
               linear_fib_3(N,0,1)))

int main() {
   printf("linear_fib(10) = %d\n", linear_fib(10));
   printf("ORDER_PP(linear_fib(10)) = %d\n", ORDER_PP(linear_fib(10)));
   return 0;
}
