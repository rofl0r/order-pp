#ifndef ORDER_PP_DEF_FN_MACRO_H_VAJK20040620
#define ORDER_PP_DEF_FN_MACRO_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_FN_MACRO(n,m) 8DEF_FN_CM,n,8MACRO_##n,(,m,),ORDER_PP_PARAMS

#define ORDER_PP_CM_8MACRO_8(P,v0,v1,v2,v3,v4,v5,v6,v7,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_7(P,v0,v1,v2,v3,v4,v5,v6,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_6(P,v0,v1,v2,v3,v4,v5,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_5(P,v0,v1,v2,v3,v4,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_4(P,v0,v1,v2,v3,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_3(P,v0,v1,v2,m,...) (,P##m(P##v0,P##v1,P##v2),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_2(P,v0,v1,m,...) (,P##m(P##v0,P##v1),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_1(P,v0,m,...) (,P##m(P##v0),P##__VA_ARGS__)

#define ORDER_PP_FN_MACRO_P(n,m) 8DEF_FN_CM,n,8MACRO_P_##n,(,m,),ORDER_PP_PARAMS

#define ORDER_PP_CM_8MACRO_P_8(P,v0,v1,v2,v3,v4,v5,v6,v7,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_7(P,v0,v1,v2,v3,v4,v5,v6,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_6(P,v0,v1,v2,v3,v4,v5,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_5(P,v0,v1,v2,v3,v4,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_4(P,v0,v1,v2,v3,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_3(P,v0,v1,v2,m,...) (,P##m(,P##v0,P##v1,P##v2),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_2(P,v0,v1,m,...) (,P##m(,P##v0,P##v1),P##__VA_ARGS__)
#define ORDER_PP_CM_8MACRO_P_1(P,v0,m,...) (,P##m(,P##v0),P##__VA_ARGS__)

#endif
