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

#define ORDER_PP(program) ORDER_PP_CM(,,ORDER_PP_DEF(program),8STOP,)

#endif
