// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_DEF_8remap(n,t,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,8EVAL_REMAP,ORDER_PP_LIT_DEC_##n,(,__VA_ARGS__),
#else
#define ORDER_PP_DEF_8remap(n,t,...) ORDER_PP_DEF_##t,8EVAL_REMAP,ORDER_PP_LIT_DEC_##n,(,__VA_ARGS__),
#endif

#define ORDER_PP_8EVAL_REMAP(P,f,n,is,G,...) (,(,8REMAP_FST,P##f,P##n,P##is),P##__VA_ARGS__)
#define ORDER_PP_8REMAP_FST(P,v,f,n,is,...) (,ORDER_PP_LIT_IS_0(,P##n)(,ORDER_PP_REMAP,)(,8REMAP_RST,P##f,ORDER_PP_LIT_DEC_##n,P##is,(,P##v)),P##__VA_ARGS__)
#define ORDER_PP_8REMAP_RST(P,v,f,n,is,vs,...) (,ORDER_PP_LIT_IS_0(,P##n)(,ORDER_PP_REMAP,)(,8REMAP_RST,P##f,ORDER_PP_LIT_DEC_##n,P##is,(,ORDER_PP_RIGHT vs##P,P##v)),P##__VA_ARGS__)

#define ORDER_PP_REMAP(P,remap_rst,f,n,is,vs) P##f ORDER_PP_FX(PSEQ_TO_APS_A,ORDER_PP_FX(PSEQ_REVERSE,(,ORDER_PP_PM(,(,ORDER_PP_OPEN vs##P,),8REMAP,ORDER_PP_OPEN is##P,,))))(0,)

#define ORDER_PP_8REMAP(P,vs,i,...) (,P##vs,ORDER_PP_IS_EDIBLE(,P##i())(,8STOP_NIL,8REMAP),P##__VA_ARGS__)ORDER_PP_IS_EDIBLE(,P##i())(,ORDER_PP_EAT,)(,ORDER_PP_TUPLE_AT_##i vs##P)

#define ORDER_PP_PSEQ_TO_APS_A(P,x) ORDER_PP_WHEN_##P(,,8AP,P##x ORDER_PP_PSEQ_TO_APS_B)
#define ORDER_PP_PSEQ_TO_APS_B(P,x) ORDER_PP_WHEN_##P(,,8AP,P##x ORDER_PP_PSEQ_TO_APS_A)
