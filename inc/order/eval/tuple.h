// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8tuple(e0,e1,...,eN)' constructs a tuple of the elements `e0',
// `e1', ..., `eN'. A tuple must always have at least one element.
//
// For example,
//
//   8tuple(8quote(1), 8quote(2), 8quote(3)) ==> (1,2,3)
#define ORDER_PP_DEF_8tuple(...) 8EVAL_TUPLE,(,__VA_ARGS__,0tuple),

#define ORDER_PP_8EVAL_TUPLE(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST P##ts,8EVAL_TUPLE_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_TUPLE_B(P,v,s,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_TUPLE_B,P##s(,P##v),P##e,P##__VA_ARGS__)

#define ORDER_PP_DEF_0tuple 0EVAL_TUPLE
#define ORDER_PP_0EVAL_TUPLE(P,e1,eval_tuple_b,s,e2,...) (,(ORDER_PP_FY(TUPLE_REST_0,(ORDER_PP_SEQ_TERMINATE(ORDER_PP_EVAL_TUPLE_A P##s)))),P##__VA_ARGS__)
#define ORDER_PP_EVAL_TUPLE_A(P,x) ,ORDER_PP_LEFT(,x##P)ORDER_PP_EVAL_TUPLE_B
#define ORDER_PP_EVAL_TUPLE_A0
#define ORDER_PP_EVAL_TUPLE_B(P,x) ,ORDER_PP_LEFT(,x##P)ORDER_PP_EVAL_TUPLE_A
#define ORDER_PP_EVAL_TUPLE_B0
