// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8delay(t) 8EVAL_DELAY,t,

#define ORDER_PP_ORDER_PP_DEF_8delay(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8delay:(,P##e,P##__VA_ARGS__))

#define ORDER_PP_8EVAL_DELAY(P,e,t,G,K,...) ORDER_PP_##K(,(,8PROMISE,P##e,ORDER_PP_DEF_##t),P##__VA_ARGS__)

#define ORDER_PP_8PROMISE(P,_,e,K,...) ORDER_PP_##K(,P##e,P##__VA_ARGS__)
