#ifndef ORDER_EVAL_CONST_H_VAJK20040620
#define ORDER_EVAL_CONST_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_CONST(x) 8DEF_CONST,x

#define ORDER_PP_GET_CONST(name) ORDER_PP_GET_CONST_B(ORDER_PP_DEF_##name)
#define ORDER_PP_GET_CONST_B(x) ORDER_PP_GET_CONST_C(,x)
#define ORDER_PP_GET_CONST_C(P,_,x) P##x##P

#define ORDER_PP_DEF_const(x) 8DEF_CONST,x

#define ORDER_PP_CM_8DEF_CONST(P,e,v,K,...) ORDER_PP_CM_##K(,P##v##P,P##__VA_ARGS__)

#endif
