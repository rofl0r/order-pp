// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_CONST(value) 8DEF_CONST,value,

#define ORDER_PP_GET_CONST(name) ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_DEF_##name))

#define ORDER_PP_8DEF_CONST(P,e,v,G,K,...) ORDER_PP_##K(,v##P,P##__VA_ARGS__)
