#ifndef ORDER_EVAL_LET_H_VAJK20040620
#define ORDER_EVAL_LET_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// A binding expression.
//
// Syntax:
//
//   <exp> ::= 8let(<var>, <exp_i>, <exp_b>)
//
// Semantics:
//
//   [[8let(<var>, <exp_i>, <exp_b>)]] env = [[<exp_b>]] (bind env
//                                                             <var>
//                                                             [[<exp_i>]] env)
//
// The initializer expression `<exp_i>' is evaluated and the result is
// bound to `<var>' extending the environment. The body expression
// `<exp_b>' is then evaluated in the the extended environment.
#define ORDER_PP_DEF_8let(...) 8EVAL_LET,__VA_ARGS__

#define ORDER_PP_8EVAL_LET(P,e,s,i,...) (,P##e,ORDER_PP_DEF_##i,8EVAL_LET_B,P##s,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_LET_B(P,v,s,e,...) (,(,P##s,P##v)P##e,ORDER_PP_DEF_##__VA_ARGS__)

#endif
