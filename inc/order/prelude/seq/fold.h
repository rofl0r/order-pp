#ifndef ORDER_PRELUDE_SEQ_FOLD_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_FOLD_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_seq_fold ORDER_PP_FN_CM(3,8SEQ_FOLD)
#define ORDER_PP_CM_8SEQ_FOLD(P,f,x,...) ORDER_PP_CM_8SEQ_FOLD_3(,x##P,f##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_FOLD_3(P,x,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,P##x),P##x,ORDER_PP_OPEN f##P,8SEQ_FOLD_3_B,P##f,ORDER_PP_SEQ_AT_0 s##P),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_FOLD_3_B(P,fx,f,y,...) (,P##y,ORDER_PP_OPEN fx##P,8SEQ_FOLD_3,P##f,P##__VA_ARGS__)

#endif
