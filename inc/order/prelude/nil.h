#ifndef ORDER_PRELUDE_NIL_H_VAJK20040620
#define ORDER_PRELUDE_NIL_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_nil 8EVAL_NIL

#define ORDER_CM_8EVAL_NIL(P,e,K,...) ORDER_CM_##K(,,P##__VA_ARGS__)

#endif
