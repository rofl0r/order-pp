// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8is_sym ORDER_PP_FN_NATIVE(1,9IS_SYM)
#define ORDER_PP_9IS_SYM(P,x) ORDER_PP_IS_SYM(,P##x)(,8true,8false)

#define ORDER_PP_DEF_8same ORDER_PP_FN_NATIVE(2,9SAME)
#define ORDER_PP_9SAME(P,x,y) ORDER_PP_TEST(,ORDER_PP_SYM_##x##_##y(,),8true,8false)

#define ORDER_PP_DEF_8not_same ORDER_PP_FN_NATIVE(2,9NOT_SAME)
#define ORDER_PP_9NOT_SAME(P,x,y) ORDER_PP_TEST(,ORDER_PP_SYM_##x##_##y(,),8false,8true)
