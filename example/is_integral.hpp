#ifndef ORDER_EXAMPLE_IS_INTEGRAL_HPP_VAJK20040620
#define ORDER_EXAMPLE_IS_INTEGRAL_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// This example demonstrates the usage of the Order interpreter for
// generating C++ code.
//
// Here is a template for testing whether a type is an integral type.

template<class T> struct is_integral
{ enum { value = false }; };

// We also need to define specializations of the above template for
// each integral type and cv-qualifier pair.

ORDER_PP(8seq_for_each_in_product
         (8fn(8CV,8TY,
              8print((template<> struct is_integral<) 8CV 8TY (>)
                     ({ enum { value = true }; };))),
          8seq(8((,)(,const)(,volatile)(,const volatile)),
               8seq_append
               (8((,char)(,wchar_t)),
                8let(8TS, 8((,char)(,short)(,int)(,long)),
                     8seq_append
                     (8TS,
                      8seq_map(8fn(8TY,
                                   8expand(8(unsigned),8TY)),
                               8TS)))))))

#undef GEN_is_integral_specialization

#endif
