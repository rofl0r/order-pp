// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8emit ORDER_PP_FN_CM(2,8EMIT,0IS_ANY,0IS_ANY)
#define ORDER_PP_8EMIT(P,a,m,...) (,,P##__VA_ARGS__)(,2,P##m,a##P)

#define ORDER_PP_DEF_8emit_comma ORDER_PP_FN_CM(1,8EMIT_COMMA,0IS_ANY)
#define ORDER_PP_8EMIT_COMMA(P,x,...) (,,P##__VA_ARGS__)(,3,P##x)

#define ORDER_PP_DEF_8emit_lparen ORDER_PP_FN_CM(1,8EMIT_LPAREN,0IS_ANY)
#define ORDER_PP_8EMIT_LPAREN(P,x,...) (,,P##__VA_ARGS__)(,4,P##x)

#define ORDER_PP_DEF_8emit_rparen ORDER_PP_FN_CM(1,8EMIT_RPAREN,0IS_ANY)
#define ORDER_PP_8EMIT_RPAREN(P,x,...) (,,P##__VA_ARGS__)(,5,P##x)

#define ORDER_PP_DEF_8emit_space ORDER_PP_FN_CM(1,8EMIT_SPACE,0IS_ANY)
#define ORDER_PP_8EMIT_SPACE(P,x,...) (,,P##__VA_ARGS__)(,2,,P##x)

#define ORDER_PP_DEF_8put ORDER_PP_FN_CM(1,8PUT,0IS_ANY)
#define ORDER_PP_8PUT(P,x,...) (,,P##__VA_ARGS__)(,1,P##x)
