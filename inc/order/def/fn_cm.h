// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FN_CM(arity,cm) 8DEF_FN_CM,arity,cm,ORDER_PP_PARAMS

#define ORDER_PP_8DEF_FN_CM(P,e,na,cm,np,...) ORDER_PP_8EVAL_AP_##np(,(,8CM_##na,P##cm),P##e,P##__VA_ARGS__)

#define ORDER_PP_8CM_1(P,v0,cm,...) (,P##v0,P##cm,P##__VA_ARGS__)

#define ORDER_PP_8CM_2(P,v0,cm,...)      (,(,8CM_2_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_2_1(P,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##__VA_ARGS__)

#define ORDER_PP_8CM_3(P,v0,cm,...)         (,(,8CM_3_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_3_1(P,v1,v0,cm,...)    (,(,8CM_3_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_3_2(P,v2,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##v2,P##__VA_ARGS__)

#define ORDER_PP_8CM_4(P,v0,cm,...)            (,(,8CM_4_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_4_1(P,v1,v0,cm,...)       (,(,8CM_4_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_4_2(P,v2,v1,v0,cm,...)    (,(,8CM_4_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_4_3(P,v3,v2,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##v2,P##v3,P##__VA_ARGS__)

#define ORDER_PP_8CM_5(P,v0,cm,...)               (,(,8CM_5_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_1(P,v1,v0,cm,...)          (,(,8CM_5_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_2(P,v2,v1,v0,cm,...)       (,(,8CM_5_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_3(P,v3,v2,v1,v0,cm,...)    (,(,8CM_5_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_4(P,v4,v3,v2,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##v2,P##v3,P##v4,P##__VA_ARGS__)

#define ORDER_PP_8CM_6(P,v0,cm,...)                  (,(,8CM_6_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_1(P,v1,v0,cm,...)             (,(,8CM_6_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_2(P,v2,v1,v0,cm,...)          (,(,8CM_6_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_3(P,v3,v2,v1,v0,cm,...)       (,(,8CM_6_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_4(P,v4,v3,v2,v1,v0,cm,...)    (,(,8CM_6_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_5(P,v5,v4,v3,v2,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##v2,P##v3,P##v4,P##v5,P##__VA_ARGS__)

#define ORDER_PP_8CM_7(P,v0,cm,...)                     (,(,8CM_7_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_1(P,v1,v0,cm,...)                (,(,8CM_7_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_2(P,v2,v1,v0,cm,...)             (,(,8CM_7_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_3(P,v3,v2,v1,v0,cm,...)          (,(,8CM_7_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_4(P,v4,v3,v2,v1,v0,cm,...)       (,(,8CM_7_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_5(P,v5,v4,v3,v2,v1,v0,cm,...)    (,(,8CM_7_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_6(P,v6,v5,v4,v3,v2,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##__VA_ARGS__)

#define ORDER_PP_8CM_8(P,v0,cm,...)                        (,(,8CM_8_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_1(P,v1,v0,cm,...)                   (,(,8CM_8_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_2(P,v2,v1,v0,cm,...)                (,(,8CM_8_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_3(P,v3,v2,v1,v0,cm,...)             (,(,8CM_8_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_4(P,v4,v3,v2,v1,v0,cm,...)          (,(,8CM_8_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_5(P,v5,v4,v3,v2,v1,v0,cm,...)       (,(,8CM_8_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_6(P,v6,v5,v4,v3,v2,v1,v0,cm,...)    (,(,8CM_8_7,P##v6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_7(P,v7,v6,v5,v4,v3,v2,v1,v0,cm,...) (,P##v0,P##cm,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7,P##__VA_ARGS__)
