#ifndef ORDER_TEST_TEST_DEFS_H
#define ORDER_TEST_TEST_DEFS_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_id ORDER_OP(fn(X,X))
#define ORDER_DEF_1st ORDER_OP(fn(X,_,X))
#define ORDER_DEF_2nd ORDER_OP(fn(_,Y,Y))

#define ORDER_DEF_macro_let(s,i,t) ORDER_MACRO(ap(fn(s,t),i))

#define ORDER_DEF_constant_contents ORDER_CONST(is in two parts)
#define ORDER_DEF_constant_embedding ORDER_CONST(This constant ORDER_GET_CONST(constant_contents)!)

#endif
