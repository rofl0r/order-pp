#ifndef ORDER_EVAL_DO_H
#define ORDER_EVAL_DO_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_do(...) 8EVAL_DO,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),__VA_ARGS__

#define ORDER_CM_8EVAL_DO(P,e,n,...) ORDER_CM_8EVAL_DO_##n(,,P##e,P##__VA_ARGS__)

#define ORDER_CM_8EVAL_DO_1(P,_,e,t,...) (,P##e,ORDER_DEF_##t,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_2(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_1,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_3(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_2,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_4(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_3,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_5(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_4,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_6(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_5,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_7(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_6,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_DO_8(P,_,e,t,...) (,P##e,ORDER_DEF_##t,8EVAL_DO_7,P##e,P##__VA_ARGS__)

#endif
