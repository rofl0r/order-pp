// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <utility>
# include "typelist.hpp"

// ### Testing
//
// To test our `TYPELIST'-macro, we'll first exercise the base
// case:
//<
typedef TYPELIST()
  nil_list;
//>
// Then we'll try a list of 3-types:
//<
typedef TYPELIST((float)
                 (double)
                 (long double))
  floating_types;
//>
// Finally we'll try a list containing commas:
//<
typedef TYPELIST((std::pair<signed  char, unsigned  char>)
                 (std::pair<signed short, unsigned short>)
                 (std::pair<signed   int, unsigned   int>)
                 (std::pair<signed  long, unsigned  long>))
  signed_and_unsigned_type_pairs;
//>
//
// \begin{exercise}
// How can one define a ``variadic'' metafunction? (Hint: Consider
// default template arguments.)
// \end{exercise}
