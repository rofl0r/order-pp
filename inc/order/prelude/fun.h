#ifndef ORDER_PRELUDE_FUN_H_VAJK20040620
#define ORDER_PRELUDE_FUN_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8chain(f0, f1, ..., fN)' composes a new function from the unary
// functions `f1', ..., `fN' and the function `f0', which is not
// required to be unary. The first parameter passed to the composed
// function will be passed through the unary functions `fN', ...,
// `f1', before it is passed to `f0'.
//
// For example,
//
//   8for_each_in_range(2, 3, 8chain(8put, 8to_lit)) ==> 2 3 4
#define ORDER_PP_DEF_8chain ORDER_PP_OP_LEFT_CM(8CHAIN)
#define ORDER_PP_8CHAIN(P,f,g,...) (,(,ORDER_PP_OPEN f##P,ORDER_PP_OPEN g##P),P##__VA_ARGS__)

// `8identity(x)' evaluates to `x'.
#define ORDER_PP_DEF_8identity ORDER_PP_FN_CM(1,8IDENTITY)
#define ORDER_PP_8IDENTITY(P,...) (,P##__VA_ARGS__)

// `8ignore(x)' evaluates to nil ignoring the argument.
#define ORDER_PP_DEF_8ignore ORDER_PP_FN_CM(1,8IGNORE)
#define ORDER_PP_8IGNORE(P,x,...) (,,P##__VA_ARGS__)

#endif
