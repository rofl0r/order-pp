// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_MACRO ORDER_PP_TEST(ORDER_PP_MACRO_,ORDER_PP_MACRO_DEF(0macro),DEF,REC)
#define ORDER_PP_DEF_0macro ,,

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_MACRO_DEF(t) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t
#else
#define ORDER_PP_MACRO_DEF(t) ORDER_PP_DEF_##t
#endif

#define ORDER_PP_MACRO_REC(t) 8MACRO,t,
#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8MACRO(P,e,t,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,P##__VA_ARGS__)
#else
#define ORDER_PP_8MACRO(P,e,t,G,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
