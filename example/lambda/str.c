// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "checked_malloc.h"
#include "str.h"
#include <assert.h>
#include <ctype.h>
#include <stdarg.h>
#include <string.h>

static struct str_entry {
  struct str_entry* next;
  str_type datum;
} *entries = 0;

str_type str_intern(str_type str) {
  assert(str);

  struct str_entry* entry = entries;
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

ptrdiff_t str_num_prefix_spaces(str_type str) {
  assert(str);

  str_type start = str;
  while (isspace(*str))
    ++str;
  return str - start;
}

ptrdiff_t str_is_non_empty_prefix(str_type maybe_prefix, str_type str) {
  assert(maybe_prefix);
  assert(str);

  str_type start = maybe_prefix;

  while ('\0' != *maybe_prefix && *maybe_prefix == *str) {
    ++maybe_prefix;
    ++str;
  }

  return '\0' == *maybe_prefix
    ? maybe_prefix - start
    : 0;
}
