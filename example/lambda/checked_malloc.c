// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "checked_malloc.h"
#include "error.h"
#include <malloc.h>

void* checked_malloc(ptrdiff_t size) {
  if (size < 0)
    ERROR_exit("Negative size of %d bytes specified to checked_malloc.", size);
  void* result = malloc(size);
  if (!result)
    ERROR_exit("Allocation of %d bytes failed.", size);
  return result;
}
