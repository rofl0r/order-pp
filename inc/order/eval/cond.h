// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8cond(ts) 8EVAL_COND,ORDER_PP_FX(EVAL_COND_SPLIT,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_TO_PSEQ_A ts)(,0cond,)),

#define ORDER_PP_EVAL_COND_SPLIT(P,c,...) P##c,ORDER_PP_IS_TUPLE_SIZE_1(,P##__VA_ARGS__)(,ORDER_PP_REM,8do)(P##__VA_ARGS__),

#define ORDER_PP_8EVAL_COND(P,e,bt,ct,ts,G,...) (,P##e,ORDER_PP_DEF_##bt,8EVAL_COND_LOOP,P##ct,ORDER_PP_EVAL_COND_SPLIT P##ts,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_COND_LOOP(P,b0,ct0,bt1,ct1,ts,e,...) (,P##e,ORDER_PP_IF_##b0(ORDER_PP_DEF_,P##ct0,P##bt1,8EVAL_COND_LOOP,P##ct1,ORDER_PP_EVAL_COND_SPLIT P##ts,P##e),P##__VA_ARGS__)

#define ORDER_PP_DEF_0cond 0EVAL_COND,
#define ORDER_PP_0EVAL_COND(P,e0,G,eval_cond_loop,ct,ts,e1,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)
