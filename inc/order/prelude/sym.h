#ifndef ORDER_PRELUDE_SYM_H_VAJK20040620
#define ORDER_PRELUDE_SYM_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_is_sym ORDER_PP_OP_CM(1,8IS_SYM)
#define ORDER_PP_CM_8IS_SYM(P,x,...) (,ORDER_PP_IS_SYM(,P##x)(,(,true),false),P##__VA_ARGS__)

#define ORDER_PP_DEF_equal ORDER_PP_OP_CM(2,8EQUAL)
#define ORDER_PP_CM_8EQUAL(P,x,y,...) (,ORDER_PP_TEST(ORDER_PP_SYM_##x##_##y(,),true,,false,),P##__VA_ARGS__)

#define ORDER_PP_DEF_not_eq ORDER_PP_OP_CM(2,8NOT_EQ)
#define ORDER_PP_CM_8NOT_EQ(P,x,y,...) (,ORDER_PP_TEST(ORDER_PP_SYM_##x##_##y(,),false,,true,),P##__VA_ARGS__)

#endif
