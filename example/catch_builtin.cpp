// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <iostream>
#include <typeinfo>
#include "order/interpreter.h"

#define ORDER_PP_DEF_8builtin_types                     \
ORDER_PP_CONST((bool)                                   \
               (char)(signed char)(unsigned char)       \
               (wchar_t)                                \
               (unsigned short)(short)                  \
               (int)(unsigned)                          \
               (long)(unsigned long)                    \
               (float)(double)(long double))

#define GEN_catch(type)                                         \
catch (type t) {                                                \
  std::cerr << "Caught an " << typeid(t).name() << " = " << t;  \
}

int main() {
   try {
     throw 10;
   }
   ORDER_PP(8seq_for_each(8fn(8TY,
                              8emit(8quote(GEN_catch),
                                    8tuple(8TY))),
                          8builtin_types));
   return 0;
}

#undef GEN_catch
