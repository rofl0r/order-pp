#ifndef ORDER_PRELUDE_ARGS_H_VAJK20040620
#define ORDER_PRELUDE_ARGS_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8args ORDER_PP_CTOR_N(8ARGS)
#define ORDER_PP_8ARGS_1(P,_0,...) (,(P##_0),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_2(P,_0,_1,...) (,(P##_0,P##_1),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_3(P,_0,_1,_2,...) (,(P##_0,P##_1,P##_2),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_4(P,_0,_1,_2,_3,...) (,(P##_0,P##_1,P##_2,P##_3),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_5(P,_0,_1,_2,_3,_4,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_6(P,_0,_1,_2,_3,_4,_5,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_7(P,_0,_1,_2,_3,_4,_5,_6,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6),P##__VA_ARGS__)
#define ORDER_PP_8ARGS_8(P,_0,_1,_2,_3,_4,_5,_6,_7,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,P##_7),P##__VA_ARGS__)

#define ORDER_PP_DEF_8args_to_tuple ORDER_PP_FN_CM(1,8ARGS_TO_TUPLE)
#define ORDER_PP_8ARGS_TO_TUPLE(P,a,...) (,(,ORDER_PP_OPEN_NP P##a,),P##__VA_ARGS__)

#endif
