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
#include "order/output.h"
#include "order/pm.h"
#include "order/prelude.h"
#include "order/util.h"

#define ORDER_PP                ORDER_PP_IS_SCAN_ACTIVE(0)(,ORDER_PP_FIND_SCAN_1,ORDER_PP_EVAL)(0)
#define ORDER_PP_FIND_SCAN_1(i) ORDER_PP_IS_SCAN_ACTIVE(1)(,ORDER_PP_FIND_SCAN_2,ORDER_PP_EVAL)(1)
#define ORDER_PP_FIND_SCAN_2(i) ORDER_PP_IS_SCAN_ACTIVE(2)(,ORDER_PP_FIND_SCAN_3,ORDER_PP_EVAL)(2)
#define ORDER_PP_FIND_SCAN_3(i) ORDER_PP_IS_SCAN_ACTIVE(3)(,ORDER_PP_FIND_SCAN_4,ORDER_PP_EVAL)(3)
#define ORDER_PP_FIND_SCAN_4(i) ORDER_PP_ERROR_OUT_OF_INTERPRETERS(!)

#define ORDER_PP_ERROR_OUT_OF_INTERPRETERS()

#define ORDER_PP_EVAL(i) ORDER_PP_EVAL_##i
#define ORDER_PP_EVAL_0(t) ORDER_PP_SCAN_0(ORDER_PP_SCAN_0(ORDER_PP_OUTPUT(ORDER_PP_CM(,,ORDER_PP_DEF_##t,8EXIT,))))
#define ORDER_PP_EVAL_1(t) ORDER_PP_SCAN_1(ORDER_PP_SCAN_1(ORDER_PP_OUTPUT(ORDER_PP_CM(,,ORDER_PP_DEF_##t,8EXIT,))))
#define ORDER_PP_EVAL_2(t) ORDER_PP_SCAN_2(ORDER_PP_SCAN_2(ORDER_PP_OUTPUT(ORDER_PP_CM(,,ORDER_PP_DEF_##t,8EXIT,))))
#define ORDER_PP_EVAL_3(t) ORDER_PP_SCAN_3(ORDER_PP_SCAN_3(ORDER_PP_OUTPUT(ORDER_PP_CM(,,ORDER_PP_DEF_##t,8EXIT,))))

#define ORDER_PP_SCAN_0(...) __VA_ARGS__
#define ORDER_PP_SCAN_1(...) __VA_ARGS__
#define ORDER_PP_SCAN_2(...) __VA_ARGS__
#define ORDER_PP_SCAN_3(...) __VA_ARGS__

#define ORDER_PP_IS_SCAN_ACTIVE(i) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SCAN_##i(,,),8false,8true)

#endif
