// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <stdio.h>
# include "enum.h"

// ### Usage
//
//<
ENUM(naked_gun,
     (naked_gun_the_movie,     1)
     (naked_gun_2_and_half      )
     (naked_gun_33_and_third, 33))

int main(void) {
  printf("%s = %d\n%s = %d\n%s = %d\n",
         naked_gun_to_string(naked_gun_the_movie), naked_gun_the_movie,
         naked_gun_to_string(naked_gun_2_and_half), naked_gun_2_and_half,
         naked_gun_to_string(naked_gun_33_and_third), naked_gun_33_and_third);

  return 0;
}
//>
