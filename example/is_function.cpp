// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include "static_assert.h"
# include "is_function.hpp"

// ### Testing
//
// Like always, we'd like to test that the component we have
// implemented at least appears to work.\footnote{Except in rare
// cases, it is impossible to prove correctness by testing.} The
// following simple sanity checks should suffice:
//<
STATIC_ASSERT(!is_function<int>::value);
STATIC_ASSERT(!is_function<void>::value);

STATIC_ASSERT(is_function<int(int,int,int)>::value);
STATIC_ASSERT(is_function<int(int)>::value);
STATIC_ASSERT(is_function<int()>::value);
//>
// `STATIC_ASSERT' is just a simple utility macro for writing static
// (compile-time) assertions.
//
// \begin{exercise}
// Rewrite this example using a ad hoc code generation macro and
// `8emit' instead of `8print'. Do you prefer one style over the
// other? Which one is faster?
// \end{exercise}
