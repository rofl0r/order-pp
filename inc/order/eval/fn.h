#ifndef ORDER_EVAL_FN_H_VAJK20040620
#define ORDER_EVAL_FN_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_fn(...) 8EVAL_FN,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),(,__VA_ARGS__)

#define ORDER_PP_CM_8EVAL_FN(P,e,n,ss,...) (,(,8BIND_##n,P##e,ORDER_PP_OPEN P##ss),P##__VA_ARGS__)

#define ORDER_PP_CM_8BIND_1(P,v0,e,s0,...) (,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,ORDER_PP_DEF_##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_2(P,v0,e,s0,s1,t,K,...) ORDER_PP_CM_##K(,(,8BIND_1,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##t),P##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_3(P,v0,e,s0,s1,s2,t,K,...) ORDER_PP_CM_##K(,(,8BIND_2,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##s2,P##t),P##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_4(P,v0,e,s0,s1,s2,s3,t,K,...) ORDER_PP_CM_##K(,(,8BIND_3,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##t),P##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_5(P,v0,e,s0,s1,s2,s3,s4,t,K,...) ORDER_PP_CM_##K(,(,8BIND_4,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##t),P##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_6(P,v0,e,s0,s1,s2,s3,s4,s5,t,K,...) ORDER_PP_CM_##K(,(,8BIND_5,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##s5,P##t),P##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_7(P,v0,e,s0,s1,s2,s3,s4,s5,s6,t,K,...) ORDER_PP_CM_##K(,(,8BIND_6,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##s5,P##s6,P##t),P##__VA_ARGS__)
#define ORDER_PP_CM_8BIND_8(P,v0,e,s0,s1,s2,s3,s4,s5,s6,s7,t,K,...) ORDER_PP_CM_##K(,(,8BIND_7,ORDER_PP_ENV_BIND_##s0(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##s5,P##s6,P##s7,P##t),P##__VA_ARGS__)

#endif
