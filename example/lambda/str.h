#ifndef ORDER_EXAMPLE_LAMBDA_STR_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_STR_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stddef.h>

// This utility module provides a number of functions for the manipulation
// of null terminated constant strings. Strings created by this module are
// interned, meaning that only one string containing a particular sequence
// of characters is allocated. Interned strings can be compared for
// equality using pointer comparison.

typedef const char *str_type;

// `str_end' is used as a marker for terminating variable argument lists.
static const str_type str_end = 0;

// `str_intern(str)' interns the string `str'. The return value is the
// interned string. The same pointer will be return for all strings that
// have the sequence of characters.
extern str_type str_intern(str_type str);

// `str_substr(first, beyond)' interns a new string that holds the
// substring $[first,beyond[$. The pointers `first' and `beyond' must
// point into the same string.
extern str_type str_substr(str_type first, str_type beyond);

// `str_cat(s1, s2, ..., sN, str_end)' interns a new string that contains
// the sequence `s1s2 ... sN'. The `str_end' parameter terminates the
// variable argument list and must always be passed as the last actual
// parameter.
extern str_type str_cat(str_type s0, ...);

// `str_num_prefix_spaces(str)' returns the number of spaces at the start
// of the string `str'.
extern ptrdiff_t str_num_prefix_spaces(str_type str);

// `str_is_non_empty_prefix(maybe_prefix, str)' tests whether the string
// `maybe_prefix' is a non empty prefix of the string `str'. If the string
// `maybe_prefix' is a prefix of the string `str', then the return value
// is the length of the string `maybe_prefix'. Otherwise the return value
// will be `0'. Note that if the length of `maybe_prefix' is `0', then the
// return value will always be `0'.
extern ptrdiff_t str_is_non_empty_prefix(str_type maybe_prefix, str_type str);

#endif
