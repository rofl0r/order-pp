// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "typelist.hpp"

typedef TYPELIST((signed char)
                 (short)
                 (int)
                 (long))
  signed_types;

typedef TYPELIST((typelist::cons<signed char, unsigned char>)
                 (typelist::cons<short, unsigned short>)
                 (typelist::cons<int, unsigned int>)
                 (typelist::cons<long, unsigned long>))
  signed_and_unsigned_type_pairs;

int main() {}
