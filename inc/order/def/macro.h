// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_MACRO(t) ORDER_PP_FX(IS_TUPLE_SIZE_1,(,ORDER_PP_DEF_##t()))(,ORDER_PP_MACRO_REC,ORDER_PP_MACRO_DEF)(t)

#define ORDER_PP_MACRO_DEF(t) ORDER_PP_DEF_##t

#define ORDER_PP_MACRO_REC(t) 8MACRO,t,
#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8MACRO(P,e,t,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,P##__VA_ARGS__)
#else
#define ORDER_PP_8MACRO(P,e,t,G,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
