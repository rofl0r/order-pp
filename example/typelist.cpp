// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <utility>
# include "static_assert.h"
# include "is_same.hpp"
# include "typelist.hpp"

// ### Testing
//
// To test our `TYPELIST'-macro, we'll first exercise the base
// case:
//<
using namespace typelist;

STATIC_ASSERT(is_same<TYPELIST(), nil>::value);
//>
// Then we'll try a list of 3-types:
//<
STATIC_ASSERT(is_same<TYPELIST((float)
                               (double)
                               (long double)),
              cons<float,
              cons<double,
              cons<long double, nil> > > >::value);
//>
// Finally we'll try a list containing commas:
//<
STATIC_ASSERT
(is_same<TYPELIST((std::pair<signed  char, unsigned  char>)
                  (std::pair<signed short, unsigned short>)
                  (std::pair<signed   int, unsigned   int>)
                  (std::pair<signed  long, unsigned  long>)),
 cons<std::pair<signed  char, unsigned  char>,
 cons<std::pair<signed short, unsigned short>,
 cons<std::pair<signed   int, unsigned   int>,
 cons<std::pair<signed  long, unsigned  long> > > > > >::value);
//>
//
// \begin{exercise}
// How can one define a ``variadic'' template metafunction? (Hint:
// Consider default template arguments.)
// \end{exercise}
