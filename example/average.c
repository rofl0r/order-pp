// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <stdio.h>
# include "average.h"

// ### Testing
//
// The last thing to do is to test our macro. The following `main'
// program is just a simple test of the `GEN_average' macro.
//<
int main(void) {
  printf(GEN_average(3, 1, 4, 1, 5, 9, 2, 6, 5) == 4
         ? "OK.\n"
         : "ERROR!\n");

  return 0;
}
//>
// ### Conclusion
//
// It is probably safe to say that, compared to an average function
// implemented using C++ template metaprogramming techniques, our
// macro is both simpler and more flexible. Unsurprisingly, however,
// Scheme `syntax-case' macros and Common Lisp macros admit an even
// simpler and more robust implementation of the concept.
//
// \begin{exercise}
// Implement an `average' macro using the `syntax-rules' macro
// system of Scheme. You'll get an extra point if your macro does
// not have an arbitrary limit on the number of arguments and the
// number of elements is actually computed in macro expansion time.
// \end{exercise}
