// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_FN_NATIVE(arity,m,...) 8DEF_FN,(,8NATIVE,ORDER_PP_LIT_DEC(,arity),m,(,__VA_ARGS__,)),ORDER_PP_ARGS

# define ORDER_PP_8NATIVE(P,v,n,m,ps,...) (,ORDER_PP_FW(TYPE_CHECK,(,ORDER_PP_TUPLE_AT_0 ps##P,P##v,ORDER_PP_LIT_IS_0))(,P##n)(ORDER_PP_8NATIVE_,LAST,MORE)(,P##n,P##m,P##ps,P##v),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_LAST(P,n,m,ps,v) ORDER_PP_##m(,P##v)
# define ORDER_PP_8NATIVE_MORE(P,n,m,ps,v) (,8NATIVE_L,ORDER_PP_LIT_DEC(,P##n),P##m,(,ORDER_PP_TUPLE_REST ps##P),(,P##v))

# define ORDER_PP_8NATIVE_L(P,v,n,m,ps,vs,...) (,ORDER_PP_FW(TYPE_CHECK,(,ORDER_PP_TUPLE_AT_0 ps##P,P##v,ORDER_PP_LIT_IS_0))(,P##n)(ORDER_PP_8NATIVE_L_,LAST,MORE)(,P##n,P##m,P##ps,(,ORDER_PP_OPEN vs##P,P##v)),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_L_LAST(P,n,m,ps,vs) ORDER_PP_##m vs
# define ORDER_PP_8NATIVE_L_MORE(P,n,m,ps,vs) (,8NATIVE_L,ORDER_PP_LIT_DEC(,P##n),P##m,(,ORDER_PP_TUPLE_REST ps##P),P##vs)
#else
# define ORDER_PP_FN_NATIVE(arity,m,...) 8DEF_FN,(,8NATIVE_##arity,m),ORDER_PP_ARGS

# define ORDER_PP_8NATIVE_1(P,A,m,...) (,ORDER_PP_##m(,P##A),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_2(P,A,m,...) (,(,8NATIVE_2_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_2_1(P,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_3(P,A,m,...) (,(,8NATIVE_3_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_3_1(P,B,A,m,...) (,(,8NATIVE_3_2,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_3_2(P,C,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B,P##C),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_4(P,A,m,...) (,(,8NATIVE_4_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_4_1(P,B,A,m,...) (,(,8NATIVE_4_2,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_4_2(P,C,B,A,m,...) (,(,8NATIVE_4_3,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_4_3(P,D,C,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B,P##C,P##D),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_5(P,A,m,...) (,(,8NATIVE_5_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_5_1(P,B,A,m,...) (,(,8NATIVE_5_2,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_5_2(P,C,B,A,m,...) (,(,8NATIVE_5_3,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_5_3(P,D,C,B,A,m,...) (,(,8NATIVE_5_4,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_5_4(P,E,D,C,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B,P##C,P##D,P##E),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_6(P,A,m,...) (,(,8NATIVE_6_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_6_1(P,B,A,m,...) (,(,8NATIVE_6_2,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_6_2(P,C,B,A,m,...) (,(,8NATIVE_6_3,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_6_3(P,D,C,B,A,m,...) (,(,8NATIVE_6_4,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_6_4(P,E,D,C,B,A,m,...) (,(,8NATIVE_6_5,P##E,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_6_5(P,F,E,D,C,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B,P##C,P##D,P##E,P##F),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_7(P,A,m,...) (,(,8NATIVE_7_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_7_1(P,B,A,m,...) (,(,8NATIVE_7_2,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_7_2(P,C,B,A,m,...) (,(,8NATIVE_7_3,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_7_3(P,D,C,B,A,m,...) (,(,8NATIVE_7_4,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_7_4(P,E,D,C,B,A,m,...) (,(,8NATIVE_7_5,P##E,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_7_5(P,F,E,D,C,B,A,m,...) (,(,8NATIVE_7_6,P##F,P##E,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_7_6(P,G,F,E,D,C,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B,P##C,P##D,P##E,P##F,P##G),P##__VA_ARGS__)

# define ORDER_PP_8NATIVE_8(P,A,m,...) (,(,8NATIVE_8_1,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_1(P,B,A,m,...) (,(,8NATIVE_8_2,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_2(P,C,B,A,m,...) (,(,8NATIVE_8_3,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_3(P,D,C,B,A,m,...) (,(,8NATIVE_8_4,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_4(P,E,D,C,B,A,m,...) (,(,8NATIVE_8_5,P##E,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_5(P,F,E,D,C,B,A,m,...) (,(,8NATIVE_8_6,P##F,P##E,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_6(P,G,F,E,D,C,B,A,m,...) (,(,8NATIVE_8_7,P##G,P##F,P##E,P##D,P##C,P##B,P##A,P##m),P##__VA_ARGS__)
# define ORDER_PP_8NATIVE_8_7(P,H,G,F,E,D,C,B,A,m,...) (,ORDER_PP_##m(,P##A,P##B,P##C,P##D,P##E,P##F,P##G,P##H),P##__VA_ARGS__)
#endif
