#ifndef ORDER_EXAMPLE_IS_INTEGRAL_H
#define ORDER_EXAMPLE_IS_INTEGRAL_H

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// This example, which generates the 'is_function_tester<>' templates of
// the earliest Boost.PP (see http://www.boost.org) example, demonstrates
// that the Order interpreter is reentrant.

#define GEN_is_function_tester(n)                                               \
template<class R ORDER_PP(8emit_trailing_params(8quote(class A), n)) >          \
yes_type is_function_tester(R (*)(ORDER_PP(8emit_params(8quote(class A), n))));

ORDER_PP(8for_each_in_range(8fn(8I,
                                8emit(8quote(GEN_is_function_tester),
                                      8tuple(8I))),
                            0,
                            30))

#undef GEN_is_function_tester

#endif
