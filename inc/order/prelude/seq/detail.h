#ifndef ORDER_PRELUDE_SEQ_DETAIL_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_DETAIL_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_SEQ_FIRST(P,s) ORDER_PP_EXPAND(ORDER_PP_SEQ_FIRST_B,(,ORDER_PP_SEQ_AT_0 P##s))
#define ORDER_PP_SEQ_FIRST_B(P,_0,...) P##_0
#define ORDER_PP_SEQ_AT_0(...) __VA_ARGS__,

#endif
