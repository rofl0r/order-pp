// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FN_NATIVE(arity,macro) 8DEF_FN_NATIVE,arity,macro,ORDER_PP_PARAMS

#define ORDER_PP_8DEF_FN_NATIVE(P,e,na,m,np,...) ORDER_PP_8EVAL_AP_##np(,(,8NATIVE_##na,P##m),P##e,P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_1(P,v0,m,...) (,ORDER_PP_##m(,P##v0),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_2(P,v0,m,...)      (,(,8NATIVE_2_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_2_1(P,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_3(P,v0,m,...)         (,(,8NATIVE_3_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_3_1(P,v1,v0,m,...)    (,(,8NATIVE_3_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_3_2(P,v2,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1,P##v2),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_4(P,v0,m,...)            (,(,8NATIVE_4_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_4_1(P,v1,v0,m,...)       (,(,8NATIVE_4_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_4_2(P,v2,v1,v0,m,...)    (,(,8NATIVE_4_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_4_3(P,v3,v2,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_5(P,v0,m,...)               (,(,8NATIVE_5_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_5_1(P,v1,v0,m,...)          (,(,8NATIVE_5_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_5_2(P,v2,v1,v0,m,...)       (,(,8NATIVE_5_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_5_3(P,v3,v2,v1,v0,m,...)    (,(,8NATIVE_5_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_5_4(P,v4,v3,v2,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_6(P,v0,m,...)                  (,(,8NATIVE_6_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_6_1(P,v1,v0,m,...)             (,(,8NATIVE_6_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_6_2(P,v2,v1,v0,m,...)          (,(,8NATIVE_6_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_6_3(P,v3,v2,v1,v0,m,...)       (,(,8NATIVE_6_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_6_4(P,v4,v3,v2,v1,v0,m,...)    (,(,8NATIVE_6_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_6_5(P,v5,v4,v3,v2,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_7(P,v0,m,...)                     (,(,8NATIVE_7_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_7_1(P,v1,v0,m,...)                (,(,8NATIVE_7_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_7_2(P,v2,v1,v0,m,...)             (,(,8NATIVE_7_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_7_3(P,v3,v2,v1,v0,m,...)          (,(,8NATIVE_7_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_7_4(P,v4,v3,v2,v1,v0,m,...)       (,(,8NATIVE_7_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_7_5(P,v5,v4,v3,v2,v1,v0,m,...)    (,(,8NATIVE_7_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_7_6(P,v6,v5,v4,v3,v2,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)

#define ORDER_PP_8NATIVE_8(P,v0,m,...)                        (,(,8NATIVE_8_1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_1(P,v1,v0,m,...)                   (,(,8NATIVE_8_2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_2(P,v2,v1,v0,m,...)                (,(,8NATIVE_8_3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_3(P,v3,v2,v1,v0,m,...)             (,(,8NATIVE_8_4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_4(P,v4,v3,v2,v1,v0,m,...)          (,(,8NATIVE_8_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_5(P,v5,v4,v3,v2,v1,v0,m,...)       (,(,8NATIVE_8_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_6(P,v6,v5,v4,v3,v2,v1,v0,m,...)    (,(,8NATIVE_8_7,P##v6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##m),P##__VA_ARGS__)
#define ORDER_PP_8NATIVE_8_7(P,v7,v6,v5,v4,v3,v2,v1,v0,m,...) (,ORDER_PP_##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
