// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8emit ORDER_PP_FN_CM(2,8EMIT)
#define ORDER_PP_8EMIT(P,a,m,...) (,,P##__VA_ARGS__)(,2,P##m,a##P)

#define ORDER_PP_DEF_8emit_comma ORDER_PP_FN_CM(1,8EMIT_COMMA)
#define ORDER_PP_8EMIT_COMMA(P,x,...) (,,P##__VA_ARGS__)(,3,P##x)

#define ORDER_PP_DEF_8emit_lparen ORDER_PP_FN_CM(1,8EMIT_LPAREN)
#define ORDER_PP_8EMIT_LPAREN(P,x,...) (,,P##__VA_ARGS__)(,4,P##x)

#define ORDER_PP_DEF_8emit_params ORDER_PP_FN_CM(3,8EMIT_PARAMS)
#define ORDER_PP_8EMIT_PARAMS(P,p,i1,i0,...) (,,P##__VA_ARGS__)ORDER_PP_NUM_EQUAL(,P##i0,P##i1)(,,(,2,ORDER_PP_ENUM_PARAMS,(,P##i0,P##i1,P##p)))
#define ORDER_PP_ENUM_PARAMS(P,i0,i1,p) ORDER_PP_FX(OPEN,(ORDER_PP_ENUM_TRAILING_PARAMS(,P##i0,P##i1,P##p)))

#define ORDER_PP_DEF_8emit_rparen ORDER_PP_FN_CM(1,8EMIT_RPAREN)
#define ORDER_PP_8EMIT_RPAREN(P,x,...) (,,P##__VA_ARGS__)(,5,P##x)

#define ORDER_PP_DEF_8emit_space ORDER_PP_FN_CM(1,8EMIT_SPACE)
#define ORDER_PP_8EMIT_SPACE(P,x,...) (,,P##__VA_ARGS__)(,2,,P##x)

#define ORDER_PP_DEF_8emit_trailing_params ORDER_PP_FN_CM(3,8EMIT_TRAILING_PARAMS)
#define ORDER_PP_8EMIT_TRAILING_PARAMS(P,p,i1,i0,...) (,,P##__VA_ARGS__)(,2,ORDER_PP_ENUM_TRAILING_PARAMS,(,P##i0,P##i1,P##p))
#define ORDER_PP_ENUM_TRAILING_PARAMS(P,i0,i1,p) ORDER_PP_CM(,P##i0,8FOR_EACH_IN_RANGE,P##i1,(,8EMIT_TRAILING_PARAM,P##p),8STOP,)
#define ORDER_PP_8EMIT_TRAILING_PARAM(P,i,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__),ORDER_PP_CAT(P##p,ORDER_PP_NUM_TO_LIT(,P##i))

#define ORDER_PP_DEF_8put ORDER_PP_FN_CM(1,8PUT)
#define ORDER_PP_8PUT(P,x,...) (,,P##__VA_ARGS__)(,1,P##x)
