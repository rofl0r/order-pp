// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8tuple(...) 8EVAL_TUPLE,(,__VA_ARGS__,0tuple),

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_TUPLE(P,e,ts,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_FIRST P##ts())ORDER_PP_DEF_FIRST P##ts,8EVAL_TUPLE_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_TUPLE_B(P,v,s,e,t,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,8EVAL_TUPLE_B,P##s(,P##v),P##e,P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_TUPLE(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST P##ts,8EVAL_TUPLE_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_TUPLE_B(P,v,s,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_TUPLE_B,P##s(,P##v),P##e,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0tuple 0EVAL_TUPLE,
#define ORDER_PP_0EVAL_TUPLE(P,e1,G,eval_tuple_b,s,e2,K,...) ORDER_PP_##K(,(ORDER_PP_FY(OPEN,(ORDER_PP_SEQ_TERMINATE(ORDER_PP_EVAL_TUPLE_A P##s)))),P##__VA_ARGS__)
#define ORDER_PP_EVAL_TUPLE_A(P,x) ,ORDER_PP_LEFT(,x##P)ORDER_PP_EVAL_TUPLE_B
#define ORDER_PP_EVAL_TUPLE_A0
#define ORDER_PP_EVAL_TUPLE_B(P,x) ,ORDER_PP_LEFT(,x##P)ORDER_PP_EVAL_TUPLE_A
#define ORDER_PP_EVAL_TUPLE_B0
