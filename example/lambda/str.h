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

// `str_skip_spaces(pstr)' advanced the string `*pstr' past the whitespace
// characters at the beginning of the string.
extern void str_skip_spaces(str_type *pstr);

// `str_match_prefix(pstr, maybe_prefix)' tests whether the string
// `maybe_prefix' is a non empty prefix of the string `*pstr'. If the
// string `maybe_prefix' is a prefix of the string `*pstr' then the return
// value will be non-zero and the `*pstr' string will be advanced by the
// length of the `maybe_prefix' string. Otherwise the return value will be
// `0' and `*pstr' will not be modified.
extern _Bool str_match_prefix(str_type *pstr, str_type maybe_prefix);

#endif
