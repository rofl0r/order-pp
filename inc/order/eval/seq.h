#ifndef ORDER_EVAL_SEQ_H
#define ORDER_EVAL_SEQ_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_seq(...) ORDER_PP_SEQ_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),(__VA_ARGS__)

#define ORDER_PP_SEQ_NUM_ARGS_8(_,_8,_7,_6,_5,_4,_3,_2,_1,x,...) 8DEF_CM_##x,8SEQ_##x

#define ORDER_CM_8SEQ_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_5(P,_0,_1,_2,_3,_4,K,...) ORDER_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_4(P,_0,_1,_2,_3,K,...) ORDER_CM_##K(,(P##_0)(P##_1)(P##_2)(P##_3),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_3(P,_0,_1,_2,K,...) ORDER_CM_##K(,(P##_0)(P##_1)(P##_2),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_2(P,_0,_1,K,...) ORDER_CM_##K(,(P##_0)(P##_1),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_1(P,_0,K,...) ORDER_CM_##K(,(P##_0),P##__VA_ARGS__)

#endif
