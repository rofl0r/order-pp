#ifndef ORDER_EXAMPLE_IS_INTEGRAL_H
#define ORDER_EXAMPLE_IS_INTEGRAL_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/interpreter.h"

/*
 * This example, which generates the is_function_tester<> templates of the
 * earliest Boost.PP (see http://www.boost.org) example, demonstrates that
 * the Order interpreter is reentrant.
 */

#define GEN_is_function_tester(n)                                               \
template<class R ORDER_PP(emit_trailing_params(const(class A), n)) >            \
yes_type is_function_tester(R (*)(ORDER_PP(emit_params(const(class A), n))));

ORDER_PP(for_each_in_range(fn(I,
                              emit_expand(const(GEN_is_function_tester),
                                          tuple(I))),
                           0,
                           30))

#undef GEN_is_function_tester

#endif
