// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <stdio.h>
# include "order/interpreter.h"

// ## Preprocessing-time Fibonacci
//
// This simple example shows how you can implement algorithms in the
// Order language using recursion.
//
// Let's start with a recursive C implementation of the Fibonacci
// function. First we'll define the `fib_iter' function:
//<
int fib_iter(int n, int i, int j) {
  if (!n)
    return i;
  else
    return fib_iter(n-1, j, i+j);
}
//>
// `fib_iter(n,i,j)' recursively performs `n' steps of Fibonacci
// iteration, starting with the values `i' and `j'. During
// recursion, `i' and `j' act as accumulators. Then we'll define the
// function `fib', which is just a simple driver for the Fibonacci
// iterator function.
//<
int fib(int n) {
  return fib_iter(n, 0, 1);
}
//>
//
// We can easily translate the above algorithm to Order code. First
// we'll define the driver function `8fib':
//<
#define ORDER_PP_DEF_8fib                       \
ORDER_PP_FN(8fn(8N,                             \
                8fib_iter(8N, 0, 1)))
//>
// As you can see, the Order function `8fib' is structurally
// very similar to the previously defined C function `fib'. We
// can refer to the `8fib_iter' function without having to
// declare it first. Then we'll define the Order function
// `8fib_iter', which is structurally very similar to the C
// function `fib_iter':
//<
#define ORDER_PP_DEF_8fib_iter                                  \
ORDER_PP_FN(8fn(8N, 8I, 8J,                                     \
                8if(8is_0(8N),                                  \
                    8I,                                         \
                    8fib_iter(8dec(8N), 8J, 8add(8I, 8J)))))
//>
// The Order function `8fib' can now be used to compute
// Fibonacci numbers.
//
// One use for the above metafunction could be to calculate
// constants during preprocessing time to avoid computing the same
// constants in runtime. Consider the following `main'
// function:
//<
int main(void) {
   printf
     ("The 100th Fibonacci number is "
      ORDER_PP(8stringize(8to_lit(8fib(100))))
      ".\n");
   return 0;
}
//>
// Unless you are already convinced, you should check, by
// preprocessing this example, that the actual parameter to
// `printf' in the above code is just a single string that
// contains the 100th Fibonacci number in base 10.
//
// If you know the order of growth of Fibonacci numbers, you
// probably realized that the result isn't exactly small. In fact,
// the 100th Fibonacci number contains 21 digits in base 10. Order
// actually implements full arbitrary precision natural arithmetic.
//
// \begin{exercise}
// Verify that the 100th Fibonacci number is computed correctly.
// \end{exercise}
//
// \begin{exercise}
// Is the `8fib_iter' function tail recursive? How much space does
// the evaluation of `8fib_iter(n)' require in terms of `n'? Try
// evaluating this program using a considerably larger `n' like
// `8nat(1,0,0,0,0)'. Does your preprocessor run out of memory? If
// so, ask your preprocessor vendor why it happens.
// \end{exercise}
//
// \begin{exercise}
// Modify this example so that it prints the first 50 Fibonacci
// numbers computed using the `8fib' function. (Hint: Use the
// function `8for_each_in_range' and the operator `8emit'.)
// \end{exercise}
