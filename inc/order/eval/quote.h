// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8quote(pp-tokens)' evaluates to the `pp-tokens'. The `pp-tokens'
// must not contain an unparenthesized comma nor unbalanced
// parentheses.
//
// For example,
//
//   8quote(Hi!) ==> Hi!
#define ORDER_PP_DEF_8quote(x) 8DEF_CONST,x,

// `8(pp-tokens)' evaluates to the `pp-tokens', while `8', without
// arguments, evaluates to the literal `8'. `8(pp-tokens)' is a
// shorthand notation for `8quote(pp-tokens)'. The `pp-tokens' must
// not contain an unparenthesized comma nor unbalanced parentheses.
//
// For example,
//
//   8(Hi!) ==> Hi!
//   8 ==> 8
#define ORDER_PP_DEF_8(x) 8DEF_CONST,x,
#define ORDER_PP_ORDER_PP_DEF_8(P,e,K,...) ORDER_PP_##K(,8,P##__VA_ARGS__)
