// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8delay(t) 8EVAL_DELAY,t,
#define ORDER_PP_8EVAL_DELAY(P,e,t,G,K,...) ORDER_PP_##K(,(,P##t,8EVAL,P##e),P##__VA_ARGS__)
