#ifndef ORDER_EVAL_ROUT_H_VAJK20040620
#define ORDER_EVAL_ROUT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8rout(...) 8EVAL_ROUT,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),__VA_ARGS__
#define ORDER_PP_CM_8EVAL_ROUT(P,e,n,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_DO_##n,P##e,8EVAL_ROUT_B,P##__VA_ARGS__)(,1E,)
#define ORDER_PP_CM_8EVAL_ROUT_B(P,x,...) (,P##x,P##__VA_ARGS__)(,1B,)

#endif
