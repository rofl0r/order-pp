// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FN(fn_expression) ORDER_PP_FN_##fn_expression

#define ORDER_PP_FN_8fn(...) 8DEF_FN,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),(,__VA_ARGS__),ORDER_PP_PARAMS
#define ORDER_PP_PARAMS(...) ORDER_PP_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),__VA_ARGS__,

#define ORDER_PP_8DEF_FN(P,e,ns,ss,np,...) ORDER_PP_8EVAL_AP_##np(,(,8BIND_##ns,,ORDER_PP_8DEF_FN_OPEN ss##P),P##e,P##__VA_ARGS__)
#define ORDER_PP_8DEF_FN_OPEN(P,...) P##__VA_ARGS__
