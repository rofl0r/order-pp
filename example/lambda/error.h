#ifndef ORDER_EXAMPLE_LAMBDA_ERROR_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_ERROR_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stdlib.h>

// `error(fmt, ...)' prints the formatted string to `stderr'.
extern void error(const char* fmt, ...);

// `ERROR_exit(fmt, ...)' calls `error(fmt, ...)' and then calls
// `exit(EXIT_FAILURE)' to terminate the program.
#define ERROR_exit(fmt, ...)                    \
do {                                            \
  error(fmt, __VA_ARGS__);                      \
  exit(EXIT_FAILURE);                           \
} while (1)

#endif
