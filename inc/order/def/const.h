#ifndef ORDER_EVAL_CONST_H
#define ORDER_EVAL_CONST_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_const(x) 8DEF_CONST,x

#define ORDER_CM_8DEF_CONST(P,e,v,K,...) ORDER_CM_##K(,P##v,P##__VA_ARGS__)

#endif
