// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include "static_assert.h"
# include "is_integral.hpp"

// ### Testing
//
// To test the `is_integral<T>' type trait, we will write a few
// simple sanity checks.
//<
STATIC_ASSERT(!is_integral<void>::value);
STATIC_ASSERT(!is_integral<float>::value);
STATIC_ASSERT(!is_integral<bool>::value);

STATIC_ASSERT(is_integral<int>::value);
STATIC_ASSERT(is_integral<unsigned>::value);
STATIC_ASSERT(is_integral<char>::value);
STATIC_ASSERT(is_integral<long>::value);
STATIC_ASSERT(is_integral<wchar_t>::value);
//>
