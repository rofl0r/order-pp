// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FN_MACRO(arity,macro_name) 8DEF_FN_CM,arity,8MACRO_##arity,(,macro_name,),ORDER_PP_PARAMS

#define ORDER_PP_8MACRO_1(P,v0,m,...) (,P##m(P##v0),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_2(P,v0,v1,m,...) (,P##m(P##v0,P##v1),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_3(P,v0,v1,v2,m,...) (,P##m(P##v0,P##v1,P##v2),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_4(P,v0,v1,v2,v3,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_5(P,v0,v1,v2,v3,v4,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6(P,v0,v1,v2,v3,v4,v5,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7(P,v0,v1,v2,v3,v4,v5,v6,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8(P,v0,v1,v2,v3,v4,v5,v6,v7,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_9(P,v0,v1,v2,v3,v4,v5,v6,v7,v8,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7,P##v8),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_10(P,v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7,P##v8,P##v9),P##__VA_ARGS__)

#define ORDER_PP_FN_MACRO_P(arity,macro_name) 8DEF_FN_CM,arity,8MACRO_P_##arity,(,macro_name,),ORDER_PP_PARAMS

#define ORDER_PP_8MACRO_P_1(P,v0,m,...) (,P##m(,P##v0),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_2(P,v0,v1,m,...) (,P##m(,P##v0,P##v1),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_3(P,v0,v1,v2,m,...) (,P##m(,P##v0,P##v1,P##v2),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_4(P,v0,v1,v2,v3,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_5(P,v0,v1,v2,v3,v4,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_6(P,v0,v1,v2,v3,v4,v5,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_7(P,v0,v1,v2,v3,v4,v5,v6,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_8(P,v0,v1,v2,v3,v4,v5,v6,v7,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_9(P,v0,v1,v2,v3,v4,v5,v6,v7,v8,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7,P##v8),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_10(P,v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7,P##v8,P##v9),P##__VA_ARGS__)
