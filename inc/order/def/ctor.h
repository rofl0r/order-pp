#ifndef ORDER_DEF_CTOR_H_VAJK20040620
#define ORDER_DEF_CTOR_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_CTOR(arity,cm) 8DEF_CTOR_##arity,cm,

#define ORDER_PP_CTOR_N(cm) 8DEF_CTOR_N,cm,ORDER_PP_CTOR_N_PARAMS
#define ORDER_PP_CTOR_N_PARAMS(...) ORDER_PP_CTOR_N_PARAMS_B(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),(__VA_ARGS__)
#define ORDER_PP_CTOR_N_PARAMS_B(_,_8,_7,_6,_5,_4,_3,_2,_1,n,...) n

#define ORDER_PP_CM_8DEF_CTOR_N(P,e,cm,n,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_##n P##ts,ORDER_PP_CTOR_UNLESS_IS_1_##n(,8DEF_CTOR_LEFT_##n,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_##n ts##P,P##e,)cm##n,P##__VA_ARGS__)

#define ORDER_PP_CM_8DEF_CTOR_1(P,e,cm,p,...) (,P##e,ORDER_PP_DEF p##P,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_2(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_2 ts##P,8DEF_CTOR_LEFT_2,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_2 ts##P,P##e,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_3(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_3 ts##P,8DEF_CTOR_LEFT_3,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_3 ts##P,P##e,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_4(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_4 ts##P,8DEF_CTOR_LEFT_4,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_4 ts##P,P##e,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_5(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_5 ts##P,8DEF_CTOR_LEFT_5,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_5 ts##P,P##e,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_6(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_6 ts##P,8DEF_CTOR_LEFT_6,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_6 ts##P,P##e,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_7(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_7 ts##P,8DEF_CTOR_LEFT_7,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_7 ts##P,P##e,P##cm,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_8(P,e,cm,ts,...) (,P##e,ORDER_PP_CTOR_DEF_LAST_8 ts##P,8DEF_CTOR_LEFT_8,ORDER_PP_CTOR_OPEN_WITHOUT_LAST_8 ts##P,P##e,P##cm,P##__VA_ARGS__)

#define ORDER_PP_CM_8DEF_CTOR_LEFT_8(P,v7,t0,t1,t2,t3,t4,t5,t6,e,cm,...) (,P##e,ORDER_PP_DEF_##t6,8DEF_CTOR_LEFT_7,P##t0,P##t1,P##t2,P##t3,P##t4,P##t5,P##e,P##cm,P##v7,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_7(P,v6,t0,t1,t2,t3,t4,t5,e,cm,...) (,P##e,ORDER_PP_DEF_##t5,8DEF_CTOR_LEFT_6,P##t0,P##t1,P##t2,P##t3,P##t4,P##e,P##cm,P##v6,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_6(P,v5,t0,t1,t2,t3,t4,e,cm,...) (,P##e,ORDER_PP_DEF_##t4,8DEF_CTOR_LEFT_5,P##t0,P##t1,P##t2,P##t3,P##e,P##cm,P##v5,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_5(P,v4,t0,t1,t2,t3,e,cm,...) (,P##e,ORDER_PP_DEF_##t3,8DEF_CTOR_LEFT_4,P##t0,P##t1,P##t2,P##e,P##cm,P##v4,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_4(P,v3,t0,t1,t2,e,cm,...) (,P##e,ORDER_PP_DEF_##t2,8DEF_CTOR_LEFT_3,P##t0,P##t1,P##e,P##cm,P##v3,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_3(P,v2,t0,t1,e,cm,...) (,P##e,ORDER_PP_DEF_##t1,8DEF_CTOR_LEFT_2,P##t0,P##e,P##cm,P##v2,P##__VA_ARGS__)
#define ORDER_PP_CM_8DEF_CTOR_LEFT_2(P,v1,t0,e,cm,...) (,P##e,ORDER_PP_DEF_##t0,P##cm,P##v1,P##__VA_ARGS__)

#define ORDER_PP_CTOR_UNLESS_IS_1_1(P,...)
#define ORDER_PP_CTOR_UNLESS_IS_1_2(P,...) P##__VA_ARGS__
#define ORDER_PP_CTOR_UNLESS_IS_1_3(P,...) P##__VA_ARGS__
#define ORDER_PP_CTOR_UNLESS_IS_1_4(P,...) P##__VA_ARGS__
#define ORDER_PP_CTOR_UNLESS_IS_1_5(P,...) P##__VA_ARGS__
#define ORDER_PP_CTOR_UNLESS_IS_1_6(P,...) P##__VA_ARGS__
#define ORDER_PP_CTOR_UNLESS_IS_1_7(P,...) P##__VA_ARGS__
#define ORDER_PP_CTOR_UNLESS_IS_1_8(P,...) P##__VA_ARGS__

#define ORDER_PP_CTOR_DEF_LAST_1(_0) ORDER_PP_DEF_##_0
#define ORDER_PP_CTOR_DEF_LAST_2(_0,_1) ORDER_PP_DEF_##_1
#define ORDER_PP_CTOR_DEF_LAST_3(_0,_1,_2) ORDER_PP_DEF_##_2
#define ORDER_PP_CTOR_DEF_LAST_4(_0,_1,_2,_3) ORDER_PP_DEF_##_3
#define ORDER_PP_CTOR_DEF_LAST_5(_0,_1,_2,_3,_4) ORDER_PP_DEF_##_4
#define ORDER_PP_CTOR_DEF_LAST_6(_0,_1,_2,_3,_4,_5) ORDER_PP_DEF_##_5
#define ORDER_PP_CTOR_DEF_LAST_7(_0,_1,_2,_3,_4,_5,_6) ORDER_PP_DEF_##_6
#define ORDER_PP_CTOR_DEF_LAST_8(_0,_1,_2,_3,_4,_5,_6,_7) ORDER_PP_DEF_##_7

#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_2(_0,...) _0
#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_3(_0,_1,...) _0,_1
#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_4(_0,_1,_2,...) _0,_1,_2
#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_5(_0,_1,_2,_3,...) _0,_1,_2,_3
#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_6(_0,_1,_2,_3,_4,...) _0,_1,_2,_3,_4
#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_7(_0,_1,_2,_3,_4,_5,...) _0,_1,_2,_3,_4,_5
#define ORDER_PP_CTOR_OPEN_WITHOUT_LAST_8(_0,_1,_2,_3,_4,_5,_6,...) _0,_1,_2,_3,_4,_5,_6

#endif
