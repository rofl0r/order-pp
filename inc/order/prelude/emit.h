// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8put(x)' outputs `x' and returns nil.
//
// For example,
//
//   8put(8nat_to_lit(8times(8nat(2,5,6),
//                           8nat(2,5,6)))) ==> 65536
#define ORDER_PP_DEF_8put ORDER_PP_FN_CM(1,8PUT)
#define ORDER_PP_8PUT(P,x,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,1,P##x)

// `8emit(m,p)' outputs `m p' and returns nil.
//
// For example, suppose you have defined the macro
//
//   #define MY_MACRO(P,x,y) P##x,P##y
//
// then you can emit an expansion of `MY_MACRO' using `8emit'
//
//   8emit(8quote(MY_MACRO),
//         8tuple(8quote(a),8quote(b))) ==> a,b
#define ORDER_PP_DEF_8emit ORDER_PP_FN_CM(2,8EMIT)
#define ORDER_PP_8EMIT(P,m,a,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2,P##m,P##a)

// `8emit_comma(x)' outputs `,x' and returns nil.
//
// For example,
//
//   8do(8emit_lparen(8quote(1)),
//       8emit_comma(8quote(2)),
//       8emit_rparen(8quote(3))) ==> (1,2)3
#define ORDER_PP_DEF_8emit_comma ORDER_PP_FN_CM(1,8EMIT_COMMA)
#define ORDER_PP_8EMIT_COMMA(P,x,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,3,P##x)

// `8emit_lparen(x)' outputs `(x' and returns nil.
//
// For example,
//
//   8do(8emit_lparen(8quote(1)),
//       8emit_comma(8quote(2)),
//       8emit_rparen(8quote(3))) ==> (1,2)3
#define ORDER_PP_DEF_8emit_lparen ORDER_PP_FN_CM(1,8EMIT_LPAREN)
#define ORDER_PP_8EMIT_LPAREN(P,x,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,4,P##x)

// `8emit_rparen(x)' outputs `)x' and returns nil.
//
// For example,
//
//   8do(8emit_lparen(8quote(1)),
//       8emit_comma(8quote(2)),
//       8emit_rparen(8quote(3))) ==> (1,2)3
#define ORDER_PP_DEF_8emit_rparen ORDER_PP_FN_CM(1,8EMIT_RPAREN)
#define ORDER_PP_8EMIT_RPAREN(P,x,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,5,P##x)

#define ORDER_PP_DEF_8emit_params ORDER_PP_FN_CM(3,8EMIT_PARAMS)
#define ORDER_PP_8EMIT_PARAMS(P,i,n,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2,ORDER_PP_ENUM_PARAMS,(,ORDER_PP_NUM_UOP(,TO_NAT,P##i),ORDER_PP_NUM_UOP(,TO_NAT,P##n),P##p))

#define ORDER_PP_DEF_8emit_trailing_params ORDER_PP_FN_CM(3,8EMIT_TRAILING_PARAMS)
#define ORDER_PP_8EMIT_TRAILING_PARAMS(P,i,n,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2,ORDER_PP_ENUM_TRAILING_PARAMS,(,ORDER_PP_NUM_UOP(,TO_NAT,P##i),ORDER_PP_NUM_UOP(,TO_NAT,P##n),P##p))

#define ORDER_PP_ENUM_PARAMS(P,i,n,p) ORDER_PP_NAT_IS_ZERO P##n(,ORDER_PP_EAT,ORDER_PP_CAT(P##p,ORDER_PP_NAT_TO_LIT(,P##i))ORDER_PP_ENUM_TRAILING_PARAMS)(,ORDER_PP_NAT_SUCC P##i,ORDER_PP_NAT_PRED P##n,P##p)
#define ORDER_PP_ENUM_TRAILING_PARAMS(P,i,n,p) ORDER_PP_ENUM_SCAN(ORDER_PP_OUTPUT(ORDER_PP_PM(,,8FOR_EACH_IN_RANGE_4,P##i,P##n,(,8EMIT_TRAILING_PARAM,P##p),8STOP,)))
#define ORDER_PP_8EMIT_TRAILING_PARAM(P,i,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,1,ORDER_PP_CAT(P##p,ORDER_PP_NAT_TO_LIT(,P##i)))(,3,)

#define ORDER_PP_ENUM_SCAN(...) __VA_ARGS__
