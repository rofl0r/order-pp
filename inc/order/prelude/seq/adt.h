#ifndef ORDER_PRELUDE_SEQ_ADT_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_ADT_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_seq ORDER_PP_CTOR_N(8SEQ_)
#define ORDER_PP_CM_8SEQ_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_5(P,_0,_1,_2,_3,_4,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_4(P,_0,_1,_2,_3,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_3(P,_0,_1,_2,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1)(P##_2),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_2(P,_0,_1,K,...) ORDER_PP_CM_##K(,(P##_0)(P##_1),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_1(P,_0,...) (,(P##_0),P##__VA_ARGS__)

#define ORDER_PP_DEF_seq_nil 8DEF_CONST,

#define ORDER_PP_DEF_seq_is_nil ORDER_PP_FN_CM(1,8IS_NIL)

#define ORDER_PP_DEF_seq_isnt_nil ORDER_PP_FN_CM(1,8SEQ_ISNT_NIL)
#define ORDER_PP_CM_8SEQ_ISNT_NIL(P,s,...) (,ORDER_PP_TEST(ORDER_PP_IS_EDIBLE_TEST s##P,true,,false,),P##__VA_ARGS__)

#define ORDER_PP_DEF_seq_first ORDER_PP_FN_CM(1,8SEQ_FIRST)
#define ORDER_PP_CM_8SEQ_FIRST(P,s,...) (,ORDER_PP_SEQ_FIRST(,P##s),P##__VA_ARGS__)

#define ORDER_PP_DEF_seq_rest ORDER_PP_FN_CM(1,8SEQ_REST)
#define ORDER_PP_DEF_seq_pop_front ORDER_PP_FN_CM(1,8SEQ_REST)
#define ORDER_PP_CM_8SEQ_REST(P,s,...) (,ORDER_PP_EAT P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_seq_push_front ORDER_PP_FN_CM(2,8SEQ_PUSH_FRONT)
#define ORDER_PP_CM_8SEQ_PUSH_FRONT(P,x,s,K,...) ORDER_PP_CM_##K(,(P##x)P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_seq_push_back ORDER_PP_FN_CM(2,8SEQ_PUSH_BACK)
#define ORDER_PP_CM_8SEQ_PUSH_BACK(P,x,s,K,...) ORDER_PP_CM_##K(,P##s(P##x),P##__VA_ARGS__)

#endif
