// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FN_MACRO(arity,macro) 8DEF_FN_MACRO,arity,macro,ORDER_PP_PARAMS

#define ORDER_PP_8DEF_FN_MACRO(P,e,na,m,np,...) ORDER_PP_8EVAL_AP_##np(,(,8MACRO_##na,P##m),P##e,P##__VA_ARGS__)

#define ORDER_PP_8MACRO_1(P,v0,m,...) (,P##m(P##v0),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_2(P,v0,m,...)      (,(,8MACRO_2_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_2_1(P,v1,v0,m,...) (,P##m(P##v0,P##v1),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_3(P,v0,m,...)         (,(,8MACRO_3_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_3_1(P,v1,v0,m,...)    (,(,8MACRO_3_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_3_2(P,v2,v1,v0,m,...) (,P##m(P##v0,P##v1,P##v2),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_4(P,v0,m,...)            (,(,8MACRO_4_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_4_1(P,v1,v0,m,...)       (,(,8MACRO_4_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_4_2(P,v2,v1,v0,m,...)    (,(,8MACRO_4_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_4_3(P,v3,v2,v1,v0,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_5(P,v0,m,...)               (,(,8MACRO_5_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_5_1(P,v1,v0,m,...)          (,(,8MACRO_5_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_5_2(P,v2,v1,v0,m,...)       (,(,8MACRO_5_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_5_3(P,v3,v2,v1,v0,m,...)    (,(,8MACRO_5_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_5_4(P,v4,v3,v2,v1,v0,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_6(P,v0,m,...)                  (,(,8MACRO_6_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6_1(P,v1,v0,m,...)             (,(,8MACRO_6_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6_2(P,v2,v1,v0,m,...)          (,(,8MACRO_6_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6_3(P,v3,v2,v1,v0,m,...)       (,(,8MACRO_6_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6_4(P,v4,v3,v2,v1,v0,m,...)    (,(,8MACRO_6_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6_5(P,v5,v4,v3,v2,v1,v0,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_7(P,v0,m,...)                     (,(,8MACRO_7_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7_1(P,v1,v0,m,...)                (,(,8MACRO_7_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7_2(P,v2,v1,v0,m,...)             (,(,8MACRO_7_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7_3(P,v3,v2,v1,v0,m,...)          (,(,8MACRO_7_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7_4(P,v4,v3,v2,v1,v0,m,...)       (,(,8MACRO_7_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7_5(P,v5,v4,v3,v2,v1,v0,m,...)    (,(,8MACRO_7_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7_6(P,v6,v5,v4,v3,v2,v1,v0,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)

#define ORDER_PP_8MACRO_8(P,v0,m,...)                        (,(,8MACRO_8_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_1(P,v1,v0,m,...)                   (,(,8MACRO_8_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_2(P,v2,v1,v0,m,...)                (,(,8MACRO_8_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_3(P,v3,v2,v1,v0,m,...)             (,(,8MACRO_8_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_4(P,v4,v3,v2,v1,v0,m,...)          (,(,8MACRO_8_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_5(P,v5,v4,v3,v2,v1,v0,m,...)       (,(,8MACRO_8_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_6(P,v6,v5,v4,v3,v2,v1,v0,m,...)    (,(,8MACRO_8_7,P##v6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_8_7(P,v7,v6,v5,v4,v3,v2,v1,v0,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
