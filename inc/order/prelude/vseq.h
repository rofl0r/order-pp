#ifndef ORDER_PRELUDE_VSEQ_H_VAJK20040620
#define ORDER_PRELUDE_VSEQ_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8vseq_to_seq ORDER_PP_FN_MACRO_P(1,ORDER_PP_VSEQ_TO_SEQ)
#define ORDER_PP_VSEQ_TO_SEQ(P,vs) ORDER_PP_CAT(ORDER_PP_VSEQ_TO_SEQ_A P##vs,0)
#define ORDER_PP_VSEQ_TO_SEQ_A(...) ((,ORDER_PP_BOTH(,__VA_ARGS__),))ORDER_PP_VSEQ_TO_SEQ_B
#define ORDER_PP_VSEQ_TO_SEQ_A0
#define ORDER_PP_VSEQ_TO_SEQ_B(...) ((,ORDER_PP_BOTH(,__VA_ARGS__),))ORDER_PP_VSEQ_TO_SEQ_A
#define ORDER_PP_VSEQ_TO_SEQ_B0

#endif
