// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_FN(fn_expression) ORDER_PP_FN_##fn_expression
#define ORDER_PP_FN_8fn(...) 8DEF_FN,(,ORDER_PP_FN_PARAMS(0##__VA_ARGS__,ORDER_PP_COMMA_5,ORDER_PP_COMMA_4,ORDER_PP_COMMA_3,ORDER_PP_COMMA_2,ORDER_PP_COMMA_1,)(,)(,__VA_ARGS__)),ORDER_PP_ARGS
#define ORDER_PP_8DEF_FN(P,e,f,na,a0,a1,...) (,ORDER_PP_EVAL_AP_##na(,P##f,P##e,P##a0,P##a1)P##__VA_ARGS__)
