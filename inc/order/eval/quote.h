// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8quote(x) 8DEF_CONST,x,

#define ORDER_PP_DEF_8(x) 8DEF_CONST,x,
#define ORDER_PP_ORDER_PP_DEF_8(P,e,K,...) ORDER_PP_##K(,8,P##__VA_ARGS__)
