#ifndef ORDER_PRELUDE_TUPLE_CTOR_H_VAJK20040620
#define ORDER_PRELUDE_TUPLE_CTOR_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_tuple(...) ORDER_PP_TUPLE_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,)(__VA_ARGS__)

#define ORDER_PP_TUPLE_NUM_ARGS_8(_,_8,_7,_6,_5,_4,_3,_2,_1,n,...) ORDER_PP_CTOR(n,8TUPLE_##n)

#define ORDER_PP_CM_8TUPLE_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,P##_7),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_5(P,_0,_1,_2,_3,_4,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1,P##_2,P##_3,P##_4),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_4(P,_0,_1,_2,_3,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1,P##_2,P##_3),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_3(P,_0,_1,_2,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1,P##_2),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_2(P,_0,_1,K,...) ORDER_PP_CM_##K(,(P##_0,P##_1),P##__VA_ARGS__)
#define ORDER_PP_CM_8TUPLE_1(P,_0,...) (,(P##_0),P##__VA_ARGS__)

#endif
