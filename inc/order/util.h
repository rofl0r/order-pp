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

#define ORDER_PP_FST(_0,...) _0
#define ORDER_PP_CM_8FST(P,x,...) (,ORDER_PP_FST P##x,P##__VA_ARGS__)

#define ORDER_PP_RST(_0,...) __VA_ARGS__
#define ORDER_PP_CM_8RST(P,x,...) (,ORDER_PP_RST P##x,P##__VA_ARGS__)

#define ORDER_PP_NUM_ARGS_8(_,_8,_7,_6,_5,_4,_3,_2,_1,x,...) x

#define ORDER_PP_IF_true(P,c,...) P##c
#define ORDER_PP_IF_false(P,c,...) P##__VA_ARGS__

#define ORDER_PP_IF_NOT_true(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_NOT_false(P,c,...) P##c

#define ORDER_PP_IF_OPEN_true(P,c,...) ORDER_PP_OPEN_COND P##c
#define ORDER_PP_IF_OPEN_false(P,c,...) P##__VA_ARGS__

#define ORDER_PP_IF_NOT_OPEN_true(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_NOT_OPEN_false(P,c,...) ORDER_PP_OPEN_COND P##c

#define ORDER_PP_WHEN_true(P,...) P##__VA_ARGS__
#define ORDER_PP_WHEN_false(...)

#define ORDER_PP_UNLESS_true(...)
#define ORDER_PP_UNLESS_false(P,...) P##__VA_ARGS__

#define ORDER_PP_IS_EDIBLE(P,x) ORDER_PP_TEST(ORDER_PP_IS_EDIBLE_TEST P##x,ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)
#define ORDER_PP_IS_NOT_EDIBLE(P,x) ORDER_PP_TEST(ORDER_PP_IS_EDIBLE_TEST P##x,ORDER_PP_IF_OPEN_false,,ORDER_PP_IF_OPEN_true,)
#define ORDER_PP_IS_EDIBLE_TEST(...) ,,

#define ORDER_PP_IS_SYM(P,x) ORDER_PP_IS_EDIBLE(,P##x)(,(,ORDER_PP_IF_OPEN_false ORDER_EAT),ORDER_PP_IS_SYM_NOT_EDIBLE)(P##x)
#define ORDER_PP_IS_SYM_NOT_EDIBLE(x) ORDER_PP_TEST(ORDER_PP_SYM_##x##_##x(,),ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)

#define ORDER_PP_IS_NIL(P,x) ORDER_PP_IS_EDIBLE(,P##x)(,(,ORDER_PP_IF_OPEN_false ORDER_PP_EAT),ORDER_PP_IS_NIL_NOT_EDIBLE)(P##x)
#define ORDER_PP_IS_NIL_NOT_EDIBLE(x) ORDER_PP_TEST(ORDER_PP_IS_NIL_##x,ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)
#define ORDER_PP_IS_NIL_ ,,

#define ORDER_PP_TEST(...) ORDER_PP_TEST_B(__VA_ARGS__)
#define ORDER_PP_TEST_B(_1,_2,_3,x,...) x

#endif
