#ifndef ORDER_PRELUDE_SEQ_FOLD_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_FOLD_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8seq_fold ORDER_PP_FN_CM(3,8REMAP_102,8SEQ_FOLD)
#define ORDER_PP_CM_8SEQ_FOLD(P,x,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,P##x),P##x,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_FIRST(,P##s),8SEQ_FOLD,P##f,ORDER_PP_EAT s##P),P##__VA_ARGS__)

#endif
