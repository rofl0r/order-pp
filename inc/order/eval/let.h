// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8let(bs,...) 8EVAL_LET,ORDER_PP_SEQ_AT_0 bs(,0let),ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_LET(P,e,s0,i0,bs,t,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##i0())ORDER_PP_DEF_##i0,8EVAL_LET_LOOP,P##s0,ORDER_PP_NIL,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##t,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_LET_LOOP(P,v0,s0,ext,e,s1,i1,bs,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##i1())ORDER_PP_DEF_##i1,8EVAL_LET_LOOP,P##s1,(,P##s0,P##v0)P##ext,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_LET(P,e,s0,i0,bs,t,G,...) (,P##e,ORDER_PP_DEF_##i0,8EVAL_LET_LOOP,P##s0,ORDER_PP_NIL,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##t,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_LET_LOOP(P,v0,s0,ext,e,s1,i1,bs,...) (,P##e,ORDER_PP_DEF_##i1,8EVAL_LET_LOOP,P##s1,(,P##s0,P##v0)P##ext,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0let 0EVAL_LET,
#ifdef ORDER_PP_DEBUG
# define ORDER_PP_0EVAL_LET(P,e,G,eval_let_loop,s1,ext,e2,split_bs,t,...) (,P##ext()P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,P##__VA_ARGS__)
#else
# define ORDER_PP_0EVAL_LET(P,e,G,eval_let_loop,s1,ext,e2,split_bs,t,...) (,P##ext()P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
