#ifndef ORDER_INTERPRETER_H
#define ORDER_INTERPRETER_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/cm.h"
#include "order/eval/ap.h"
#include "order/eval/fn.h"
#include "order/eval/ref.h"
#include "order/eval/val.h"
#include "order/util.h"

#define ORDER(t) ORDER_CM(,,ORDER_DEF(t),8STOP,)

#define ORDER_DEF(t) ORDER_DEF_##t

#endif
