#ifndef ORDER_PRELUDE_TUPLE_AT_H_VAJK20040620
#define ORDER_PRELUDE_TUPLE_AT_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_tuple_at ORDER_PP_OP_CM(2,8TUPLE_AT)

#define ORDER_PP_CM_8TUPLE_AT(P,t,n,...) (,ORDER_PP_EXPAND(ORDER_PP_TUPLE_AT_##n,(,ORDER_PP_OPEN_NP P##t,)),P##__VA_ARGS__)

#define ORDER_PP_TUPLE_AT_0(P,_0,...) P##_0
#define ORDER_PP_TUPLE_AT_1(P,_0,_1,...) P##_1
#define ORDER_PP_TUPLE_AT_2(P,_0,_1,_2,...) P##_2
#define ORDER_PP_TUPLE_AT_3(P,_0,_1,_2,_3,...) P##_3
#define ORDER_PP_TUPLE_AT_4(P,_0,_1,_2,_3,_4,...) P##_4
#define ORDER_PP_TUPLE_AT_5(P,_0,_1,_2,_3,_4,_5,...) P##_5
#define ORDER_PP_TUPLE_AT_6(P,_0,_1,_2,_3,_4,_5,_6,...) P##_6
#define ORDER_PP_TUPLE_AT_7(P,_0,_1,_2,_3,_4,_5,_6,_7,...) P##_7
#define ORDER_PP_TUPLE_AT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,...) P##_8
#define ORDER_PP_TUPLE_AT_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) P##_9
#define ORDER_PP_TUPLE_AT_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,...) P##_10
#define ORDER_PP_TUPLE_AT_11(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,...) P##_11
#define ORDER_PP_TUPLE_AT_12(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,...) P##_12
#define ORDER_PP_TUPLE_AT_13(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,...) P##_13
#define ORDER_PP_TUPLE_AT_14(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,...) P##_14
#define ORDER_PP_TUPLE_AT_15(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,...) P##_15

#endif
