// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <iostream>

# include "enum.hpp"

// ### Usage
//
//<
ENUM(naked_gun,
     (from_the_files_of_police_squad, 1)
     (the_smell_of_fear)
     (the_final_insult, 33))

int main(void) {
  std::cout
    << to_string(to_naked_gun("from_the_files_of_police_squad")) << '\n'
    << to_string(to_naked_gun("the_smell_of_fear")) << '\n'
    << to_string(to_naked_gun("the_final_insult")) << '\n';

  return 0;
}
//>
