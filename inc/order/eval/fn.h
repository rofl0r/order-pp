// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// An anonymous function or lambda expression.
//
// Syntax:
//
//   <exp> ::= 8fn(<var_1>, ..., <var_n>, <exp_b>)
//
// Semantics:
//
//   [[8fn(<var_1>, ..., <var_n>, <exp_b>)]] env = fn p_1 ... p_n =>
//                                                   [[exp_b]] (bind env
//                                                                   [<var_1>, ..., <var_n>]
//                                                                   [p_1, ..., p_n])
//
// A functional value is created. The syntactic form of functional values
// is unspecified.
//
// For example,
//
//   8ap(8ap(8fn(8X,8Y,
//               8add(8X,8Y)),
//           5),
//       4) ==> 9
#define ORDER_PP_DEF_8fn(...) 8EVAL_FN,ORDER_PP_NUM_ARGS_8(__VA_ARGS__,8,7,6,5,4,3,2,1,0,),(,__VA_ARGS__),

#define ORDER_PP_8EVAL_FN(P,e,n,ss,G,K,...) ORDER_PP_##K(,(,8BIND_##n,P##e,ORDER_PP_8EVAL_FN_OPEN ss##P),P##__VA_ARGS__)
#define ORDER_PP_8EVAL_FN_OPEN(P,...) P##__VA_ARGS__

#define ORDER_PP_8BIND_1(P,v0,e,s0,...) (,(,P##s0,P##v0)P##e,ORDER_PP_DEF_##__VA_ARGS__)
#define ORDER_PP_8BIND_2(P,v0,e,s0,s1,t,K,...) ORDER_PP_##K(,(,8BIND_1,(,P##s0,P##v0)P##e,P##s1,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_3(P,v0,e,s0,s1,s2,t,K,...) ORDER_PP_##K(,(,8BIND_2,(,P##s0,P##v0)P##e,P##s1,P##s2,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_4(P,v0,e,s0,s1,s2,s3,t,K,...) ORDER_PP_##K(,(,8BIND_3,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_5(P,v0,e,s0,s1,s2,s3,s4,t,K,...) ORDER_PP_##K(,(,8BIND_4,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_6(P,v0,e,s0,s1,s2,s3,s4,s5,t,K,...) ORDER_PP_##K(,(,8BIND_5,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##s5,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_7(P,v0,e,s0,s1,s2,s3,s4,s5,s6,t,K,...) ORDER_PP_##K(,(,8BIND_6,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##s5,P##s6,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_8(P,v0,e,s0,s1,s2,s3,s4,s5,s6,s7,t,K,...) ORDER_PP_##K(,(,8BIND_7,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##s5,P##s6,P##s7,P##t),P##__VA_ARGS__)
