#ifndef ORDER_PRELUDE_SEQ_BINDINGS_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_BINDINGS_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "chaos/preprocessor/seq/elem.h"
#include "chaos/preprocessor/seq/first_n.h"
#include "chaos/preprocessor/seq/insert.h"
#include "chaos/preprocessor/seq/pop_back.h"
#include "chaos/preprocessor/seq/rest_n.h"
#include "chaos/preprocessor/seq/reverse.h"
#include "chaos/preprocessor/seq/size.h"

#define ORDER_PP_DEF_seq_at ORDER_PP_FN_MACRO(2,CHAOS_PP_SEQ_ELEM)
#define ORDER_PP_DEF_seq_first_n ORDER_PP_FN_MACRO(2,CHAOS_PP_SEQ_FIRST_N)
#define ORDER_PP_DEF_seq_insert ORDER_PP_FN_MACRO(3,CHAOS_PP_SEQ_INSERT)
#define ORDER_PP_DEF_seq_pop_back ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_POP_BACK)
#define ORDER_PP_DEF_seq_rest_n ORDER_PP_FN_MACRO(2,CHAOS_PP_SEQ_REST_N)
#define ORDER_PP_DEF_seq_reverse ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_REVERSE)
#define ORDER_PP_DEF_seq_size ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_SIZE)

#endif
