// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_FN_CM(arity,K,...) 8DEF_FN,(,8CM,ORDER_PP_LIT_DEC(,arity),K,(,__VA_ARGS__,)),ORDER_PP_ARGS

# define ORDER_PP_8CM(P,v,n,K,ps,...) (,ORDER_PP_FW(TYPE_CHECK,(,ORDER_PP_TUPLE_AT_0 ps##P,P##v,))ORDER_PP_LIT_IS_0(,P##n)(ORDER_PP_8CM_,LAST,MORE)(,P##v,P##n,P##K,P##ps),P##__VA_ARGS__)
# define ORDER_PP_8CM_LAST(P,v,n,K,ps) ORDER_PP_TEST(,ORDER_PP_##K##_PRECONDITION(,P##v)(,,,,),ORDER_PP_RIGHT(,ORDER_PP_PRECONDITION_FAILURE,8EXIT_ERROR,P##K(P##v),),)P##v,P##K
# define ORDER_PP_8CM_MORE(P,v,n,K,ps) (,8CM_L,ORDER_PP_LIT_DEC(,P##n),P##K,(,ORDER_PP_TUPLE_REST ps##P),(,P##v))

# define ORDER_PP_8CM_L(P,v,n,K,ps,vs,...) (,ORDER_PP_FW(TYPE_CHECK,(,ORDER_PP_TUPLE_AT_0 ps##P,P##v,))ORDER_PP_LIT_IS_0(,P##n)(ORDER_PP_8CM_L_,LAST,MORE)(,P##v,P##n,P##K,P##ps,ORDER_PP_OPEN P##vs),P##__VA_ARGS__)
# define ORDER_PP_8CM_L_LAST(P,v,n,K,ps,vs) ORDER_PP_TEST(,ORDER_PP_##K##_PRECONDITION(,P##v,vs)(,,,,),ORDER_PP_RIGHT(,ORDER_PP_PRECONDITION_FAILURE,8EXIT_ERROR,P##K(P##v,P##vs),),)P##v,P##K,P##vs
# define ORDER_PP_8CM_L_MORE(P,v,n,K,ps,vs) (,8CM_L,ORDER_PP_LIT_DEC(,P##n),P##K,(,ORDER_PP_TUPLE_REST ps##P),(,P##v,P##vs))
#else
# define ORDER_PP_FN_CM(arity,K,...) 8DEF_FN,(ORDER_PP_FN_CM_##arity,K),ORDER_PP_ARGS

# define ORDER_PP_FN_CM_1
# define ORDER_PP_FN_CM_2 ,8CM_2
# define ORDER_PP_FN_CM_3 ,8CM_3
# define ORDER_PP_FN_CM_4 ,8CM_4
# define ORDER_PP_FN_CM_5 ,8CM_5
# define ORDER_PP_FN_CM_6 ,8CM_6
# define ORDER_PP_FN_CM_7 ,8CM_7
# define ORDER_PP_FN_CM_8 ,8CM_8

# define ORDER_PP_8CM_2(P,A,K,...) (,(,P##K,P##A),P##__VA_ARGS__)

# define ORDER_PP_8CM_3(P,A,K,...) (,(,8CM_3_1,P##K,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_3_1(P,B,K,A,...) (,(,P##K,P##B,P##A),P##__VA_ARGS__)

# define ORDER_PP_8CM_4(P,A,K,...) (,(,8CM_4_1,P##K,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_4_1(P,B,K,A,...) (,(,8CM_4_2,P##K,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_4_2(P,C,K,B,A,...) (,(,P##K,P##C,P##B,P##A),P##__VA_ARGS__)

# define ORDER_PP_8CM_5(P,A,K,...) (,(,8CM_5_1,P##K,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_5_1(P,B,K,A,...) (,(,8CM_5_2,P##K,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_5_2(P,C,K,B,A,...) (,(,8CM_5_3,P##K,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_5_3(P,D,K,C,B,A,...) (,(,P##K,P##D,P##C,P##B,P##A),P##__VA_ARGS__)

# define ORDER_PP_8CM_6(P,A,K,...) (,(,8CM_6_1,P##K,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_6_1(P,B,K,A,...) (,(,8CM_6_2,P##K,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_6_2(P,C,K,B,A,...) (,(,8CM_6_3,P##K,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_6_3(P,D,K,C,B,A,...) (,(,8CM_6_4,P##K,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_6_4(P,E,K,D,C,B,A,...) (,(,P##K,P##E,P##D,P##C,P##B,P##A),P##__VA_ARGS__)

# define ORDER_PP_8CM_7(P,A,K,...) (,(,8CM_7_1,P##K,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_7_1(P,B,K,A,...) (,(,8CM_7_2,P##K,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_7_2(P,C,K,B,A,...) (,(,8CM_7_3,P##K,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_7_3(P,D,K,C,B,A,...) (,(,8CM_7_4,P##K,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_7_4(P,E,K,D,C,B,A,...) (,(,8CM_7_5,P##K,P##E,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_7_5(P,F,K,E,D,C,B,A,...) (,(,P##K,P##F,P##E,P##D,P##C,P##B,P##A),P##__VA_ARGS__)

# define ORDER_PP_8CM_8(P,A,K,...) (,(,8CM_8_1,P##K,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_8_1(P,B,K,A,...) (,(,8CM_8_2,P##K,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_8_2(P,C,K,B,A,...) (,(,8CM_8_3,P##K,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_8_3(P,D,K,C,B,A,...) (,(,8CM_8_4,P##K,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_8_4(P,E,K,D,C,B,A,...) (,(,8CM_8_5,P##K,P##E,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_8_5(P,F,K,E,D,C,B,A,...) (,(,8CM_8_6,P##K,P##F,P##E,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
# define ORDER_PP_8CM_8_6(P,G,K,F,E,D,C,B,A,...) (,(,P##K,P##G,P##F,P##E,P##D,P##C,P##B,P##A),P##__VA_ARGS__)
#endif
