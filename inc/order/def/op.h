#ifndef ORDER_DEF_OP_H_VAJK20040620
#define ORDER_DEF_OP_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_OP(fn) ORDER_OP_##fn

#define ORDER_OP_fn(...) 8DEF_OP,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),(,__VA_ARGS__),ORDER_PARAMS
#define ORDER_PARAMS(...) ORDER_PP_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),__VA_ARGS__

#define ORDER_CM_8DEF_OP(P,e,ns,ss,np,...) ORDER_CM_8EVAL_AP_##np(,(,8BIND_##ns,,ORDER_CM_8DEF_OP_OPEN P##ss),P##e,P##__VA_ARGS__)
#define ORDER_CM_8DEF_OP_OPEN(P,...) P##__VA_ARGS__

#endif
