#ifndef ORDER_UTIL_H_VAJK20040620
#define ORDER_UTIL_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF(t) ORDER_DEF_##t

#define ORDER_DEF_ARGS_LAST_AT_1(_0,_1) ORDER_DEF_##_1
#define ORDER_DEF_ARGS_LAST_AT_2(_0,_1,_2) ORDER_DEF_##_2
#define ORDER_DEF_ARGS_LAST_AT_3(_0,_1,_2,_3) ORDER_DEF_##_3
#define ORDER_DEF_ARGS_LAST_AT_4(_0,_1,_2,_3,_4) ORDER_DEF_##_4
#define ORDER_DEF_ARGS_LAST_AT_5(_0,_1,_2,_3,_4,_5) ORDER_DEF_##_5
#define ORDER_DEF_ARGS_LAST_AT_6(_0,_1,_2,_3,_4,_5,_6) ORDER_DEF_##_6
#define ORDER_DEF_ARGS_LAST_AT_7(_0,_1,_2,_3,_4,_5,_6,_7) ORDER_DEF_##_7

#define ORDER_PP_ARGS_FIRST_1(_0,...) _0
#define ORDER_PP_ARGS_FIRST_2(_0,_1,...) _0,_1
#define ORDER_PP_ARGS_FIRST_3(_0,_1,_2,...) _0,_1,_2
#define ORDER_PP_ARGS_FIRST_4(_0,_1,_2,_3,...) _0,_1,_2,_3
#define ORDER_PP_ARGS_FIRST_5(_0,_1,_2,_3,_4,...) _0,_1,_2,_3,_4
#define ORDER_PP_ARGS_FIRST_6(_0,_1,_2,_3,_4,_5,...) _0,_1,_2,_3,_4,_5
#define ORDER_PP_ARGS_FIRST_7(_0,_1,_2,_3,_4,_5,_6,...) _0,_1,_2,_3,_4,_5,_6

#define ORDER_PP_EAT(...)
#define ORDER_PP_EXPAND(l,r) l r
#define ORDER_PP_PASTE(l,r) ORDER_PP_PRIMITIVE_PASTE(l,r)
#define ORDER_PP_PRIMITIVE_PASTE(l,r) l##r
#define ORDER_PP_OPEN(P,...) P##__VA_ARGS__
#define ORDER_PP_OPEN_COND(P,...) P##__VA_ARGS__
#define ORDER_PP_OPEN_NP(...) __VA_ARGS__

#define ORDER_PP_FST(_0,...) _0
#define ORDER_CM_8FST(P,x,...) (,ORDER_PP_FST P##x,P##__VA_ARGS__)

#define ORDER_PP_RST(_0,...) __VA_ARGS__
#define ORDER_CM_8RST(P,x,...) (,ORDER_PP_RST P##x,P##__VA_ARGS__)

#define ORDER_PP_NUM_ARGS_8(_,_8,_7,_6,_5,_4,_3,_2,_1,x,...) x

#define ORDER_PP_IF_true(P,c,a) P##c
#define ORDER_PP_IF_false(P,c,a) P##a

#define ORDER_PP_IF_OPEN_true(P,c,a) ORDER_PP_OPEN_COND P##c
#define ORDER_PP_IF_OPEN_false(P,c,a) ORDER_PP_OPEN_COND P##a

#define ORDER_PP_WHEN_true(P,...) P##__VA_ARGS__
#define ORDER_PP_WHEN_false(...)

#define ORDER_PP_UNLESS_true(...)
#define ORDER_PP_UNLESS_false(P,...) P##__VA_ARGS__

#define ORDER_PP_IS_NULLARY(P,x) ORDER_PP_TEST(ORDER_PP_IS_NULLARY_TEST P##x,ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)
#define ORDER_PP_IS_NULLARY_TEST() ,,

#define ORDER_PP_IS_PAIR(P,x) ORDER_PP_TEST(ORDER_PP_IS_PAIR_TEST P##x,ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)
#define ORDER_PP_IS_PAIR_TEST(a,d) ,,

#define ORDER_PP_IS_TUPLE(P,x) ORDER_PP_TEST(ORDER_PP_IS_TUPLE_TEST P##x,ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)
#define ORDER_PP_IS_TUPLE_TEST(...) ,,

#define ORDER_PP_TEST(...) ORDER_PP_TEST_I(__VA_ARGS__)
#define ORDER_PP_TEST_I(_1,_2,_3,x,...) x

#define ORDER_PP_IS_NIL(P,x) ORDER_PP_IS_TUPLE(,P##x)(,(,ORDER_PP_IF_OPEN_false ORDER_EAT),(,ORDER_PP_IS_NIL_NOT_PAIR))(P##x)
#define ORDER_PP_IS_NIL_NOT_PAIR(x) ORDER_PP_TEST(ORDER_PP_IS_NIL_##x,ORDER_PP_IF_OPEN_true,,ORDER_PP_IF_OPEN_false,)
#define ORDER_PP_IS_NIL_ ,,

#endif
