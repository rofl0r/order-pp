// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8tuple(...) 8EVAL_TUPLE,(,__VA_ARGS__,0tuple),

#define ORDER_PP_ORDER_PP_DEF_8tuple(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8tuple:(,P##e,P##__VA_ARGS__))

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_TUPLE(P,e,ts,G,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,ORDER_PP_TUPLE_FIRST P##ts,ORDER_PP_DEF_FIRST)P##ts,8EVAL_TUPLE_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_TUPLE_B(P,v,s,e,t,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##t,ORDER_PP_DEF)(P##t),8EVAL_TUPLE_B,P##s(,P##v),P##e,P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_TUPLE(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST P##ts,8EVAL_TUPLE_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_TUPLE_B(P,v,s,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_TUPLE_B,P##s(,P##v),P##e,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0tuple 0EVAL_TUPLE,
#define ORDER_PP_0EVAL_TUPLE(P,e1,G,eval_tuple_b,s,e2,K,...) ORDER_PP_##K(,(ORDER_PP_PSEQ_TO_TUPLE_A P##s(0,)),P##__VA_ARGS__)
