// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include "order/interpreter.h"

// ## Linear time Fibonacci
//
// This simple example shows how you can implement algorithms in the
// Order language using recursion.
//
// Let's start with a recursive C implementation of the Fibonacci
// function. First we'll define the `linear_fib_iter' function:

int linear_fib_iter(int n, int i, int j) {
  if (!n)
    return i;
  else
    return linear_fib_iter(n-1,
                           j,
                           i+j);
}

// `linear_fib_iter(n,i,j)' recursively performs `n' steps of
// Fibonacci iteration, starting with the values `i' and `j'. During
// recursion, `i' and `j' act as accumulators.
//
// Then we'll define the function `linear_fib', which is just a
// simple driver for the Fibonacci iterator function.

int linear_fib(int n) {
  return linear_fib_iter(n, 0, 1);
}

// We can easily translate the above algorithm to Order code. First
// we'll define the driver function `8linear_fib':

#define ORDER_PP_DEF_8linear_fib                \
ORDER_PP_FN(8fn(8N,                             \
                8linear_fib_iter(8N, 0, 1)))

// As you can see, the Order function `8linear_fib' is structurally
// very similar to the previously defined C function `linear_fib'.
//
// Note also that we can refer to the `8linear_fib_iter' function
// without having to declare it first.
//
// Then we'll define the Order function `8linear_fib_iter', which is
// structurally very similar to the C function `linear_fib_iter':

#define ORDER_PP_DEF_8linear_fib_iter                   \
ORDER_PP_FN(8fn(8N, 8I, 8J,                             \
                8if(8is_0(8N),                          \
                    8I,                                 \
                    8linear_fib_iter(8dec(8N),          \
                                     8J,                \
                                     8add(8I, 8J)))))

// The Order function `8linear_fib' can now be used to compute
// Fibonacci numbers.
//
// One use for the above metafunction could be to calculate
// constants during preprocessing time to avoid computing the same
// constants in runtime. Consider the following `main' function:

int main() {
   printf
     ("The 100th Fibonacci number is "
      ORDER_PP(8stringize(8to_lit(8linear_fib(100))))
      ".\n");
   return 0;
}

// Unless you are already convinced, you should check, by
// preprocessing this example, that the actual parameter to `printf'
// in the above code is just a single string that contains the
// 100th Fibonacci number in base 10.
//
// If you know the order of growth of Fibonacci numbers, you
// probably realized that the result isn't exactly small. In fact,
// the 100th Fibonacci number contains 21 digits in base 10. Order
// actually implements full arbitrary precision natural arithmetic.
//
// ### Exercises
//
// 1. Verify that the 100th Fibonacci number is computed correctly.
//
// 2. Is the `8linear_fib_iter' function tail recursive? How much
//    space does the evaluation of `8linear_fib_iter(n)' use in
//    terms of `n'?
//
// 3. Modify this example so that it prints the first 50 Fibonacci
//    numbers computed using the `8linear_fib' function. (Hint: Use
//    the function `8for_each_in_range' and the operator `8emit'.)
//
// 4. Implement an Order function to compute the n'th Fibonacci
//    number in $O(log(n))$ time.
