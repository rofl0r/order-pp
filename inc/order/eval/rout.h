// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8rout(...) 8EVAL_ROUT,(__VA_ARGS__),
#define ORDER_PP_8EVAL_ROUT(P,e,p,G,...) (,P##e,ORDER_PP_DEF_8do P##p,8EVAL_ROUT_B,P##__VA_ARGS__)(9,)
#define ORDER_PP_8EVAL_ROUT_B(P,...) (,P##__VA_ARGS__)(9,)
