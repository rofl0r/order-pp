#ifndef ORDER_UTIL_H
#define ORDER_UTIL_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_EAT(...)
#define ORDER_PP_EXPAND(l,r) l r
#define ORDER_PP_OPEN(P,...) P##__VA_ARGS__

#define ORDER_PP_NUM_ARGS_8(_,_8,_7,_6,_5,_4,_3,_2,_1,x,...) x

#endif
