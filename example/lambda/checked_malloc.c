// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#include "checked_malloc.h"
#include "error.h"
#if !defined(CHECKED_MALLOC_NO_GC)
#include <gc/gc.h>
#else
#include <malloc.h>
#define GC_MALLOC malloc
#define GC_INIT() ((void)0)
#endif

void* checked_malloc(ptrdiff_t size) {
  static _Bool inited = 0;
  if (!inited) {
    inited = 1;
    GC_INIT();
  }

  if (size < 0)
    ERROR_exit("Negative size of %td bytes specified to checked_malloc.", size);
  void* result = GC_MALLOC(size);
  if (!result)
    ERROR_exit("Allocation of %td bytes failed.", size);
  return result;
}
