// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include "average.h"

// ### Test
//
// The last thing to do is to test our macro. The following `main'
// program is just a simple test of the `GEN_average' macro.

int main() {
  printf(GEN_average(3, 1, 4, 1, 5, 9, 2, 6, 5) == 4
         ? "OK.\n"
         : "ERROR!\n");

  return 0;
}
