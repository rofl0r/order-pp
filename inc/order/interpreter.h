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

#define ORDER_PP_MACRO(expression) ORDER_PP_DEF_##expression

#define ORDER_PP ORDER_PP_TEST(,ORDER_PP_EVAL_CONTEXT(,,,),ORDER_PP_IF_8true,ORDER_PP_IF_8false)(,ORDER_PP_EVAL,ORDER_PP_FIND_0)()

#define ORDER_PP_EVAL() ORDER_PP_EVAL_B
#define ORDER_PP_EVAL_B(t) ORDER_PP_EVAL_CONTEXT(ORDER_PP_CM_0,ORDER_PP_TERM_TO_CM(t))
#define ORDER_PP_EVAL_CONTEXT(m,...) m __VA_ARGS__

#define ORDER_PP_TERM_TO_CM(t) (,,ORDER_PP_DEF_##t,8EXIT,)

#define ORDER_PP_FIND_0(...) ORDER_PP_CM_IS_SCAN_ACTIVE(0)(,ORDER_PP_WAIT,ORDER_PP_FIND_1)(,0,1)ORDER_PP_TERM_TO_CM
#define ORDER_PP_FIND_1(...) ORDER_PP_CM_IS_SCAN_ACTIVE(1)(,ORDER_PP_WAIT,ORDER_PP_FIND_2)(,1,2)
#define ORDER_PP_FIND_2(...) ORDER_PP_CM_IS_SCAN_ACTIVE(2)(,ORDER_PP_WAIT,ORDER_PP_FIND_3)(,2,3)
#define ORDER_PP_FIND_3(...) ORDER_PP_CM_IS_SCAN_ACTIVE(3)(,ORDER_PP_WAIT,ORDER_PP_FIND_4)(,3,4)

#define ORDER_PP_WAIT(P,i,j) ORDER_PP_CM_IS_SCAN_ACTIVE(P##i)(,ORDER_PP_WAIT_B ORDER_PP_EAT(),ORDER_PP_WAIT_END)(,P##i,P##j)
#define ORDER_PP_WAIT_B(P,i,j) ORDER_PP_CM_IS_SCAN_ACTIVE(P##i)(,ORDER_PP_WAIT ORDER_PP_EAT(),ORDER_PP_WAIT_END)(,P##i,P##j)
#define ORDER_PP_WAIT_END(P,i,j) ORDER_PP_CM_##j

#endif
