#ifndef ORDER_DEF_CTOR_H_VAJK20040620
#define ORDER_DEF_CTOR_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_CTOR(arity,cm) 8DEF_CTOR_##arity,cm,

#define ORDER_PP_CM_8DEF_CTOR_1(P,e,cm,p,...) (,P##e,ORDER_PP_DEF P##p,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_2(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_1 P##ts,8DEF_CTOR_LEFT_1,P##e,ORDER_PP_ARGS_FIRST_1 P##ts,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_3(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_2 P##ts,8DEF_CTOR_LEFT_2,P##e,ORDER_PP_ARGS_FIRST_2 P##ts,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_4(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_3 P##ts,8DEF_CTOR_LEFT_3,P##e,ORDER_PP_ARGS_FIRST_3 P##ts,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_5(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_4 P##ts,8DEF_CTOR_LEFT_4,P##e,ORDER_PP_ARGS_FIRST_4 P##ts,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_6(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_5 P##ts,8DEF_CTOR_LEFT_5,P##e,ORDER_PP_ARGS_FIRST_5 P##ts,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_7(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_6 P##ts,8DEF_CTOR_LEFT_6,P##e,ORDER_PP_ARGS_FIRST_6 P##ts,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_8(P,e,cm,ts,...) (,P##e,ORDER_PP_DEF_ARGS_LAST_AT_7 P##ts,8DEF_CTOR_LEFT_7,P##e,ORDER_PP_ARGS_FIRST_7 P##ts,P##cm,P##__VA_ARGS__)

#define ORDER_PP_CM_8DEF_CTOR_LEFT_7(P,v7,e,t0,t1,t2,t3,t4,t5,t6,cm,...) (,P##e,ORDER_PP_DEF_##t6,8DEF_CTOR_LEFT_6,P##e,P##t0,P##t1,P##t2,P##t3,P##t4,P##t5,P##cm,P##v7,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_6(P,v6,e,t0,t1,t2,t3,t4,t5,cm,...) (,P##e,ORDER_PP_DEF_##t5,8DEF_CTOR_LEFT_5,P##e,P##t0,P##t1,P##t2,P##t3,P##t4,P##cm,P##v6,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_5(P,v5,e,t0,t1,t2,t3,t4,cm,...) (,P##e,ORDER_PP_DEF_##t4,8DEF_CTOR_LEFT_4,P##e,P##t0,P##t1,P##t2,P##t3,P##cm,P##v5,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_4(P,v4,e,t0,t1,t2,t3,cm,...) (,P##e,ORDER_PP_DEF_##t3,8DEF_CTOR_LEFT_3,P##e,P##t0,P##t1,P##t2,P##cm,P##v4,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_3(P,v3,e,t0,t1,t2,cm,...) (,P##e,ORDER_PP_DEF_##t2,8DEF_CTOR_LEFT_2,P##e,P##t0,P##t1,P##cm,P##v3,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_2(P,v2,e,t0,t1,cm,...) (,P##e,ORDER_PP_DEF_##t1,8DEF_CTOR_LEFT_1,P##e,P##t0,P##cm,P##v2,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_1(P,v1,e,t0,cm,...) (,P##e,ORDER_PP_DEF_##t0,P##cm,P##v1,P##__VA_ARGS__)

#endif
