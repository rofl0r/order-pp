#ifndef ORDER_EVAL_ROUT_H_VAJK20040620
#define ORDER_EVAL_ROUT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8rout 8EVAL_ROUT,
#define ORDER_PP_CM_8EVAL_ROUT(P,e,p,...) (,P##e,ORDER_PP_DEF_8do P##p,8EVAL_ROUT_B,P##__VA_ARGS__)(,1T,)
#define ORDER_PP_CM_8EVAL_ROUT_B(P,x,...) (,P##x,P##__VA_ARGS__)(,1T,)

#endif
