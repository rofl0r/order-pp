// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

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
STATIC_ASSERT(is_integral<const unsigned>::value);
STATIC_ASSERT(is_integral<char>::value);
STATIC_ASSERT(is_integral<long>::value);
STATIC_ASSERT(is_integral<const volatile wchar_t>::value);
//>
// The above is just a minimal test. We leave it as an exercise to
// generate a more thorough test.
//
// \begin{exercise}
// The above code tests only a small subset of the specializations.
// Write an Order metaprogram that generates one test for each
// specialization of the `is_integral<T>'-template. Can
// comprehensive testing prove that the `is_integral<T>' type trait
// is implemented correctly?
// \end{exercise}
//
// \begin{exercise}
// The specializations of the `is_integral<T>'-template were
// generated using a `8print'-expression. Rewrite this example using
// an ad hoc code generation macro. Does the use of an ad hoc code
// generation macro make a noticeable preprocessing speed
// difference?
// \end{exercise}
