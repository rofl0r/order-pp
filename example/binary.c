// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include "binary.h"

// ### Test
//
// The last thing to do is to test our macro. The following `main'
// program is just a simple test of the `BINARY' macro.

#define CHECK(actual, expected)                         \
printf(actual == expected                               \
       ? #actual " == " #expected " -- OK.\n"           \
       : #actual " != " #expected " -- ERROR!\n")

int main() {
  CHECK(BINARY(0), 0);
  CHECK(BINARY(1), 1);

  CHECK(BINARY(0 0), BINARY(00));
  CHECK(BINARY(0 1), BINARY(01));
  CHECK(BINARY(1 0), BINARY(10));
  CHECK(BINARY(1 1), BINARY(11));

  CHECK(BINARY(1 01 010 0010 11), 0xA8B);

  return 0;
}
