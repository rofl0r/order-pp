#ifndef ORDER_DEF_CTOR_N_H_VAJK20040620
#define ORDER_DEF_CTOR_N_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_CTOR_N(cm) 8DEF_CTOR_N,cm##_,ORDER_PP_CTOR_N_PARAMS
#define ORDER_PP_CTOR_N_PARAMS(...) ORDER_PP_CTOR_N_PARAMS_B(,__VA_ARGS__)
#define ORDER_PP_CTOR_N_PARAMS_B(P,...) ORDER_PP_TUPLE_SIZE_MAX_10(,P##__VA_ARGS__),(,ORDER_PP_TUPLE_REVERSE(,P##__VA_ARGS__)),

#define ORDER_PP_8DEF_CTOR_N(P,e,cm,n,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,ORDER_PP_IS_1_##n(,,8DEF_CTOR_##n,(,ORDER_PP_TUPLE_REST ts##P),P##e,)cm##n,P##__VA_ARGS__)

#define ORDER_PP_8DEF_CTOR_2(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_3(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_2,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_4(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_3,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_5(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_4,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_6(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_5,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_7(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_6,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_8(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_7,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_9(P,v,ts,e,cm,...)  (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_8,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_CTOR_10(P,v,ts,e,cm,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_CTOR_9,(,ORDER_PP_TUPLE_REST ts##P),P##e,P##cm,P##v,P##__VA_ARGS__)

#endif
