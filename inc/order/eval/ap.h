// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8ap(...) 8EVAL_AP,ORDER_PP_DEF_8ap_ARGS(0##__VA_ARGS__,ORDER_PP_COMMA_5,ORDER_PP_COMMA_4,ORDER_PP_COMMA_3,ORDER_PP_COMMA_2,ORDER_PP_COMMA_1,ORDER_PP_COMMA_0,)(,__VA_ARGS__),
#define ORDER_PP_DEF_8ap_ARGS(_,A,B,C,D,E,x,...) ORDER_PP_TUPLE_AT_1(ORDER_PP_DEF_8ap_ARGS_,x,N,)
#define ORDER_PP_DEF_8ap_ARGS_0(P,...) 0,P##__VA_ARGS__
#define ORDER_PP_DEF_8ap_ARGS_1(P,...) 1,P##__VA_ARGS__
#define ORDER_PP_DEF_8ap_ARGS_2(P,...) 2,P##__VA_ARGS__
#define ORDER_PP_DEF_8ap_ARGS_3(P,...) 3,P##__VA_ARGS__
#define ORDER_PP_DEF_8ap_ARGS_4(P,...) 4,P##__VA_ARGS__
#define ORDER_PP_DEF_8ap_ARGS_5(P,...) 5,P##__VA_ARGS__
#define ORDER_PP_DEF_8ap_ARGS_N(P,t,...) 8N,P##t,(,P##__VA_ARGS__)

#define ORDER_PP_ARGS(...) ORDER_PP_ARGS_B(0##__VA_ARGS__,,ORDER_PP_COMMA_5,ORDER_PP_COMMA_4,ORDER_PP_COMMA_3,ORDER_PP_COMMA_2,ORDER_PP_COMMA_1,)(,__VA_ARGS__),
#define ORDER_PP_ARGS_B(_,A,B,C,D,E,x,...) ORDER_PP_TUPLE_AT_1(ORDER_PP_ARGS_,x,N,)
#define ORDER_PP_ARGS_1(P,...) 1,P##__VA_ARGS__
#define ORDER_PP_ARGS_2(P,...) 2,P##__VA_ARGS__
#define ORDER_PP_ARGS_3(P,...) 3,P##__VA_ARGS__
#define ORDER_PP_ARGS_4(P,...) 4,P##__VA_ARGS__
#define ORDER_PP_ARGS_5(P,...) 5,P##__VA_ARGS__
#define ORDER_PP_ARGS_N(P,...) 8N,(,P##__VA_ARGS__)

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8EVAL_AP(P,e,n,t,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,8EVAL_AP_##n,P##e,P##__VA_ARGS__)
#else
#define ORDER_PP_8EVAL_AP(P,e,n,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_AP_##n,P##e,P##__VA_ARGS__)
#endif

#define ORDER_PP_8EVAL_AP_ORDER_PP_ARGS(P,f,e,K,...) ORDER_PP_##K(,P##f,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_0(P,f,e,G,...)   (,P##f,P##__VA_ARGS__)
#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8EVAL_AP_1(P,f,e,t,G,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_2(P,f,e,t,...)   ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_1,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_3(P,f,e,t,...)   ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_2,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_4(P,f,e,t,...)   ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_3,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_5(P,f,e,t,...)   ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())(,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_4,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_8N(P,f,e,ts,G,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_FIRST ts##P())(,P##e,ORDER_PP_DEF_FIRST ts##P,ORDER_PP_OPEN f##P,ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,8EVAL_AP_8N,P##e,(,ORDER_PP_TUPLE_REST ts##P),,)P##__VA_ARGS__)
#else
#define ORDER_PP_8EVAL_AP_1(P,f,e,t,G,...) (,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_2(P,f,e,t,...)   (,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_1,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_3(P,f,e,t,...)   (,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_2,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_4(P,f,e,t,...)   (,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_3,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_5(P,f,e,t,...)   (,P##e,ORDER_PP_DEF_##t,ORDER_PP_OPEN f##P,8EVAL_AP_4,P##e,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AP_8N(P,f,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,ORDER_PP_OPEN f##P,ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,8EVAL_AP_8N,P##e,(,ORDER_PP_TUPLE_REST ts##P),,)P##__VA_ARGS__)
#endif
