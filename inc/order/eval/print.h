// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8print(expr) 8EVAL_PRINT,expr,

#define ORDER_PP_ORDER_PP_DEF_8print(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8print:(,P##e,P##__VA_ARGS__))

#define ORDER_PP_8EVAL_PRINT(P,e,expr,G,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,expr##P 0print,e##P,P##__VA_ARGS__)

#define ORDER_PP_8EVAL_PRINT_LOOP(P,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_PRINT_PUT(P,x,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,1,P##x)
#define ORDER_PP_8EVAL_PRINT_PUT_OPEN(P,x,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,1,ORDER_PP_REM x##P)

#define ORDER_PP_8EVAL_PRINT_QUOTE_FIRST(...) __VA_ARGS__ ORDER_PP_EAT(
#define ORDER_PP_8EVAL_PRINT_QUOTE(P,expr,...) (,ORDER_PP_EAT expr##P,8EVAL_PRINT_LOOP,P##__VA_ARGS__)(,1,ORDER_PP_8EVAL_PRINT_QUOTE_FIRST P##expr))

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_PRINT_EVAL(P,expr,e,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##expr,ORDER_PP_DEF)(P##expr),8EVAL_PRINT_PUT,ORDER_PP_FX(TUPLE_LAST,(,ORDER_PP_DEF_##expr)),P##e,P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_PRINT_EVAL(P,expr,e,...) (,P##e,ORDER_PP_DEF_##expr,8EVAL_PRINT_PUT,ORDER_PP_FX(TUPLE_LAST,(,ORDER_PP_DEF_##expr)),P##e,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_8comma 8EVAL_COMMA,
#define ORDER_PP_8EVAL_COMMA(P,e,G,put,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,3,)

#define ORDER_PP_DEF_8lparen 8EVAL_LPAREN,
#define ORDER_PP_8EVAL_LPAREN(P,e,G,put,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,4,)

#define ORDER_PP_DEF_8open(t) 8EVAL_OPEN,t,
#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8EVAL_OPEN(P,e,t,G,put,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##t,ORDER_PP_DEF)(P##t),8EVAL_PRINT_PUT_OPEN,P##__VA_ARGS__)
#else
#define ORDER_PP_8EVAL_OPEN(P,e,t,G,put,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_PRINT_PUT_OPEN,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_8parens(expr) 8EVAL_PARENS,expr,
#define ORDER_PP_8EVAL_PARENS(P,e,head,G,put,tail,...) ORDER_PP_IS_EDIBLE(,P##head)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,head##P 8rparen P##tail,P##__VA_ARGS__)(,4,)

#define ORDER_PP_DEF_0print 8EVAL_PRINT_END,
#define ORDER_PP_8EVAL_PRINT_END(P,e1,G,put,expr,e2,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)

#define ORDER_PP_DEF_8rparen 8EVAL_RPAREN,
#define ORDER_PP_8EVAL_RPAREN(P,e,G,put,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,5,)

#define ORDER_PP_DEF_8space 8EVAL_SPACE,
#define ORDER_PP_8EVAL_SPACE(P,e,G,put,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,2,,)
