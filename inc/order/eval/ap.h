#ifndef ORDER_EVAL_AP_H
#define ORDER_EVAL_AP_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_ap(...) 8EVAL_AP,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,ORDER_PP_OP_PARAMS,),__VA_ARGS__

#define ORDER_CM_8EVAL_AP(P,e,n,ft,...) (,P##e,ORDER_DEF_##ft,8EVAL_AP_##n,P##e,P##__VA_ARGS__)

#define ORDER_CM_8EVAL_AP_ORDER_PP_OP_PARAMS(P,f,e,...) (,P##f,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_1(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_2(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_1,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_3(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_2,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_4(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_3,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_5(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_4,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_6(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_5,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_7(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_6,P##e,P##__VA_ARGS__)
#define ORDER_CM_8EVAL_AP_8(P,f,e,p,...) (,P##e,ORDER_DEF_##p,ORDER_PP_OPEN P##f,8EVAL_AP_7,P##e,P##__VA_ARGS__)

#endif
