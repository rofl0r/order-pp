#ifndef ORDER_EXAMPLE_LAMBDA_CHECKED_MALLOC_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_CHECKED_MALLOC_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stddef.h>

// `checked_malloc(size)' allocates a new block of memory of `size'
// bytes from a garbage collected heap. If `size' is negative or the
// allocation fails, the program will be exited with an error
// message.
extern void* checked_malloc(ptrdiff_t size);

#endif
