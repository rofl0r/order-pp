#ifndef ORDER_DEF_OP_CM_H_VAJK20040620
#define ORDER_DEF_OP_CM_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_OP_CM(arity,cm) 8DEF_OP_CM,arity,cm,ORDER_PARAMS

#define ORDER_CM_8DEF_OP_CM(P,e,na,cm,np,...) ORDER_CM_8EVAL_AP_##np(,(,8WAIT_##na,P##cm),P##e,P##__VA_ARGS__)

#define ORDER_CM_8WAIT_1(P,v0,cm,...) ORDER_CM_##cm(,P##v0,P##__VA_ARGS__)

#define ORDER_CM_8WAIT_2(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_2_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_2_1(P,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##__VA_ARGS__)

#define ORDER_CM_8WAIT_3(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_3_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_3_1(P,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_3_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_3_2(P,v2,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##v2,P##__VA_ARGS_)

#define ORDER_CM_8WAIT_4(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_4_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_4_1(P,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_4_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_4_2(P,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_4_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_4_3(P,v3,v2,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##v2,P##v3,P##__VA_ARGS_)

#define ORDER_CM_8WAIT_5(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_5_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_5_1(P,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_5_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_5_2(P,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_5_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_5_3(P,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_5_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_5_4(P,v4,v3,v2,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##v2,P##v3,P##v4,P##__VA_ARGS_)

#define ORDER_CM_8WAIT_6(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_6_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_6_1(P,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_6_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_6_2(P,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_6_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_6_3(P,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_6_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_6_4(P,v4,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_6_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_6_5(P,v5,v4,v3,v2,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##__VA_ARGS_)

#define ORDER_CM_8WAIT_7(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_7_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_7_1(P,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_7_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_7_2(P,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_7_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_7_3(P,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_7_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_7_4(P,v4,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_7_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_7_5(P,v5,v4,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_7_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_7_6(P,v6,v5,v4,v3,v2,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##__VA_ARGS_)

#define ORDER_CM_8WAIT_8(P,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_1(P,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_2(P,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_3(P,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_4(P,v4,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_5(P,v5,v4,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_6(P,v6,v5,v4,v3,v2,v1,v0,cm,K,...) ORDER_CM_##K(,(,8WAIT_8_7,P##v6,P##v5,P##v4,P##v3,P##v2,P##v1,P##v0,P##cm),P##__VA_ARGS__)
#define ORDER_CM_8WAIT_8_7(P,v7,v6,v5,v4,v3,v2,v1,v0,cm,...) ORDER_CM_##cm(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7,P##__VA_ARGS_)

#endif
