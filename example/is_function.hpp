#ifndef ORDER_EXAMPLE_IS_FUNCTION_HPP_VAJK20040620
#define ORDER_EXAMPLE_IS_FUNCTION_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// ## `is_function_tester' templates
//
// The following Order program generates the 'is_function_tester'
// templates of the earliest Boost.PP (see http://www.boost.org)
// example.

ORDER_PP
(8for_each_in_range
 (8nat(0), 8nat(3,0),
  8fn(8I,
      8print((template<class R) 8emit_trailing_params(8nat(0),
                                                      8I,
                                                      8(class A)) (>)
             (yes_type is_function_tester)
             8parens((R(*)) 8parens(8emit_params(8nat(0), 8I, 8(A))))
             (;)))))

// As you can see, no ad-hoc code generation macros were needed to
// produce the output. In fact, the Order interpreter is complete in
// the sense that it can theoretically produce any sequence of up to
// a few billion tokens without requiring the use of additional
// macros. However, it usually makes sense to use ad-hoc code
// generation macros, as well as Order definition macros, because
// they can both simplify and speed up the generator program.
//
// ### Exercises
//
// 1. Rewrite this example using a ad-hoc code generation macro and
//    `8emit' instead of `8print'.

#endif
