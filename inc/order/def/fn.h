#ifndef ORDER_DEF_FN_H_VAJK20040620
#define ORDER_DEF_FN_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Defines a function.
//
// `fn_expression' must be an Order anonymous function expression.
//
// For example,
#if 0
#define ORDER_PP_DEF_8factorial                         \
ORDER_PP_FN(8fn(8N,                                     \
                8if(8is_0(8N),                          \
                    1,                                  \
                    8mul(8N,8factorial(8dec(8N))))))
#endif
// defines a recursive function for computing factorials. It can then be
// used as an Order expression:
//
//   8factorial(4) ==> 24
#define ORDER_PP_FN(fn_expression) ORDER_PP_FN_##fn_expression

#define ORDER_PP_FN_8fn(...) 8DEF_FN,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),(,__VA_ARGS__),ORDER_PP_PARAMS
#define ORDER_PP_PARAMS(...) ORDER_PP_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),__VA_ARGS__

#define ORDER_PP_CM_8DEF_FN(P,e,ns,ss,np,...) ORDER_PP_CM_8EVAL_AP_##np(,(,8BIND_##ns,,ORDER_PP_CM_8DEF_FN_OPEN ss##P),P##e,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_FN_OPEN(P,...) P##__VA_ARGS__

#endif
