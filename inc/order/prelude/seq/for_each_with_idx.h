#ifndef ORDER_PRELUDE_SEQ_FOR_EACH_WITH_IDX_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_FOR_EACH_WITH_IDX_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8seq_for_each_with_idx ORDER_PP_FN_CM(2,8REMAP_2013,,0,8SEQ_FOR_EACH_WITH_IDX_4)
#define ORDER_PP_CM_8SEQ_FOR_EACH_WITH_IDX_4(P,_,f,s,i,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,),P##i,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_FIRST(,P##s),8SEQ_FOR_EACH_WITH_IDX_4,P##f,ORDER_PP_EAT s##P,ORDER_PP_INC_##i),P##__VA_ARGS__)

#endif
