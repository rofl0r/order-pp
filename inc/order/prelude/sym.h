#ifndef ORDER_PRELUDE_SYM_H_VAJK20040620
#define ORDER_PRELUDE_SYM_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_is_sym ORDER_OP_CM(1,8IS_SYM)
#define ORDER_CM_8IS_SYM(P,x,...) (,ORDER_PP_IS_SYM(,P##x)(,(,true),(,false)),P##__VA_ARGS__)
#define ORDER_PP_IS_SYM(P,x) ORDER_PP_IS_TUPLE(,P##x)(,(,ORDER_PP_IF_OPEN_false ORDER_EAT),(,ORDER_PP_IS_SYM_NOT_PAIR))(P##x)
#define ORDER_PP_IS_SYM_NOT_PAIR(x) ORDER_PP_TEST(ORDER_SYM_##x##_##x(,),ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)

#define ORDER_DEF_equal ORDER_OP_CM(2,8EQUAL)
#define ORDER_CM_8EQUAL(P,x,y,...) (,ORDER_PP_TEST(ORDER_SYM_##x##_##y(,),true,,false,),P##__VA_ARGS__)

#define ORDER_DEF_not_eq ORDER_OP_CM(2,8NOT_EQ)
#define ORDER_CM_8NOT_EQ(P,x,y,...) (,ORDER_PP_TEST(ORDER_SYM_##x##_##y(,),false,,true,),P##__VA_ARGS__)

#endif
