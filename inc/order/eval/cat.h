// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8cat(e0,e1,...,eN)' concatenates all the elements together. At
// least one element must be specified. The concatenation of any two
// adjacent elements must produce a valid token or the result of
// concatenation will be undefined (a conforming preprocessor might
// issue a diagnostic).
//
// For example,
//
//   8cat(8quote(class A), 8quote(1)) ==> class A1
#define ORDER_PP_DEF_8cat(...) 8EVAL_CAT,(,__VA_ARGS__,0cat),

#define ORDER_PP_8EVAL_CAT(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST P##ts,8EVAL_CAT_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_CAT_B(P,v,r,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_CAT_B,r##v,P##e,P##__VA_ARGS__)
#define ORDER_PP_DEF_0cat 0EVAL_CAT
#define ORDER_PP_0EVAL_CAT(P,e1,eval_cat_b,r,e2,...) (,P##r,P##__VA_ARGS__)
