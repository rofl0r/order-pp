// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8cond(ts) 8EVAL_COND,ORDER_PP_EVAL_COND_SPLIT ts(0cond,),

#define ORDER_PP_ORDER_PP_DEF_8cond(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8cond:(,P##e,P##__VA_ARGS__))

#define ORDER_PP_EVAL_COND_SPLIT(c,...) c,ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_COND(P,e,bt,ct,ts,G,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##bt,ORDER_PP_DEF)(P##bt),8EVAL_COND_LOOP,P##ct,ORDER_PP_EVAL_COND_SPLIT P##ts,P##e,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_COND_LOOP(P,b0,ct0,bt1,ct1,ts,e,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,ORDER_PP_IF_##b0(,P##ct0,P##bt1),ORDER_PP_IF_##b0)(ORDER_PP_DEF_,P##ct0,P##bt1,8EVAL_COND_LOOP,P##ct1,ORDER_PP_EVAL_COND_SPLIT P##ts,P##e),P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_COND(P,e,bt,ct,ts,G,...) (,P##e,ORDER_PP_DEF_##bt,8EVAL_COND_LOOP,P##ct,ORDER_PP_EVAL_COND_SPLIT P##ts,P##e,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_COND_LOOP(P,b0,ct0,bt1,ct1,ts,e,...) (,P##e,ORDER_PP_IF_##b0(ORDER_PP_DEF_,P##ct0,P##bt1,8EVAL_COND_LOOP,P##ct1,ORDER_PP_EVAL_COND_SPLIT P##ts,P##e),P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0cond 0EVAL_COND,
#define ORDER_PP_0EVAL_COND(P,e0,G,eval_cond_loop,ct,ts,e1,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)

#define ORDER_PP_DEF_8else 0EVAL_ELSE,
#ifdef ORDER_PP_DEBUG
# define ORDER_PP_0EVAL_ELSE(P,e,G,eval_cond_loop,ct,bt1,ct1,ts,e1,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##ct,ORDER_PP_DEF)(P##ct),P##__VA_ARGS__)
#else
# define ORDER_PP_0EVAL_ELSE(P,e,G,eval_cond_loop,ct,bt1,ct1,ts,e1,...) (,P##e,ORDER_PP_DEF_##ct,P##__VA_ARGS__)
#endif
