// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8lets(bs,...) 8EVAL_LETS,ORDER_PP_SEQ_AT_0 bs(,0lets),ORDER_PP_IS_TUPLE_SIZE_1(,__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#define ORDER_PP_ORDER_PP_DEF_8lets(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8lets:(,P##e,P##__VA_ARGS__))

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_LETS(P,e,s0,i0,bs,t,G,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##i0,ORDER_PP_DEF)(P##i0),8EVAL_LETS_L,P##s0,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##t,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_LETS_L(P,v0,s0,e,s1,i1,bs,...) (,(,P##s0,P##v0)P##e,ORDER_PP_SYNTAX_CHECK(,P##i1,ORDER_PP_DEF)(P##i1),8EVAL_LETS_L,P##s1,(,P##s0,P##v0)P##e,ORDER_PP_SEQ_AT_0 bs##P,P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_LETS(P,e,s0,i0,bs,t,G,...) (,P##e,ORDER_PP_DEF_##i0,8EVAL_LETS_L,P##s0,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##t,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_LETS_L(P,v0,s0,e,s1,i1,bs,...) (,(,P##s0,P##v0)P##e,ORDER_PP_DEF_##i1,8EVAL_LETS_L,P##s1,(,P##s0,P##v0)P##e,ORDER_PP_SEQ_AT_0 bs##P,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0lets 0EVAL_LETS,
#ifdef ORDER_PP_DEBUG
# define ORDER_PP_0EVAL_LETS(P,e,G,eval_lets_loop,s1,e2,split_bs,t,...) (,P##e,ORDER_PP_SYNTAX_CHECK(,P##t,ORDER_PP_DEF)(P##t),P##__VA_ARGS__)
#else
# define ORDER_PP_0EVAL_LETS(P,e,G,eval_lets_loop,s1,e2,split_bs,t,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
