#ifndef ORDER_UTIL_H_VAJK20040620
#define ORDER_UTIL_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF(t) ORDER_PP_DEF_##t

#define ORDER_PP_EAT(...)
#define ORDER_PP_EXPAND(l,r) l r
#define ORDER_PP_PASTE(l,r) ORDER_PP_PRIMITIVE_PASTE(l,r)
#define ORDER_PP_PRIMITIVE_PASTE(l,r) l##r
#define ORDER_PP_OPEN(P,...) P##__VA_ARGS__
#define ORDER_PP_OPEN_COND(P,...) P##__VA_ARGS__
#define ORDER_PP_OPEN_NP(...) __VA_ARGS__

#define ORDER_PP_CM_INVOKE(K,...) ORDER_PP_CM_##K(,__VA_ARGS__

#define ORDER_PP_CM_8PASS_NIL_3(P,v0,v1,K,...) ORDER_PP_CM_##K(,,P##v0,P##v1,P##__VA_ARGS__)
#define ORDER_PP_CM_8PASS_NIL_4(P,v0,v1,v2,K,...) ORDER_PP_CM_##K(,,P##v0,P##v1,P##v2,P##__VA_ARGS__)

#define ORDER_PP_FST(_0,...) _0
#define ORDER_PP_CM_8FST(P,x,...) (,ORDER_PP_FST x##P,P##__VA_ARGS__)

#define ORDER_PP_RST(_0,...) __VA_ARGS__
#define ORDER_PP_CM_8RST(P,x,...) (,ORDER_PP_RST x##P,P##__VA_ARGS__)

#define ORDER_PP_CM_8REMAP_10(P,_0,_1,K,...) ORDER_PP_CM_##K(,P##_1,P##_0,P##__VA_ARGS__)
#define ORDER_PP_CM_8REMAP_102(P,_0,_1,_2,K,...) ORDER_PP_CM_##K(,P##_1,P##_0,P##_2,P##__VA_ARGS__)

#define ORDER_PP_NUM_ARGS_8(_,_8,_7,_6,_5,_4,_3,_2,_1,x,...) x

#define ORDER_PP_IF_8true(P,c,...) P##c
#define ORDER_PP_IF_8false(P,c,...) P##__VA_ARGS__

#define ORDER_PP_IF_NOT_8true(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_NOT_8false(P,c,...) P##c

#define ORDER_PP_IF_OPEN_8true(P,c,...) ORDER_PP_OPEN_COND c##P
#define ORDER_PP_IF_OPEN_8false(P,c,...) P##__VA_ARGS__

#define ORDER_PP_IF_NOT_OPEN_8true(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_NOT_OPEN_8false(P,c,...) ORDER_PP_OPEN_COND c##P

#define ORDER_PP_WHEN_8true(P,...) P##__VA_ARGS__
#define ORDER_PP_WHEN_8false(...)

#define ORDER_PP_UNLESS_8true(...)
#define ORDER_PP_UNLESS_8false(P,...) P##__VA_ARGS__

#define ORDER_PP_EQUAL(P,x,y) ORDER_PP_TEST(ORDER_PP_SYM_##x##_##y(,),ORDER_PP_IF_OPEN_8true,,ORDER_PP_IF_OPEN_8false,)
#define ORDER_PP_NOT_EQ(P,x,y) ORDER_PP_TEST(ORDER_PP_SYM_##x##_##y(,),ORDER_PP_IF_OPEN_8false,,ORDER_PP_IF_OPEN_8true,)

#define ORDER_PP_IS_EDIBLE(P,x) ORDER_PP_TEST(ORDER_PP_IS_EDIBLE_TEST x##P,ORDER_PP_IF_OPEN_8true,,ORDER_PP_IF_OPEN_8false,)
#define ORDER_PP_IS_NOT_EDIBLE(P,x) ORDER_PP_TEST(ORDER_PP_IS_EDIBLE_TEST x##P,ORDER_PP_IF_OPEN_8false,,ORDER_PP_IF_OPEN_8true,)
#define ORDER_PP_IS_EDIBLE_TEST(...) ,,

#define ORDER_PP_IS_SYM(P,x) ORDER_PP_IS_EDIBLE(,P##x)(,(,ORDER_PP_IF_OPEN_8false ORDER_EAT),ORDER_PP_IS_SYM_NOT_EDIBLE)(P##x)
#define ORDER_PP_IS_SYM_NOT_EDIBLE(x) ORDER_PP_TEST(ORDER_PP_SYM_##x##_##x(,),ORDER_PP_IF_OPEN_8true,,ORDER_PP_IF_OPEN_8false,)

#define ORDER_PP_IS_NIL(P,x) ORDER_PP_IS_EDIBLE(,P##x)(,(,ORDER_PP_IF_OPEN_8false ORDER_PP_EAT),ORDER_PP_IS_NIL_NOT_EDIBLE)(P##x)
#define ORDER_PP_IS_NIL_NOT_EDIBLE(x) ORDER_PP_TEST(ORDER_PP_IS_NIL_##x,ORDER_PP_IF_OPEN_8true,,ORDER_PP_IF_OPEN_8false,)
#define ORDER_PP_IS_NIL_ ,,

#define ORDER_PP_TEST(...) ORDER_PP_TEST_B(__VA_ARGS__)
#define ORDER_PP_TEST_B(_1,_2,_3,x,...) x

#endif
