# ifndef ORDER_EXAMPLE_IS_INTEGRAL_HPP_VAJK20040620
# define ORDER_EXAMPLE_IS_INTEGRAL_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Is Integral -Type Trait
//
// In this example we generate a repetitive implementation of a C++
// type trait template. The goal is to build a type trait template
// by the name `is_integral<T>', which tests whether a given type is
// an integral type or not. For example,
//<
//   is_integral<short>::value
//>
// is supposed to be `true' and
//<
//   is_integeral<float>::value
//>
// is supposed to be `false'. This isn't the whole story, however.
// The template should also allow the type to be cv-qualified. For
// example,
//<
//   is_integral<volatile long>::value
//>
// should also be `true'.
//
// To implement the `is_integral<T>' type trait, we begin by writing
// the non-specialized template that handles all the non-integral
// types:
//<
template<class T> struct is_integral
{ static const bool value = false; };
//>
// We also need to define specializations of the above template for
// each integral type and cv-qualifier pair. This means that we need
// a total of $2*2*10=40$ specializations. The spealizations would
// look like this:
//<
//   template<> struct is_integral<int>
//   { static const bool value = true; };
//   template<> struct is_integral<const int>
//   { static const bool value = true; };
//   template<> struct is_integral<volatile int>
//   { static const bool value = true; };
//   template<> struct is_integral<const volatile int>
//   { static const bool value = true; };
//   // and so on for all the 9 remaining integral types...
//>
// That would be a lot of code to write. Instead of manually writing
// the code, we'll implement a simple Order metaprogram that
// generates the specializations.
//<
ORDER_PP(8seq_for_each_in_product
         (8fn(8C, 8V, 8T,
              8print((template<> struct is_integral<) 8C 8V 8T (>)
                     ({ static const bool value = true; };))),
          8((()(const))
            (()(volatile))
            ((char)
             (wchar_t)
             (signed char)(unsigned char)
             (short)(unsigned short)
             (int)(unsigned int)
             (long)(unsigned long)))))
//>
// The above program generates all the desired specializations. The
// program uses the higher-order function `8seq_for_each_in_product'
// to invoke the anonymous function `8fn(...)' for each element of
// the cartesian product of cv-qualifiers and integral types. The
// anonymous function uses a simple `8print'-expression to generate
// one specialization of the `is_integral<T>'-template on each
// invocation.

# endif
