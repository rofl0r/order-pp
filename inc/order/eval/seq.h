#ifndef ORDER_EVAL_SEQ_H_VAJK20040620
#define ORDER_EVAL_SEQ_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8seq(e0,e1,...,eN)' constructs a sequence of the elements `e0',
// `e1', ..., `eN'. At least one element must be specified. To
// construct an empty, or nil sequence, you need to use the
// constant `8seq_nil' or `8nil'.
//
// For example,
//
//   8seq(8quote(1), 8quote(2), 8quote(3)) ==> (1)(2)(3)
#define ORDER_PP_DEF_8seq(...) 8EVAL_SEQ,(,__VA_ARGS__,0seq),

#define ORDER_PP_8EVAL_SEQ(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST P##ts,8EVAL_SEQ_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_SEQ_B(P,v,s,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_SEQ_B,P##s(P##v),P##e,P##__VA_ARGS__)
#define ORDER_PP_DEF_0seq 0EVAL_SEQ
#define ORDER_PP_0EVAL_SEQ(P,e1,eval_seq_b,s,e2,...) (,P##s,P##__VA_ARGS__)

#endif
