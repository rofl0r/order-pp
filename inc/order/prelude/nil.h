#ifndef ORDER_PRELUDE_NIL_H_VAJK20040620
#define ORDER_PRELUDE_NIL_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_nil 8DEF_CONST,

#define ORDER_PP_DEF_is_nil ORDER_PP_FN_CM(1,8IS_NIL)
#define ORDER_PP_CM_8IS_NIL(P,x,...) (,ORDER_PP_IS_NIL(,P##x)(,(,true),false),P##__VA_ARGS__)

#endif
