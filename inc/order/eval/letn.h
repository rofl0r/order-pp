// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8letn(bs,...) 8EVAL_LETN,ORDER_PP_SEQ_AT_0 bs(,0letn),ORDER_PP_IS_TUPLE_SIZE_1(,__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8EVAL_LETN(P,e,s0,i0,bs,t,G,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##i0())(,P##e,ORDER_PP_DEF_##i0,8EVAL_LETN_LOOP,P##s0,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##t,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_LETN_LOOP(P,v0,s0,e,s1,i1,bs,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##i1())(,(,P##s0,P##v0)P##e,ORDER_PP_DEF_##i1,8EVAL_LETN_LOOP,P##s1,(,P##s0,P##v0)P##e,ORDER_PP_SEQ_AT_0 bs##P,P##__VA_ARGS__)
#else
#define ORDER_PP_8EVAL_LETN(P,e,s0,i0,bs,t,G,...) (,P##e,ORDER_PP_DEF_##i0,8EVAL_LETN_LOOP,P##s0,P##e,ORDER_PP_SEQ_AT_0 bs##P,P##t,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_LETN_LOOP(P,v0,s0,e,s1,i1,bs,...) (,(,P##s0,P##v0)P##e,ORDER_PP_DEF_##i1,8EVAL_LETN_LOOP,P##s1,(,P##s0,P##v0)P##e,ORDER_PP_SEQ_AT_0 bs##P,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0letn 0EVAL_LETN,
#ifdef ORDER_PP_DEBUG
#define ORDER_PP_0EVAL_LETN(P,e,G,eval_letn_loop,s1,e2,split_bs,t,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#else
#define ORDER_PP_0EVAL_LETN(P,e,G,eval_letn_loop,s1,e2,split_bs,t,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
