#ifndef ORDER_INTERPRETER_H
#define ORDER_INTERPRETER_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/cm.h"
#include "order/def/boolean.h"
#include "order/def/cm.h"
#include "order/def/const.h"
#include "order/def/numeric.h"
#include "order/def/op.h"
#include "order/eval/ap.h"
#include "order/eval/fn.h"
#include "order/eval/ref.h"
#include "order/eval/seq.h"
#include "order/eval/tuple.h"
#include "order/util.h"

#define ORDER_CONST(x) 8DEF_CONST,x
#define ORDER_GET_CONST(name) ORDER_GET_CONST_1(ORDER_DEF_##name)
#define ORDER_GET_CONST_1(x) ORDER_GET_CONST_2(x)
#define ORDER_GET_CONST_2(_,x) x

#define ORDER_MACRO(x) ORDER_DEF_##x

#define ORDER_OP(x) ORDER_OP_##x

#define ORDER(t) ORDER_CM(,,ORDER_DEF(t),8STOP,)

#endif
