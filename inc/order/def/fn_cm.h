// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FN_CM(arity,K) 8DEF_FN_CM,(ORDER_PP_FN_CM_##arity,K),ORDER_PP_ARGS

#define ORDER_PP_FN_CM_1
#define ORDER_PP_FN_CM_2 ,8CM_2
#define ORDER_PP_FN_CM_3 ,8CM_3
#define ORDER_PP_FN_CM_4 ,8CM_4
#define ORDER_PP_FN_CM_5 ,8CM_5
#define ORDER_PP_FN_CM_6 ,8CM_6
#define ORDER_PP_FN_CM_7 ,8CM_7
#define ORDER_PP_FN_CM_8 ,8CM_8

#define ORDER_PP_8DEF_FN_CM(P,e,f,na,...) ORDER_PP_8EVAL_AP_##na(,P##f,P##e,P##__VA_ARGS__)

#define ORDER_PP_8CM_2(P,A,K,...) (,(,8CM_2_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_2_1(P,B,A,K,...) (,P##A,P##K,P##B,P##__VA_ARGS__)

#define ORDER_PP_8CM_3(P,A,K,...) (,(,8CM_3_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_3_1(P,B,A,K,...) (,(,8CM_3_2,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_3_2(P,C,B,A,K,...) (,P##A,P##K,P##B,P##C,P##__VA_ARGS__)

#define ORDER_PP_8CM_4(P,A,K,...) (,(,8CM_4_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_4_1(P,B,A,K,...) (,(,8CM_4_2,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_4_2(P,C,B,A,K,...) (,(,8CM_4_3,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_4_3(P,D,C,B,A,K,...) (,P##A,P##K,P##B,P##C,P##D,P##__VA_ARGS__)

#define ORDER_PP_8CM_5(P,A,K,...) (,(,8CM_5_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_1(P,B,A,K,...) (,(,8CM_5_2,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_2(P,C,B,A,K,...) (,(,8CM_5_3,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_3(P,D,C,B,A,K,...) (,(,8CM_5_4,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_5_4(P,E,D,C,B,A,K,...) (,P##A,P##K,P##B,P##C,P##D,P##E,P##__VA_ARGS__)

#define ORDER_PP_8CM_6(P,A,K,...) (,(,8CM_6_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_1(P,B,A,K,...) (,(,8CM_6_2,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_2(P,C,B,A,K,...) (,(,8CM_6_3,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_3(P,D,C,B,A,K,...) (,(,8CM_6_4,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_4(P,E,D,C,B,A,K,...) (,(,8CM_6_5,P##E,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_6_5(P,F,E,D,C,B,A,K,...) (,P##A,P##K,P##B,P##C,P##D,P##E,P##F,P##__VA_ARGS__)

#define ORDER_PP_8CM_7(P,A,K,...) (,(,8CM_7_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_1(P,B,A,K,...) (,(,8CM_7_2,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_2(P,C,B,A,K,...) (,(,8CM_7_3,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_3(P,D,C,B,A,K,...) (,(,8CM_7_4,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_4(P,E,D,C,B,A,K,...) (,(,8CM_7_5,P##E,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_5(P,F,E,D,C,B,A,K,...) (,(,8CM_7_6,P##F,P##E,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_7_6(P,G,F,E,D,C,B,A,K,...) (,P##A,P##K,P##B,P##C,P##D,P##E,P##F,P##G,P##__VA_ARGS__)

#define ORDER_PP_8CM_8(P,A,K,...) (,(,8CM_8_1,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_1(P,B,A,K,...) (,(,8CM_8_2,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_2(P,C,B,A,K,...) (,(,8CM_8_3,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_3(P,D,C,B,A,K,...) (,(,8CM_8_4,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_4(P,E,D,C,B,A,K,...) (,(,8CM_8_5,P##E,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_5(P,F,E,D,C,B,A,K,...) (,(,8CM_8_6,P##F,P##E,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_6(P,G,F,E,D,C,B,A,K,...) (,(,8CM_8_7,P##G,P##F,P##E,P##D,P##C,P##B,P##A,P##K),P##__VA_ARGS__)
#define ORDER_PP_8CM_8_7(P,H,G,F,E,D,C,B,A,K,...) (,P##A,P##K,P##B,P##C,P##D,P##E,P##F,P##G,P##H,P##__VA_ARGS__)
