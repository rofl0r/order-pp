#ifndef ORDER_PRELUDE_CONTROL_H_VAJK20040620
#define ORDER_PRELUDE_CONTROL_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_when(t,...) 8EVAL_IF,t,do(__VA_ARGS__),nil
#define ORDER_PP_DEF_unless(t,...) 8EVAL_IF,t,nil,do(__VA_ARGS__)

#endif
