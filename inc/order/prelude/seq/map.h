#ifndef ORDER_PRELUDE_SEQ_MAP_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_MAP_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_8seq_map ORDER_PP_FN_CM(2,8SEQ_MAP)
#define ORDER_PP_CM_8SEQ_MAP(P,f,in,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_3,P##f,ORDER_PP_EAT in##P,),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_MAP_3(P,x,f,in,out,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_3,P##f,ORDER_PP_EAT in##P,)P##out(P##x),P##__VA_ARGS__)

#endif
