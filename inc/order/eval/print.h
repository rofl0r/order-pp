#ifndef ORDER_EVAL_PRINT_H_VAJK20040620
#define ORDER_EVAL_PRINT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8parenthesized(expr) 8EVAL_PARENTHESIZED,expr,
#define ORDER_PP_DEF_8print(expr) 8EVAL_PRINT,expr,

#define ORDER_PP_8EVAL_PARENTHESIZED(P,e,expr,G,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,expr##P 8print0,e##P,8RPAREN,,P##__VA_ARGS__)(,4,)
#define ORDER_PP_8EVAL_PRINT(P,e,expr,G,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,expr##P 8print0,e##P,P##__VA_ARGS__)

#define ORDER_PP_8EVAL_PRINT_LOOP(P,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_PRINT_PUT(P,x,expr,...) ORDER_PP_IS_EDIBLE(,P##expr)(ORDER_PP_8EVAL_PRINT_,QUOTE,EVAL)(,P##expr,P##__VA_ARGS__)(,1,P##x)

#define ORDER_PP_8EVAL_PRINT_QUOTE(P,expr,...) (,ORDER_PP_EAT expr##P,8EVAL_PRINT_LOOP,P##__VA_ARGS__)(,1,ORDER_PP_LEFT ORDER_PP_FX(,ORDER_PP_TUPLE_AT_0,(,ORDER_PP_8EVAL_PRINT_QUOTE_SPLIT expr##P)))
#define ORDER_PP_8EVAL_PRINT_QUOTE_SPLIT(...) (,__VA_ARGS__),

#define ORDER_PP_8EVAL_PRINT_EVAL(P,expr,e,...) (,P##e,ORDER_PP_DEF_##expr,8EVAL_PRINT_PUT,ORDER_PP_FX(,ORDER_PP_TUPLE_LAST,(,ORDER_PP_DEF_##expr)),P##e,P##__VA_ARGS__)

#define ORDER_PP_DEF_8print0 8PRINT0,
#define ORDER_PP_8PRINT0(P,e1,G,put,expr,e2,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)

// `8comma' outputs a single comma `,' and returns nil.
//
// For example,
//
//   8print(8lparen 8comma 8rparen) ==> (,)
#define ORDER_PP_DEF_8comma 8COMMA,
#define ORDER_PP_8COMMA(P,e,G,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,3,)

// `8lparen' outputs a single opening paren `(' and returns nil.
//
// For example,
//
//   8print(8lparen 8comma 8rparen) ==> (,)
#define ORDER_PP_DEF_8lparen 8LPAREN,
#define ORDER_PP_8LPAREN(P,e,G,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,4,)

// `8rparen' outputs a single closing paren `)' and returns nil.
//
// For example,
//
//   8print(8lparen 8comma 8rparen) ==> (,)
#define ORDER_PP_DEF_8rparen 8RPAREN,
#define ORDER_PP_8RPAREN(P,e,G,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,5,)

#endif
