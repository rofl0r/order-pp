#ifndef ORDER_EXAMPLE_IS_FUNCTION_HPP_VAJK20040620
#define ORDER_EXAMPLE_IS_FUNCTION_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// This example, generates the 'is_function_tester<>' templates of
// the earliest Boost.PP (see http://www.boost.org) example.

ORDER_PP(8for_each_in_range
         (8nat(0), 8nat(3,0),
          8fn(8I,
              8print((template<class R) 8emit_trailing_params(8nat(0), 8I, 8(class A)) (>)
                     (yes_type is_function_tester)
                     8parenthesized((R (*)) 8parenthesized(8emit_params(8nat(0), 8I, 8(A))))(;)))))

#endif
