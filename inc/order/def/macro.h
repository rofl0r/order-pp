// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_MACRO(t) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t
#else
#define ORDER_PP_MACRO(t) ORDER_PP_DEF_##t
#endif
