#ifndef ORDER_PRELUDE_EMIT_H_VAJK20040620
#define ORDER_PRELUDE_EMIT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8emit ORDER_PP_CTOR_N(8EMIT)
#define ORDER_PP_8EMIT_1(P,_0,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,1,P##_0)
#define ORDER_PP_8EMIT_2(P,_0,_1,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2,P##_0,P##_1)
#define ORDER_PP_8EMIT_3(P,_0,_1,_2,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,3,P##_0,P##_1,P##_2)
#define ORDER_PP_8EMIT_4(P,_0,_1,_2,_3,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,4,P##_0,P##_1,P##_2,P##_3)
#define ORDER_PP_8EMIT_5(P,_0,_1,_2,_3,_4,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,5,P##_0,P##_1,P##_2,P##_3,P##_4)
#define ORDER_PP_8EMIT_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,6,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5)
#define ORDER_PP_8EMIT_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,7,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6)
#define ORDER_PP_8EMIT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,8,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,P##_7)
#define ORDER_PP_8EMIT_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,9,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,P##_7,P##_8)
#define ORDER_PP_8EMIT_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,10,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,P##_7,P##_8,P##_9)

#define ORDER_PP_DEF_8emit_cat ORDER_PP_CTOR_N(8EMIT_CAT)
#define ORDER_PP_8EMIT_CAT_1(P,_0,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,1C,_0##P)
#define ORDER_PP_8EMIT_CAT_2(P,_0,_1,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2C,P##_0,_1##P)
#define ORDER_PP_8EMIT_CAT_3(P,_0,_1,_2,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,3C,P##_0,P##_1,_2##P)
#define ORDER_PP_8EMIT_CAT_4(P,_0,_1,_2,_3,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,4C,P##_0,P##_1,P##_2,_3##P)
#define ORDER_PP_8EMIT_CAT_5(P,_0,_1,_2,_3,_4,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,5C,P##_0,P##_1,P##_2,P##_3,_4##P)
#define ORDER_PP_8EMIT_CAT_6(P,_0,_1,_2,_3,_4,_5,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,6C,P##_0,P##_1,P##_2,P##_3,P##_4,_5##P)
#define ORDER_PP_8EMIT_CAT_7(P,_0,_1,_2,_3,_4,_5,_6,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,7C,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,_6##P)
#define ORDER_PP_8EMIT_CAT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,8C,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,_7##P)
#define ORDER_PP_8EMIT_CAT_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,9C,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,_7##P,_8##P)
#define ORDER_PP_8EMIT_CAT_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,10C,P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,_7##P,_8##P,_9##P)

#define ORDER_PP_DEF_8emitq 8EMITQ,
#define ORDER_PP_8EMITQ(P,e,x,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,1,ORDER_PP_OPEN_NP x##P)

#define ORDER_PP_DEF_8emit_comma 8EMIT_COMMA
#define ORDER_PP_8EMIT_COMMA(P,e,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2C,ORDER_PP_,8C)
#define ORDER_PP_8C ,

#define ORDER_PP_DEF_8emit_lparen 8EMIT_LPAREN
#define ORDER_PP_8EMIT_LPAREN(P,e,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2C,ORDER_PP_,8L)
#define ORDER_PP_8L (

#define ORDER_PP_DEF_8emit_rparen 8EMIT_RPAREN
#define ORDER_PP_8EMIT_RPAREN(P,e,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2C,ORDER_PP_,8R)
#define ORDER_PP_8R )

#define ORDER_PP_DEF_8emit_trailing_params(n,p) ORDER_PP_MACRO(8emit(8quote(CHAOS_PP_ENUM_TRAILING_PARAMS),8args(n,p)))
#include "chaos/preprocessor/repetition/enum_trailing_params.h"

#define ORDER_PP_DEF_8emit_params(n,p) ORDER_PP_MACRO(8emit(8quote(CHAOS_PP_ENUM_PARAMS),8args(n,p)))
#include "chaos/preprocessor/repetition/enum_params.h"

#endif
