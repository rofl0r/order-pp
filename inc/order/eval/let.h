#ifndef ORDER_EVAL_LET_H_VAJK20040620
#define ORDER_EVAL_LET_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_let(...) 8EVAL_LET,__VA_ARGS__

#define ORDER_PP_CM_8EVAL_LET(P,e,s,i,...) (,P##e,ORDER_PP_DEF_##i,8EVAL_LET_B,P##s,P##e,P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_LET_B(P,v,s,e,...) (,ORDER_PP_ENV_BIND_##s(,P##s,P##v)P##e,ORDER_PP_DEF_##__VA_ARGS__)

#endif
