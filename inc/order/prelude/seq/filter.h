#ifndef ORDER_PRELUDE_SEQ_FILTER_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_FILTER_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_seq_filter ORDER_OP_CM(2,8SEQ_FILTER)
#define ORDER_CM_8SEQ_FILTER(P,f,s,...)         \
(,P##f,8SEQ_FILTER_3,,P##s,P##__VA_ARGS__)
#define ORDER_CM_8SEQ_FILTER_3(P,f,out,in,...)                                                                          \
(,ORDER_PP_IS_TUPLE(,P##in)(,(,ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN P##f,8SEQ_FILTER_3_B,P##f,P##out,P##in),        \
                            (,P##out)),P##__VA_ARGS__)
#define ORDER_CM_8SEQ_FILTER_3_B(P,b,f,out,in,...)                                                      \
(,P##f,8SEQ_FILTER_3,P##out ORDER_PP_IF_##b(,ORDER_PP_SEQ_TAKE,ORDER_PP_SEQ_DROP) P##in,P##__VA_ARGS__)

#endif
