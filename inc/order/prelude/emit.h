#ifndef ORDER_PRELUDE_EMIT_H_VAJK20040620
#define ORDER_PRELUDE_EMIT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8emit ORDER_PP_CTOR_N(8EMIT_)
#define ORDER_PP_CM_8EMIT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1 P##_2 P##_3 P##_4 P##_5 P##_6 P##_7
#define ORDER_PP_CM_8EMIT_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1 P##_2 P##_3 P##_4 P##_5 P##_6
#define ORDER_PP_CM_8EMIT_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1 P##_2 P##_3 P##_4 P##_5
#define ORDER_PP_CM_8EMIT_5(P,_0,_1,_2,_3,_4,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1 P##_2 P##_3 P##_4
#define ORDER_PP_CM_8EMIT_4(P,_0,_1,_2,_3,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1 P##_2 P##_3
#define ORDER_PP_CM_8EMIT_3(P,_0,_1,_2,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1 P##_2
#define ORDER_PP_CM_8EMIT_2(P,_0,_1,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0 P##_1
#define ORDER_PP_CM_8EMIT_1(P,_0,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0

#define ORDER_PP_DEF_8emit_cat ORDER_PP_CTOR_N(8EMIT_CAT_)
#define ORDER_PP_CM_8EMIT_CAT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1##_2##_3##_4##_5##_6##_7
#define ORDER_PP_CM_8EMIT_CAT_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1##_2##_3##_4##_5##_6
#define ORDER_PP_CM_8EMIT_CAT_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1##_2##_3##_4##_5
#define ORDER_PP_CM_8EMIT_CAT_5(P,_0,_1,_2,_3,_4,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1##_2##_3##_4
#define ORDER_PP_CM_8EMIT_CAT_4(P,_0,_1,_2,_3,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1##_2##_3
#define ORDER_PP_CM_8EMIT_CAT_3(P,_0,_1,_2,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1##_2
#define ORDER_PP_CM_8EMIT_CAT_2(P,_0,_1,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0##_1
#define ORDER_PP_CM_8EMIT_CAT_1(P,_0,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##_0

#endif
