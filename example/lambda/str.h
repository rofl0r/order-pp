#ifndef ORDER_EXAMPLE_LAMBDA_STR_H_VAJK20040620
#define ORDER_EXAMPLE_LAMBDA_STR_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

// This utility module provides a number of functions for the
// manipulation of constant strings. Strings created by this module
// are interned, meaning that only one string containing a
// particular sequence of characters is created. Interned strings
// can be compared for equality using pointer comparison.

// The type of constant character strings.
typedef const char *str_type;

// `str_end' is used as a marker for terminating variable argument
// lists.
static const str_type str_end = 0;

// `str_intern(str)' interns the string `str'. The return value is
// the interned string. This function does not allocate a new
// string, but the the same pointer will be returned for all strings
// that have the same sequence of characters.
extern str_type str_intern(str_type str);

// `str_substr(first, beyond)' interns a new string that holds the
// sequence of characters starting at `first' and ending just before
// `beyond'. Note that the pointers `first' and `beyond' must point
// to the same string.
extern str_type str_substr(str_type first, str_type beyond);

// `str_cat(s1, s2, ..., sN, str_end)' interns a new string that
// contains the sequence `s1s2...sN'. The `str_end' parameter
// terminates the variable argument list and must always be passed
// as the last actual parameter. Note that you just can't use `0'
// instead of `str_end', because the literal `0' is an `int'.
extern str_type str_cat(str_type s0, ...);

// `str_skip_spaces(&str)' advanced the string `str' past the
// whitespace characters at the beginning of the string.
extern void str_skip_spaces(str_type *pstr);

// `str_match_prefix(&str, maybe_prefix)' tests whether the string
// `maybe_prefix' is a prefix of the string `str'. If the string
// `maybe_prefix' is a prefix of the string `str' then the return
// value will be non-zero and the `str' string will be advanced by
// the length of the `maybe_prefix' string. Otherwise the return
// value will be `0' and `str' will not be modified. Note that
// whitespace is significant to this function.
extern _Bool str_match_prefix(str_type *pstr, str_type maybe_prefix);

// `uint_to_str(n)' converts the unsigned integer `n' to a string
// containing a decimal representation of the unsigned integer.
extern str_type uint_to_str(unsigned int n);

#endif
