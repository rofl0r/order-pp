// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "checked_malloc.h"
#include "str.h"
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

str_type str_intern(str_type str) {
  assert(str);

  // We use a simple linked list to store the interned strings. This
  // isn't meant to be an industry strength implementation!
  typedef struct str_entry {
    struct str_entry* next;
    str_type datum;
  } *str_entry;

  static str_entry entries = 0;

  str_entry entry = entries;
  while (entry && strcmp(entry->datum, str))
    entry = entry->next;

  if (entry)
    return entry->datum;

  entry = checked_malloc(sizeof(struct str_entry));
  entry->next = entries;
  entry->datum = str;
  entries = entry;

  return str;
}

str_type str_substr(str_type first, str_type beyond) {
  assert(first);
  assert(beyond);

  const ptrdiff_t len = beyond - first;

  char* result = checked_malloc(len + 1);
  memcpy(result, first, len);
  result[len] = '\0';

  return str_intern(result);
}

str_type str_cat(str_type str0, ...) {
  assert(str0);

  ptrdiff_t tot_len = 0;
  {
    va_list args;
    va_start(args, str0);

    str_type stri = str0;
    do {
      tot_len += strlen(stri);
      stri = va_arg(args, str_type);
    } while (str_end != stri);

    va_end(args);
  }

  char* const result = checked_malloc(tot_len + 1);
  {
    va_list args;
    va_start(args, str0);

    char* dst = result;
    str_type stri = str0;
    do {
      ptrdiff_t len = strlen(stri);
      memcpy(dst, stri, len);
      dst += len;
      stri = va_arg(args, str_type);
    } while (str_end != stri);

    dst[0] = '\0';

    va_end(args);
  }
  return str_intern(result);
}

void str_skip_spaces(str_type *pstr) {
  assert(pstr);
  assert(*pstr);

  str_type str = *pstr;
  while (isspace(*str))
    ++str;
  *pstr = str;
}

_Bool str_match_prefix(str_type *pstr, str_type maybe_prefix) {
  assert(pstr);
  assert(*pstr);
  assert(maybe_prefix);

  str_type str = *pstr;

  while ('\0' != *maybe_prefix && *maybe_prefix == *str) {
    ++maybe_prefix;
    ++str;
  }

  if ('\0' == *maybe_prefix) {
    *pstr = str;
    return 1;
  } else {
    return 0;
  }
}

str_type uint_to_str(unsigned int n) {
  const int result_size = (sizeof(n)*CHAR_BIT + 2)/3 + 1;
  char* result = checked_malloc(result_size);
  int required_size = snprintf(result, result_size, "%u", n);
  // We do not expect errors, because the result buffer can hold the
  // base 10 representation of any unsigned integer.
  assert(0 <= required_size && required_size <= result_size);
  return str_intern(result);
}
