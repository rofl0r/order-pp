// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_DEF_8with_assert(cond,...)                            \
ORDER_PP_MACRO(8if(cond,                                                \
                   8do(__VA_ARGS__),                                    \
                   8exit_error(8(8with_assert(cond,__VA_ARGS__)),       \
                               8(ORDER_PP_ASSERTION_FAILURE))))
#else
# define ORDER_PP_DEF_8with_assert(cond,...) ORDER_PP_MACRO(8do(__VA_ARGS__))
#endif

#define ORDER_PP_ASSERTION_FAILURE() ORDER_PP_ASSERTION_FAILURE
