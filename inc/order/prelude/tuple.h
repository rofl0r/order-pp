#ifndef ORDER_PRELUDE_TUPLE_H_VAJK20040620
#define ORDER_PRELUDE_TUPLE_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8tuple ORDER_PP_CTOR_N(8TUPLE)
#define ORDER_PP_8TUPLE_1(P,_0,...) (,(P##_0),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_2(P,_0,_1,...) (,(P##_0,P##_1),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_3(P,_0,_1,_2,...) (,(P##_0,P##_1,P##_2),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_4(P,_0,_1,_2,_3,...) (,(P##_0,P##_1,P##_2,P##_3),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_5(P,_0,_1,_2,_3,_4,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_6(P,_0,_1,_2,_3,_4,_5,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_7(P,_0,_1,_2,_3,_4,_5,_6,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_8(P,_0,_1,_2,_3,_4,_5,_6,_7,...) (,(P##_0,P##_1,P##_2,P##_3,P##_4,P##_5,P##_6,P##_7),P##__VA_ARGS__)

#define ORDER_PP_DEF_8is_tuple ORDER_PP_FN_CM(1,8IS_TUPLE)
#define ORDER_PP_8IS_TUPLE(P,t,...) (,ORDER_PP_IS_EDIBLE(,P##t)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8tuple_at ORDER_PP_FN_CM(2,8TUPLE_AT)
#define ORDER_PP_8TUPLE_AT(P,n,t,...) (,ORDER_PP_EXPAND(ORDER_PP_PTUPLE_AT_##n,(,ORDER_PP_OPEN_NP t##P,)),P##__VA_ARGS__)
#define ORDER_PP_PTUPLE_AT_0(P,_0,...) P##_0
#define ORDER_PP_PTUPLE_AT_1(P,_0,_1,...) P##_1
#define ORDER_PP_PTUPLE_AT_2(P,_0,_1,_2,...) P##_2
#define ORDER_PP_PTUPLE_AT_3(P,_0,_1,_2,_3,...) P##_3
#define ORDER_PP_PTUPLE_AT_4(P,_0,_1,_2,_3,_4,...) P##_4
#define ORDER_PP_PTUPLE_AT_5(P,_0,_1,_2,_3,_4,_5,...) P##_5
#define ORDER_PP_PTUPLE_AT_6(P,_0,_1,_2,_3,_4,_5,_6,...) P##_6
#define ORDER_PP_PTUPLE_AT_7(P,_0,_1,_2,_3,_4,_5,_6,_7,...) P##_7
#define ORDER_PP_PTUPLE_AT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,...) P##_8
#define ORDER_PP_PTUPLE_AT_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) P##_9

#define ORDER_PP_DEF_8tuple_size ORDER_PP_FN_CM(1,8TUPLE_SIZE)
#define ORDER_PP_8TUPLE_SIZE(P,...) (,ORDER_PP_TUPLE_SIZE P##__VA_ARGS__)
#define ORDER_PP_TUPLE_SIZE(...) ORDER_PP_TUPLE_SIZE_B(,__VA_ARGS__,10,9,8,7,6,5,4,3,2,1,)
#define ORDER_PP_TUPLE_SIZE_B(P,_,_9,_8,_7,_6,_5,_4,_3,_2,_1,x,...) x##P
#define ORDER_PP_PTUPLE_SIZE(P,...) ORDER_PP_TUPLE_SIZE_B(,P##__VA_ARGS__,10,9,8,7,6,5,4,3,2,1,)

#define ORDER_PP_TUPLE_REST_N_10(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) __VA_ARGS__
#define ORDER_PP_PTUPLE_REST_N_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) P##__VA_ARGS__

#define ORDER_PP_DEF_8tuple_to_seq ORDER_PP_FN_CM(1,8TUPLE_TO_SEQ)
#define ORDER_PP_8TUPLE_TO_SEQ(P,t,...) (,ORDER_PP_TUPLE_ISNT_LONGER_THAN_10 t##P(,ORDER_PP_CAT(ORDER_PP_PTUPLE_TO_SEQ_,ORDER_PP_TUPLE_SIZE t##P(,ORDER_PP_OPEN_NP t##P)),(,ORDER_PP_TUPLE_REST_N_10 t##P),8PTUPLE_TO_SEQ_2,ORDER_PP_PTUPLE_TO_SEQ_FIRST_10 ORDER_PP_BLOCK(,ORDER_PP_OPEN_NP t##P)),P##__VA_ARGS__)
#define ORDER_PP_8PTUPLE_TO_SEQ_2(P,t,s,...) (,ORDER_PP_PTUPLE_ISNT_LONGER_THAN_10 t##P(,ORDER_PP_OPEN(,s##P)ORDER_PP_CAT(ORDER_PP_PTUPLE_TO_SEQ_,ORDER_PP_PTUPLE_SIZE t##P)t##P,(,ORDER_PP_PTUPLE_REST_N_10 t##P),8PTUPLE_TO_SEQ_2,ORDER_PP_OPEN(,s##P)ORDER_PP_PTUPLE_TO_SEQ_FIRST_10 t##P),P##__VA_ARGS__)
#define ORDER_PP_PTUPLE_TO_SEQ_1(P,_0) (P##_0)
#define ORDER_PP_PTUPLE_TO_SEQ_2(P,_0,_1) (P##_0)(P##_1)
#define ORDER_PP_PTUPLE_TO_SEQ_3(P,_0,_1,_2) (P##_0)(P##_1)(P##_2)
#define ORDER_PP_PTUPLE_TO_SEQ_4(P,_0,_1,_2,_3) (P##_0)(P##_1)(P##_2)(P##_3)
#define ORDER_PP_PTUPLE_TO_SEQ_5(P,_0,_1,_2,_3,_4) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)
#define ORDER_PP_PTUPLE_TO_SEQ_6(P,_0,_1,_2,_3,_4,_5) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)
#define ORDER_PP_PTUPLE_TO_SEQ_7(P,_0,_1,_2,_3,_4,_5,_6) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)
#define ORDER_PP_PTUPLE_TO_SEQ_8(P,_0,_1,_2,_3,_4,_5,_6,_7) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)
#define ORDER_PP_PTUPLE_TO_SEQ_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)(P##_8)
#define ORDER_PP_PTUPLE_TO_SEQ_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)(P##_8)(P##_9)
#define ORDER_PP_PTUPLE_TO_SEQ_FIRST_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)(P##_8)(P##_9)

// Details

#define ORDER_PP_TUPLE_ISNT_LONGER_THAN_10(...) ORDER_PP_TUPLE_ISNT_LONGER_THAN_10_B(__VA_ARGS__,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,)
#define ORDER_PP_PTUPLE_ISNT_LONGER_THAN_10(P,...) ORDER_PP_TUPLE_ISNT_LONGER_THAN_10_B(P##__VA_ARGS__,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,ORDER_PP_BIN,)
#define ORDER_PP_TUPLE_ISNT_LONGER_THAN_10_B(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,x,...) ORDER_PP_PTUPLE_AT_1(ORDER_PP_IF_,x,8false,)
#define ORDER_PP_BIN ,8true

#endif
