#ifndef ORDER_EVAL_IF_H_VAJK20040620
#define ORDER_EVAL_IF_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_if(...) 8EVAL_IF,__VA_ARGS__

#define ORDER_CM_8EVAL_IF(P,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_IF_B,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_IF_B(P,b,e,tc,ta,...) (,P##e,ORDER_PP_IF_##b(ORDER_DEF_,P##tc,P##ta),P##__VA_ARGS__)

#endif
