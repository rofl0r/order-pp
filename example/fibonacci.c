// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include <stdio.h>
# include "order/interpreter.h"

// \section{Preprocessing--time Fibonacci} %************************
//
// This simple example shows how you can implement algorithms in the
// Order language using recursion.
//
// Let's start with a recursive C implementation of the Fibonacci
// function. First we'll define the \code{fib_iter} function:
// \begin{verbatim}
int fib_iter(int n, int i, int j) {
  if (!n)
    return i;
  else
    return fib_iter(n-1, j, i+j);
}
// \end{verbatim}
// \code{fib_iter(n,i,j)} recursively performs \code{n} steps of
// Fibonacci iteration, starting with the values \code{i} and
// \code{j}. During recursion, \code{i} and \code{j} act as
// accumulators. Then we'll define the function \code{fib}, which is
// just a simple driver for the Fibonacci iterator function.
// \begin{verbatim}
int fib(int n) {
  return fib_iter(n, 0, 1);
}
// \end{verbatim}
//
// We can easily translate the above algorithm to Order code. First
// we'll define the driver function \code{8fib}:
// \begin{verbatim}
#define ORDER_PP_DEF_8fib                       \
ORDER_PP_FN(8fn(8N,                             \
                8fib_iter(8N, 0, 1)))
// \end{verbatim}
// As you can see, the Order function \code{8fib} is structurally
// very similar to the previously defined C function \code{fib}. We
// can refer to the \code{8fib_iter} function without having to
// declare it first. Then we'll define the Order function
// \code{8fib_iter}, which is structurally very similar to the C
// function \code{fib_iter}:
// \begin{verbatim}
#define ORDER_PP_DEF_8fib_iter                                  \
ORDER_PP_FN(8fn(8N, 8I, 8J,                                     \
                8if(8is_0(8N),                                  \
                    8I,                                         \
                    8fib_iter(8dec(8N), 8J, 8add(8I, 8J)))))
// \end{verbatim}
// The Order function \code{8fib} can now be used to compute
// Fibonacci numbers.
//
// One use for the above metafunction could be to calculate
// constants during preprocessing time to avoid computing the same
// constants in runtime. Consider the following \code{main}
// function:
// \begin{verbatim}
int main(void) {
   printf
     ("The 100th Fibonacci number is "
      ORDER_PP(8stringize(8to_lit(8fib(100))))
      ".\n");
   return 0;
}
// \end{verbatim}
// Unless you are already convinced, you should check, by
// preprocessing this example, that the actual parameter to
// \code{printf} in the above code is just a single string that
// contains the 100th Fibonacci number in base 10.
//
// If you know the order of growth of Fibonacci numbers, you
// probably realized that the result isn't exactly small. In fact,
// the 100th Fibonacci number contains 21 digits in base 10. Order
// actually implements full arbitrary precision natural arithmetic.
//
// \subsection*{Exercises} %========================================
//
// \begin{enumerate}
// \item Verify that the 100th Fibonacci number is computed
//       correctly.
//
// \item Is the \code{8fib_iter} function tail recursive? How
//       much space does the evaluation of \code{8fib_iter(n)} use
//       in terms of \code{n}?
//
// \item Modify this example so that it prints the first 50
//       Fibonacci numbers computed using the \code{8fib} function.
//       (Hint: Use the function \code{8for_each_in_range} and the
//       operator \code{8emit}.)
// \end{enumerate}
