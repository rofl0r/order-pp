#ifndef ORDER_TEST_TEST_DEFS_H_VAJK20040620
#define ORDER_TEST_TEST_DEFS_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_id ORDER_PP_OP(fn(X,X))
#define ORDER_PP_DEF_1st ORDER_PP_OP(fn(X,_,X))
#define ORDER_PP_DEF_2nd ORDER_PP_OP(fn(_,Y,Y))

#define ORDER_PP_DEF_macro_let(s,i,t) ORDER_PP_MACRO(ap(fn(s,t),i))

#define ORDER_PP_DEF_constant_contents ORDER_PP_CONST(is in two parts)
#define ORDER_PP_DEF_constant_embedding ORDER_PP_CONST(This constant ORDER_PP_GET_CONST(constant_contents)!)

#define ORDER_PP_DEF_exp_delay                  \
ORDER_PP_OP(fn(N,                               \
               unless(is_0(N),                  \
                      exp_delay(dec(N)),        \
                      exp_delay(dec(N)))))

#endif
