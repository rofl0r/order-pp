// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8if(...) 8EVAL_IF,__VA_ARGS__,

#define ORDER_PP_8EVAL_IF(P,e,b,c,a,G,...) (,P##e,ORDER_PP_DEF_##b,8EVAL_IF_B,P##e,P##c,P##a,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_IF_B(P,b,e,c,a,...) (,P##e,ORDER_PP_IF_##b(ORDER_PP_DEF_,P##c,P##a),P##__VA_ARGS__)
