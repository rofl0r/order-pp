// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8fn(...) 8EVAL_FN,ORDER_PP_FN_PARAMS(0##__VA_ARGS__,ORDER_PP_COMMA_5,ORDER_PP_COMMA_4,ORDER_PP_COMMA_3,ORDER_PP_COMMA_2,ORDER_PP_COMMA_1,),(,__VA_ARGS__),

#define ORDER_PP_ORDER_PP_DEF_8fn(P,e,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):8fn:(,P##e,P##__VA_ARGS__))

#define ORDER_PP_FN_PARAMS(_,A,B,C,D,E,x,...) ORDER_PP_TUPLE_AT_1(ORDER_PP_FN_PARAMS_,x,N,)
#define ORDER_PP_FN_PARAMS_1(P,e) 8BIND_1,P##e,ORDER_PP_FN_OPEN
#define ORDER_PP_FN_PARAMS_2(P,e) 8BIND_2,P##e,ORDER_PP_FN_OPEN
#define ORDER_PP_FN_PARAMS_3(P,e) 8BIND_3,P##e,ORDER_PP_FN_OPEN
#define ORDER_PP_FN_PARAMS_4(P,e) 8BIND_4,P##e,ORDER_PP_FN_OPEN
#define ORDER_PP_FN_PARAMS_5(P,e) 8BIND_5,P##e,ORDER_PP_FN_OPEN
#define ORDER_PP_FN_PARAMS_N(P,e) 8BIND_N,P##e,
#define ORDER_PP_FN_OPEN(P,...) P##__VA_ARGS__

#define ORDER_PP_8EVAL_FN(P,e,fnp,ss,G,K,...) ORDER_PP_##K(,(,P##fnp(,P##e)ss##P),P##__VA_ARGS__)

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8BIND_1(P,v0,e,s0,t,...) (,(,P##s0,P##v0)P##e,ORDER_PP_SYNTAX_CHECK(,P##t,ORDER_PP_DEF)(P##t),P##__VA_ARGS__)
#else
# define ORDER_PP_8BIND_1(P,v0,e,s0,t,...) (,(,P##s0,P##v0)P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
#define ORDER_PP_8BIND_2(P,v0,e,s0,s1,t,...) (,(,8BIND_1,(,P##s0,P##v0)P##e,P##s1,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_3(P,v0,e,s0,s1,s2,t,...) (,(,8BIND_2,(,P##s0,P##v0)P##e,P##s1,P##s2,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_4(P,v0,e,s0,s1,s2,s3,t,...) (,(,8BIND_3,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##t),P##__VA_ARGS__)
#define ORDER_PP_8BIND_5(P,v0,e,s0,s1,s2,s3,s4,t,...) (,(,8BIND_4,(,P##s0,P##v0)P##e,P##s1,P##s2,P##s3,P##s4,P##t),P##__VA_ARGS__)

#define ORDER_PP_8BIND_N(P,v,e,ss,...) (,ORDER_PP_IS_TUPLE_SIZE_2 ss##P(,ORDER_PP_8BIND_N_LAST,)(,8BIND_N,(,ORDER_PP_TUPLE_AT_0 ss##P,P##v)P##e,(,ORDER_PP_TUPLE_REST ss##P)),P##__VA_ARGS__)
#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8BIND_N_LAST(P,bind_n,e,t) P##e,ORDER_PP_SYNTAX_CHECK(,ORDER_PP_TUPLE_FIRST t,ORDER_PP_DEF_FIRST)t
#else
# define ORDER_PP_8BIND_N_LAST(P,bind_n,e,t) P##e,ORDER_PP_DEF_FIRST t
#endif
