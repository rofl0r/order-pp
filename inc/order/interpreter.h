#ifndef ORDER_INTERPRETER_H_VAJK20040620
#define ORDER_INTERPRETER_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "order/cm.h"
#include "order/def.h"
#include "order/eval.h"
#include "order/prelude.h"
#include "order/util.h"

#define ORDER_PP ORDER_PP_TEST(,ORDER_PP_EVAL_CONTEXT(,,,),ORDER_PP_IF_8true,ORDER_PP_IF_8false)(,ORDER_PP_EVAL,ORDER_PP_EVAL_FIND)()

#define ORDER_PP_EVAL() ORDER_PP_EVAL_B
#define ORDER_PP_EVAL_B(t) ORDER_PP_EVAL_CONTEXT(ORDER_PP_CM,ORDER_PP_TERM_TO_CM(t))
#define ORDER_PP_EVAL_CONTEXT(m,...) m __VA_ARGS__

#define ORDER_PP_TERM_TO_CM(t) (,,ORDER_PP_DEF_##t,8EXIT,)

#define ORDER_PP_EVAL_FIND() ORDER_PP_CM_FIND ORDER_PP_TERM_TO_CM

#endif
