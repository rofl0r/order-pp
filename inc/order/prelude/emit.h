#ifndef ORDER_PRELUDE_EMIT_H_VAJK20040620
#define ORDER_PRELUDE_EMIT_H_VAJK20040620

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

#define ORDER_PP_DEF_8emit_params ORDER_PP_FN_CM(3,8EMIT_PARAMS)
#define ORDER_PP_8EMIT_PARAMS(P,i,n,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2,ORDER_PP_ENUM_PARAMS,(,P##i,P##n,P##p))

#define ORDER_PP_DEF_8emit_trailing_params ORDER_PP_FN_CM(3,8EMIT_TRAILING_PARAMS)
#define ORDER_PP_8EMIT_TRAILING_PARAMS(P,i,n,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,2,ORDER_PP_ENUM_TRAILING_PARAMS,(,P##i,P##n,P##p))

#define ORDER_PP_ENUM_PARAMS(P,i,n,p) ORDER_PP_NAT_IS_0 P##n(,ORDER_PP_EAT,ORDER_PP_CAT(P##p,ORDER_PP_NAT_TO_LIT(,P##i))ORDER_PP_ENUM_TRAILING_PARAMS)(,ORDER_PP_NAT_SUCC P##i,ORDER_PP_NAT_PRED P##n,P##p)
#define ORDER_PP_ENUM_TRAILING_PARAMS(P,i,n,p) ORDER_PP_PM_OUTPUT(ORDER_PP_PM(,,8FOR_EACH_IN_RANGE_4,P##i,P##n,(,8EMIT_TRAILING_PARAM,P##p),8EXIT,))
#define ORDER_PP_8EMIT_TRAILING_PARAM(P,i,p,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(,1,ORDER_PP_CAT(P##p,ORDER_PP_NAT_TO_LIT(,P##i)))(,3,)

#endif
