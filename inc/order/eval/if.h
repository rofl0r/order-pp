#ifndef ORDER_EVAL_IF_H_VAJK20040620
#define ORDER_EVAL_IF_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Conditional expression.
//
// Syntax:
//
//   <exp> ::= 8fn(<exp_b>, <exp_c>, <exp_a>)
//
// Semantics:
//
//   [[8if(<exp_b>, <exp_c>, <exp_a>)]] env = match [[<exp_b>]] env with
//                                              | 8true  -> [[<exp_c>]] env
//                                              | 8false -> [[<exp_a>]] env
//
// The boolean expression `<exp_b>' is evaluated first. If the boolean
// expression evaluates to `8true', then the consequent expression
// `<exp_c>' is evaluated. If the boolean expression evaluates to `8false'
// the alternative expression `<exp_a>` is evaluated. Otherwise the result
// is undefined.
//
// For example,
//
//   8if(8true, 1, 2) ==> 1
//   8if(8false, 1, 2) ==> 2
#define ORDER_PP_DEF_8if(...) 8EVAL_IF,__VA_ARGS__

#define ORDER_PP_8EVAL_IF(P,e,b,c,a,...) (,P##e,ORDER_PP_DEF_##b,8EVAL_IF_B,P##e,P##c,P##a,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_IF_B(P,b,e,c,a,...) (,P##e,ORDER_PP_IF_##b(ORDER_PP_DEF_,P##c,P##a),P##__VA_ARGS__)

#endif
