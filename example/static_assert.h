# ifndef ORDER_EXAMPLE_STATIC_ASSERT_HPP_VAJK20040620
# define ORDER_EXAMPLE_STATIC_ASSERT_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include "order/interpreter.h"

#define STATIC_ASSERT(const_exp)                                        \
typedef int ORDER_PP_FRESH_ID(static_assert)[(const_exp) ? 1 : -1];

# endif
