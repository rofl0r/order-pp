#ifndef ORDER_PRELUDE_SEQ_FOR_EACH_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_FOR_EACH_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8seq_for_each ORDER_PP_FN_CM(2,8PASS_NIL_3,8SEQ_FOR_EACH_3)
#define ORDER_PP_CM_8SEQ_FOR_EACH_3(P,_,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,),ORDER_PP_SEQ_FIRST(,P##s),ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_3,P##f,ORDER_PP_EAT s##P),P##__VA_ARGS__)

#endif
