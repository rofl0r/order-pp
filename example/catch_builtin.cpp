// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <iostream>
#include <typeinfo>
#include "order/interpreter.h"

int main() {
   try {
     throw 10;
   }
   ORDER_PP(8seq_for_each
            (8fn(8TN,
                 8print((catch) 8parens(8TN (t))
                        ({ std::cerr << "Caught a ") 8stringize(8TN) (" = " << t; }))),
             8((bool)
               (char)(signed char)(unsigned char)
               (wchar_t)
               (short)(unsigned short)
               (int)(unsigned)
               (long)(unsigned long)
               (float)(double)(long double))));
   return 0;
}
