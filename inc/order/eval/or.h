#ifndef ORDER_EVAL_OR_H_VAJK20040620
#define ORDER_EVAL_OR_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8or(...) 8EVAL_OR,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,9,8,7,6,5,4,3,2,1,),__VA_ARGS__

#define ORDER_PP_CM_8EVAL_OR(P,e,n,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_OR_##n,P##e,P##__VA_ARGS__)

#define ORDER_PP_CM_8EVAL_OR_1(P,b,e,...) (,P##b,P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_2(P,b,e,t1,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1),P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_3(P,b,e,t1,t2,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1,8EVAL_OR_2,P##e,P##t2),P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_4(P,b,e,t1,t2,t3,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1,8EVAL_OR_3,P##e,P##t2,P##t3),P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_5(P,b,e,t1,t2,t3,t4,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1,8EVAL_OR_4,P##e,P##t2,P##t3,P##t4),P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_6(P,b,e,t1,t2,t3,t4,t5,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1,8EVAL_OR_5,P##e,P##t2,P##t3,P##t4,P##t5),P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_7(P,b,e,t1,t2,t3,t4,t5,t6,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1,8EVAL_OR_6,P##e,P##t2,P##t3,P##t4,P##t5,P##t6),P##__VA_ARGS__)
#define ORDER_PP_CM_8EVAL_OR_8(P,b,e,t1,t2,t3,t4,t5,t6,t7,...) (,ORDER_PP_IF_OPEN_##b(,(,8true),P##e,ORDER_PP_DEF_##t1,8EVAL_OR_7,P##e,P##t2,P##t3,P##t4,P##t5,P##t6,P##t7),P##__VA_ARGS__)

#endif
