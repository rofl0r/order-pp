#ifndef ORDER_EVAL_VAL_H
#define ORDER_EVAL_VAL_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_val(x) 8VAL,x

#define ORDER_CM_8VAL(P,e,v,K,...) ORDER_CM_##K(,P##v,P##__VA_ARGS__)

#endif
