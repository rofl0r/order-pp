# ifndef ORDER_EXAMPLE_IS_INTEGRAL_HPP_VAJK20040620
# define ORDER_EXAMPLE_IS_INTEGRAL_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Is Integral Type Trait
//
// This example demonstrates the usage of the Order interpreter for
// generating repetitive C++ code.
//
// Here is a template for testing whether a type is an integral type.
//<
template<class T> struct is_integral
{ enum { value = false }; };
//>
// We also need to define specializations of the above template for
// each integral type and cv-qualifier pair.
//<
ORDER_PP(8seq_for_each_in_product
         (8fn(8C, 8V, 8T,
              8print((template<> struct is_integral<) 8C 8V 8T (>)
                     ({ enum { value = true }; };))),
          8((()(const))
            (()(volatile))
            ((char)
             (wchar_t)
             (signed char)(unsigned char)
             (short)(unsigned short)
             (int)(unsigned int)
             (long)(unsigned long)))))
//>

# endif
