#ifndef ORDER_PRELUDE_SEQ_TRANSFORM_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_TRANSFORM_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_seq_transform ORDER_PP_OP_CM(2,8SEQ_TRANSFORM)
#define ORDER_PP_CM_8SEQ_TRANSFORM(P,f,in,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN P##f,8SEQ_TRANSFORM_3,P##f,ORDER_PP_EAT P##in,),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_TRANSFORM_3(P,x,f,in,out,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN P##f,8SEQ_TRANSFORM_3,P##f,ORDER_PP_EAT P##in,)P##out(P##x),P##__VA_ARGS__)

#endif
