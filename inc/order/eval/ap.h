#ifndef ORDER_EVAL_AP_H_VAJK20040620
#define ORDER_EVAL_AP_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Application.
//
// Syntax:
//
//   <exp> ::= 8ap(<exp_1>, ..., <exp_n>)
//
// Semantics:
//
//   [[8ap(<exp_1>, ..., <exp_n>)]] env = ([[<exp_1>]] env) ... ([[exp_n]] env)
//
// The value of the first expression is applied to the values of the rest
// of the expressions.
#define ORDER_PP_DEF_8ap(...) 8EVAL_AP,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,ORDER_PP_PARAMS,),__VA_ARGS__

#define ORDER_PP_8EVAL_AP(P,e,n,ft,...) (,P##e,ORDER_PP_DEF_##ft,8EVAL_AP_##n,P##e,P##__VA_ARGS__)

#define ORDER_PP_8EVAL_AP_ORDER_PP_PARAMS(P,f,e,...) (,P##f,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_1(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_2(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_1,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_3(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_2,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_4(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_3,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_5(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_4,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_6(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_5,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_7(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_6,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_8(P,f,e,p,...) (,P##e,ORDER_PP_DEF_##p,ORDER_PP_OPEN f##P,8EVAL_AP_7,P##e,P##__VA_ARGS__)

#endif
