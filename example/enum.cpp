// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <iostream>
# include "enum.hpp"

// ### Usage
//
// To demonstrate the use of the `ENUM'-macro, we'll write a simple
// `ENUM'-specification:
//
//<
ENUM(naked_gun,
     (from_the_files_of_police_squad, 1)
     (the_smell_of_fear)
     (the_final_insult, 33))
//>
// Then we'll use the generated conversion functions and output the
// strings returned by the `to_string'-function:
//<
int main(void) {
  std::cout
    << to_string(to_naked_gun("from_the_files_of_police_squad"))
    << '\n'
    << to_string(to_naked_gun("the_smell_of_fear"))
    << '\n'
    << to_string(to_naked_gun("the_final_insult"))
    << '\n';

  return 0;
}
//>
//
// \begin{exercise}
// The conversion from the value of an enumerator to a string can be
// done in constant time easily when the values of the enumerators
// are known to be consecutive. This is known to be the case when
// all but the first enumerator use the default value. Implement the
// constant time conversion as an optimization.
// \end{exercise}
//
// \begin{exercise}
// Extend the `ENUM'-macro to optionally generate a standard stream
// inserter and a stream extractor for the defined enumerated type.
// \end{exercise}
//
// \begin{exercise}
// Extend the `ENUM'-macro to optionally generate constructors for
// the enumerated type. The constructors should check that that the
// specified integral value or string identifier is one of the
// enumerators and throw an exception if that is not the case.
// \end{exercise}
