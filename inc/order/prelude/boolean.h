#ifndef ORDER_PRELUDE_BOOLEAN_H_VAJK20040620
#define ORDER_PRELUDE_BOOLEAN_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Boolean true.
//
// For example,
//
//   8true ==> 8true
#define ORDER_PP_DEF_8true 8DEF_CONST,8true,
#define ORDER_PP_SYM_8true_8true(P,v) ,P##v,

// Boolean false.
//
// For example,
//
//   8false ==> 8false
#define ORDER_PP_DEF_8false 8DEF_CONST,8false,
#define ORDER_PP_SYM_8false_8false(P,v) ,P##v,

// Logical negation.
//
// For example,
//
//   8not(8true) ==> 8false
//   8not(8false) ==> 8true
#define ORDER_PP_DEF_8not ORDER_PP_FN_CM(1,8NOT)
#define ORDER_PP_8NOT(P,b,...) (,ORDER_PP_NOT_##b,P##__VA_ARGS__)
#define ORDER_PP_NOT(x) ORDER_PP_PRIMITIVE_CAT(ORDER_PP_NOT_,x)
#define ORDER_PP_NOT_8true 8false
#define ORDER_PP_NOT_8false 8true

#endif
