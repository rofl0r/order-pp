#ifndef ORDER_INTERPRETER_H_VAJK20040620
#define ORDER_INTERPRETER_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#ifndef CHAOS_PP_VARIADICS
#define CHAOS_PP_VARIADICS 1
#endif

#if 1 != CHAOS_PP_VARIADICS
#error Order requires variadics.
#endif

#define ORDER_PP_VERIFY_VARIADICS(...)

#include "order/cm.h"
#include "order/def.h"
#include "order/eval.h"
#include "order/pm.h"
#include "order/prelude.h"

#define ORDER_PP ORDER_PP_CM_IS_SCAN_ACTIVE(0)(,ORDER_PP_EVAL_N,ORDER_PP_EVAL_0)

#define ORDER_PP_EVAL_0(t) ORDER_PP_CM_0(,,ORDER_PP_DEF_##t,8EXIT,)
#define ORDER_PP_EVAL_N(t) ORDER_PP_CM(,,ORDER_PP_DEF_##t,8EXIT,)

#endif
