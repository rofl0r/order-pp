#ifndef ORDER_EVAL_DO_H_VAJK20040620
#define ORDER_EVAL_DO_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8do(...) 8EVAL_DO,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),__VA_ARGS__

#define ORDER_PP_8EVAL_DO(P,e,n,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_##n,P##e,P##__VA_ARGS__)

#define ORDER_PP_8EVAL_DO_0(P,v,e,K,...) ORDER_PP_##K(,P##v,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_1(P,_,e,...) (,P##e,ORDER_PP_DEF_##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_2(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_1,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_3(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_2,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_4(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_3,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_5(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_4,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_6(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_5,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_7(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_6,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_DO_8(P,_,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_7,P##e,P##__VA_ARGS__)

#endif
