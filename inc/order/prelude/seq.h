// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8vseq_to_seq_of_tuples ORDER_PP_FN_NATIVE(1,9VSEQ_TO_SEQ_OF_TUPLES,0IS_VSEQ)
#define ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_A P##s)
#define ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_A(...) ((__VA_ARGS__))ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_B
#define ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_A0
#define ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_B(...) ((__VA_ARGS__))ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_A
#define ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES_B0

#define ORDER_PP_DEF_8seq_append ORDER_PP_OP_LEFT_NATIVE(9SEQ_JOIN,0IS_SEQ)

#define ORDER_PP_DEF_8seq_at ORDER_PP_FN_NATIVE(2,9SEQ_AT,0IS_NUM,0IS_SEQ_CONS)
#define ORDER_PP_9SEQ_AT(P,i,s) ORDER_PP_FY(SEQ_AT,(,0,ORDER_PP_9SEQ_DROP(,P##i,P##s)))

#define ORDER_PP_DEF_8seq_cat ORDER_PP_FN_CM(1,8SEQ_CAT,0IS_SEQ)
#define ORDER_PP_8SEQ_CAT(P,s,...) (,ORDER_PP_PM(,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_MAKE_EVEN_A s##P),8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_A,),P##__VA_ARGS__)

#define ORDER_PP_SEQ_CAT_A(x) (ORDER_PP_PRIMITIVE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_B
#define ORDER_PP_SEQ_CAT_A0 ,8STOP,
#define ORDER_PP_SEQ_CAT_B(x) x))ORDER_PP_SEQ_CAT_C
#define ORDER_PP_SEQ_CAT_C(x) (ORDER_PP_PRIMITIVE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_D
#define ORDER_PP_SEQ_CAT_C0 ,8STOP_REM,
#define ORDER_PP_SEQ_CAT_D(x) x))ORDER_PP_SEQ_CAT_E
#define ORDER_PP_SEQ_CAT_E(x) (ORDER_PP_PRIMITIVE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_F
#define ORDER_PP_SEQ_CAT_E0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_A,
#define ORDER_PP_SEQ_CAT_F(x) x))ORDER_PP_SEQ_CAT_G
#define ORDER_PP_SEQ_CAT_G(x) (ORDER_PP_PRIMITIVE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_D
#define ORDER_PP_SEQ_CAT_G0 (),8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_A,

#define ORDER_PP_DEF_8seq_cat_reverse ORDER_PP_FN_CM(1,8SEQ_CAT_REVERSE,0IS_SEQ)
#define ORDER_PP_8SEQ_CAT_REVERSE(P,s,...) (,ORDER_PP_PM(,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_MAKE_EVEN_A s##P),8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A,),P##__VA_ARGS__)

#define ORDER_PP_SEQ_CAT_REVERSE_A(x) (ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_REVERSE_B
#define ORDER_PP_SEQ_CAT_REVERSE_A0 ,8STOP,
#define ORDER_PP_SEQ_CAT_REVERSE_B(x) x))ORDER_PP_SEQ_CAT_REVERSE_C
#define ORDER_PP_SEQ_CAT_REVERSE_C(x) (ORDER_PP_PRIMITIVE_REVERSE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_REVERSE_D
#define ORDER_PP_SEQ_CAT_REVERSE_C0 ,8STOP_REM,
#define ORDER_PP_SEQ_CAT_REVERSE_D(x) x))ORDER_PP_SEQ_CAT_REVERSE_E
#define ORDER_PP_SEQ_CAT_REVERSE_E(x) (ORDER_PP_PRIMITIVE_REVERSE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_REVERSE_F
#define ORDER_PP_SEQ_CAT_REVERSE_E0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A,
#define ORDER_PP_SEQ_CAT_REVERSE_F(x) x))ORDER_PP_SEQ_CAT_REVERSE_G
#define ORDER_PP_SEQ_CAT_REVERSE_G(x) (ORDER_PP_PRIMITIVE_REVERSE_CAT ORDER_PP_BLOCK(x,ORDER_PP_SEQ_CAT_REVERSE_D
#define ORDER_PP_SEQ_CAT_REVERSE_G0 (),8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A,

#define ORDER_PP_DEF_8seq_drop ORDER_PP_FN_NATIVE(2,9SEQ_DROP,0IS_NUM,0IS_SEQ)
#define ORDER_PP_9SEQ_DROP(P,n,s) ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_SEQ_SPLIT_AT(,P##n,P##s),))

#define ORDER_PP_DEF_8seq_first ORDER_PP_FN_CM(1,8SEQ_FIRST,0IS_SEQ_CONS)
#define ORDER_PP_8SEQ_FIRST(P,s,...) (,ORDER_PP_SEQ_AT(,0,P##s),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_iota ORDER_PP_FN_NATIVE(2,9SEQ_IOTA,0IS_NUM,0IS_NUM)
#define ORDER_PP_9SEQ_IOTA(P,i0,i1) ORDER_PP_FX(PM,ORDER_PP_8FOR_EACH_IN_RANGE(,P##i0,P##i1,(,8PUT_PARENTHESIZED),8STOP,))
#define ORDER_PP_8PUT_PARENTHESIZED(P,x,K,...) ORDER_PP_##K(,,P##__VA_ARGS__)(P##x)

#define ORDER_PP_DEF_8seq_is_nil ORDER_PP_FN_CM(1,8SEQ_IS_NIL,0IS_SEQ)
#define ORDER_PP_8SEQ_IS_NIL(P,s,...) (,ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST P##s,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_isnt_nil ORDER_PP_FN_CM(1,8SEQ_ISNT_NIL,0IS_SEQ)
#define ORDER_PP_8SEQ_ISNT_NIL(P,s,...) (,ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST P##s,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_join ORDER_PP_FN_NATIVE(2,9SEQ_JOIN,0IS_SEQ,0IS_SEQ)
#define ORDER_PP_9SEQ_JOIN(P,l,r) ORDER_PP_LEFT(,l##P)P##r

#define ORDER_PP_DEF_8seq_last ORDER_PP_FN_CM(1,8SEQ_LAST,0IS_SEQ_CONS)
#define ORDER_PP_8SEQ_LAST(P,s,...) (,ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_FX(SEQ_SPLIT_LAST_SWAP_A,ORDER_PP_FX(SEQ_SPLIT_LAST_SHIFT,ORDER_PP_SEQ_TO_PSEQ(,P##s))(0,)),)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_map_seq ORDER_PP_FN_NATIVE(1,9VSEQ_TO_SEQ_OF_TUPLES,0IS_SEQ)

#define ORDER_PP_DEF_8seq_pair ORDER_PP_FN_NATIVE(2,9SEQ_PAIR,0IS_SEQ,0IS_SEQ)
#define ORDER_PP_9SEQ_PAIR(P,ls,rs) ORDER_PP_PM(,,8SEQ_PAIR_LOOP,ORDER_PP_FX(SEQ_PAIR_A,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_TO_PSEQ_A P##ls))(0,),ORDER_PP_FX(SEQ_PAIR_A,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_TO_PSEQ_A P##rs))(0,),8SEQ_SWAP,8SEQ_PAIR_STOP,)

#define ORDER_PP_8SEQ_PAIR_LOOP(P,_,ls,lb,rs,rb,...) (,ORDER_PP_SEQ_PAIR_COND_##lb##rb(,P##ls,P##rs),P##__VA_ARGS__)
#define ORDER_PP_SEQ_PAIR_COND_00(P,ls,rs) P##ls P##rs(0,)
#define ORDER_PP_SEQ_PAIR_COND_11(P,ls,rs) ,8SEQ_PAIR_LOOP,ORDER_PP_SEQ_PAIR_A P##ls(0,),ORDER_PP_SEQ_PAIR_A P##rs(0,),8SEQ_SWAP

#define ORDER_PP_SEQ_PAIR_A(P,...) ORDER_PP_SEQ_PAIR_G##P(,__VA_ARGS__##P)ORDER_PP_SEQ_PAIR_B##P
#define ORDER_PP_SEQ_PAIR_B0 ,0
#define ORDER_PP_SEQ_PAIR_B(P,...) ,ORDER_PP_EAT_UNLESS_##P(,__VA_ARGS__##P))ORDER_PP_SEQ_PAIR_C##P
#define ORDER_PP_SEQ_PAIR_C0 ,0
#define ORDER_PP_SEQ_PAIR_C(P,...) ORDER_PP_SEQ_PAIR_G##P(,__VA_ARGS__##P)ORDER_PP_SEQ_PAIR_D##P
#define ORDER_PP_SEQ_PAIR_D0 ,0
#define ORDER_PP_SEQ_PAIR_D(P,...) ,ORDER_PP_EAT_UNLESS_##P(,__VA_ARGS__##P))ORDER_PP_SEQ_PAIR_E##P
#define ORDER_PP_SEQ_PAIR_E0 ,1
#define ORDER_PP_SEQ_PAIR_E(P,...) ORDER_PP_SEQ_PAIR_G##P(,__VA_ARGS__##P)ORDER_PP_SEQ_PAIR_F##P
#define ORDER_PP_SEQ_PAIR_F0 ,1
#define ORDER_PP_SEQ_PAIR_F(P,...) ,ORDER_PP_EAT_UNLESS_##P(,__VA_ARGS__##P))ORDER_PP_SEQ_PAIR_E##P

#define ORDER_PP_SEQ_PAIR_G (,
#define ORDER_PP_SEQ_PAIR_G0(...)

#define ORDER_PP_8SEQ_SWAP(P,s,...) (,ORDER_PP_SEQ_SWAP_A s,P##__VA_ARGS__)

#define ORDER_PP_SEQ_SWAP(P,x0,y0,x1,y1) P##x0 P##x1 P##y0 P##y1
#define ORDER_PP_SEQ_SWAP0(...) (0,)

#define ORDER_PP_SEQ_SWAP_A(P,...) ORDER_PP_SEQ_SWAP##P ORDER_PP_BLOCK(,P##__VA_ARGS__,ORDER_PP_SEQ_SWAP_B##P
#define ORDER_PP_SEQ_SWAP_B(P,...) P##__VA_ARGS__)ORDER_PP_SEQ_SWAP_A
#define ORDER_PP_SEQ_SWAP_B0 )

#define ORDER_PP_8SEQ_PAIR_STOP(P,s,...) )ORDER_PP_SEQ_MAKE_PAIRS_A s)

#define ORDER_PP_SEQ_MAKE_PAIRS_A(P,...) ORDER_PP_SEQ_MAKE_PAIRS_F##P(P##__VA_ARGS__,ORDER_PP_SEQ_MAKE_PAIRS_B##P
#define ORDER_PP_SEQ_MAKE_PAIRS_B(P,...) P##__VA_ARGS__)ORDER_PP_SEQ_MAKE_PAIRS_A
#define ORDER_PP_SEQ_MAKE_PAIRS_F
#define ORDER_PP_SEQ_MAKE_PAIRS_F0(...)

#define ORDER_PP_DEF_8seq_pop_at ORDER_PP_FN_NATIVE(2,9SEQ_POP_AT,0IS_NUM,0IS_SEQ_CONS)
#define ORDER_PP_9SEQ_POP_AT(P,i,s) ORDER_PP_FX(SEQ_POP_AT_B,(,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s)))
#define ORDER_PP_SEQ_POP_AT_B(P,l,r) l##P r##P

#define ORDER_PP_DEF_8seq_pop_back ORDER_PP_FN_CM(1,8SEQ_POP_BACK,0IS_SEQ_CONS)
#define ORDER_PP_8SEQ_POP_BACK(P,s,...) (,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(SEQ_SPLIT_LAST_SWAP_A,ORDER_PP_FX(SEQ_SPLIT_LAST_SHIFT,ORDER_PP_SEQ_TO_PSEQ(,P##s))(0,)))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_pop_front ORDER_PP_FN_CM(1,8SEQ_REST,0IS_SEQ_CONS)

#define ORDER_PP_DEF_8seq_pop_range ORDER_PP_FN_NATIVE(3,9SEQ_POP_RANGE,0IS_NUM,0IS_NUM,0IS_SEQ)
#define ORDER_PP_9SEQ_POP_RANGE(P,i,n,s) ORDER_PP_FX(9SEQ_POP_RANGE_B,(,P##n,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s)))
#define ORDER_PP_9SEQ_POP_RANGE_B(P,n,l,r) P##l()ORDER_PP_FY(TUPLE_AT_1,(,ORDER_PP_SEQ_SPLIT_AT(,P##n,P##r),))

#define ORDER_PP_DEF_8seq_push_at ORDER_PP_FN_NATIVE(3,9SEQ_PUSH_AT,0IS_NUM,0IS_SEQ,0IS_ANY)
#define ORDER_PP_9SEQ_PUSH_AT(P,i,s,x) ORDER_PP_FX(SEQ_PUSH_AT_B,(,P##x,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s),))
#define ORDER_PP_SEQ_PUSH_AT_B(P,x,l,r,...) l##P()(P##x)P##r

#define ORDER_PP_DEF_8seq_push_back ORDER_PP_FN_NATIVE(2,9SEQ_PUSH_BACK,0IS_ANY,0IS_SEQ)
#define ORDER_PP_9SEQ_PUSH_BACK(P,x,s) P##s(P##x)

#define ORDER_PP_DEF_8seq_push_front ORDER_PP_FN_NATIVE(2,9SEQ_PUSH_FRONT,0IS_ANY,0IS_SEQ)
#define ORDER_PP_9SEQ_PUSH_FRONT(P,x,s) (P##x)P##s

#define ORDER_PP_DEF_8seq_push_range ORDER_PP_FN_NATIVE(3,9SEQ_PUSH_RANGE,0IS_NUM,0IS_SEQ,0IS_SEQ)
#define ORDER_PP_9SEQ_PUSH_RANGE(P,i,s,ss) ORDER_PP_FX(9SEQ_PUSH_RANGE_B,(,P##ss,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s)))
#define ORDER_PP_9SEQ_PUSH_RANGE_B(P,ss,l,r) P##l()ORDER_PP_LEFT(,ss##P)P##r

#define ORDER_PP_DEF_8seq_range ORDER_PP_FN_NATIVE(3,9SEQ_RANGE,0IS_NUM,0IS_NUM,0IS_SEQ)
#define ORDER_PP_9SEQ_RANGE(P,i,n,s) ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(SEQ_SPLIT_AT,(,P##n,ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s),)))),))()

// TBD: Optimize 8seq_repeat
#define ORDER_PP_DEF_8seq_repeat                                \
ORDER_PP_FN(8fn(8N, 8S,                                         \
                8cond((8is_0(8N),                               \
                       8seq)                                    \
                      (8equal(8N, 1),                           \
                       8S)                                      \
                      (8else,                                   \
                       8seq_append                              \
                       (8unless(8is_0(8remainder(8N, 2)),       \
                                8S),                            \
                        8seq_repeat(8div(8N, 2),                \
                                    8seq_append(8S, 8S)))))))

#define ORDER_PP_DEF_8seq_rest ORDER_PP_FN_CM(1,8SEQ_REST,0IS_SEQ_CONS)
#define ORDER_PP_8SEQ_REST(P,s,...) (,ORDER_PP_EAT P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_reverse ORDER_PP_FN_NATIVE(1,9SEQ_REVERSE,0IS_SEQ)
#define ORDER_PP_9SEQ_REVERSE(P,s) ORDER_PP_FX(PSEQ_TO_SEQ,(,ORDER_PP_FX(PSEQ_REVERSE,(,ORDER_PP_SEQ_TO_PSEQ(,P##s)))))
#define ORDER_PP_PSEQ_REVERSE(P,s) ORDER_PP_PM(,ORDER_PP_SEQ_REV_PAIR_A P##s(0,),8SEQ_REV_STOP,)

#define ORDER_PP_SEQ_REV_PAIR_A(P,x) ORDER_PP_SEQ_REV_PAIR_B##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_B(P,x) (,(,P##x,ORDER_PP_SEQ_REV_PAIR_C
#define ORDER_PP_SEQ_REV_PAIR_B0(...)
#define ORDER_PP_SEQ_REV_PAIR_C(P,x) ORDER_PP_SEQ_REV_PAIR_D##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_D(P,x) P##x,))ORDER_PP_SEQ_REV_PAIR_E
#define ORDER_PP_SEQ_REV_PAIR_D0(...) ,0))
#define ORDER_PP_SEQ_REV_PAIR_E(P,x) ORDER_PP_SEQ_REV_PAIR_F##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_F(P,x) (,(,P##x,ORDER_PP_SEQ_REV_PAIR_G
#define ORDER_PP_SEQ_REV_PAIR_F0(...)
#define ORDER_PP_SEQ_REV_PAIR_G(P,x) ORDER_PP_SEQ_REV_PAIR_H##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_H(P,x) P##x,))ORDER_PP_SEQ_REV_PAIR_I
#define ORDER_PP_SEQ_REV_PAIR_H0(...) ,0))(0,),8SEQ_APPLY,ORDER_PP_SEQ_REV_PAIR_A,8SEQ_TERMINATE,ORDER_PP_SEQ_REV_SWAP_A,
#define ORDER_PP_SEQ_REV_PAIR_I(P,x) ORDER_PP_SEQ_REV_PAIR_J##P(,x##P)
#define ORDER_PP_SEQ_REV_PAIR_J(P,x) (,(,P##x,ORDER_PP_SEQ_REV_PAIR_G
#define ORDER_PP_SEQ_REV_PAIR_J0(...) (0,),8SEQ_APPLY,ORDER_PP_SEQ_REV_PAIR_A,8SEQ_TERMINATE,ORDER_PP_SEQ_REV_SWAP_A,

#define ORDER_PP_SEQ_REV_SWAP_A(P,PxyS) ORDER_PP_SEQ_REV_SWAP_B PxyS##P
#define ORDER_PP_SEQ_REV_SWAP_A0
#define ORDER_PP_SEQ_REV_SWAP_B(P,x,y,S) ORDER_PP_SEQ_REV_SWAP_F##S(,P##y)(,P##x)ORDER_PP_SEQ_REV_SWAP_C
#define ORDER_PP_SEQ_REV_SWAP_C(P,PxyS) ORDER_PP_SEQ_REV_SWAP_D PxyS##P
#define ORDER_PP_SEQ_REV_SWAP_C0
#define ORDER_PP_SEQ_REV_SWAP_D(P,x,y,S) ORDER_PP_SEQ_REV_SWAP_F##S(,P##y)(,P##x)ORDER_PP_SEQ_REV_SWAP_A
#define ORDER_PP_SEQ_REV_SWAP_F
#define ORDER_PP_SEQ_REV_SWAP_F0(...)

#define ORDER_PP_8SEQ_REV_STOP(P,s,...) )ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_REV_SWAP_A P##s)

#define ORDER_PP_DEF_8seq_set ORDER_PP_FN_NATIVE(3,9SEQ_SET,0IS_NUM,0IS_SEQ,0IS_ANY)
#define ORDER_PP_9SEQ_SET(P,i,s,x) ORDER_PP_FX(SEQ_SET_B,(,P##x,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s),))
#define ORDER_PP_SEQ_SET_B(P,x,l,r,...) l##P()(P##x)ORDER_PP_EAT r##P

#define ORDER_PP_DEF_8seq_size ORDER_PP_FN_CM(1,8SEQ_SIZE,0IS_SEQ)
#define ORDER_PP_8SEQ_SIZE(P,s,...) (,ORDER_PP_FX(PSEQ_TO_SEQ,(,ORDER_PP_FX(PSEQ_REVERSE,(,ORDER_PP_PM(,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_SIZE_A_FIRST P##s),8STOP,))))),P##__VA_ARGS__)

#define ORDER_PP_SEQ_SIZE_A_FIRST(...) ORDER_PP_SEQ_SIZE_B
#define ORDER_PP_SEQ_SIZE_A_FIRST0 (,00)

#define ORDER_PP_SEQ_SIZE_A(...) ORDER_PP_SEQ_SIZE_B
#define ORDER_PP_SEQ_SIZE_A0
#define ORDER_PP_SEQ_SIZE_B(...) ORDER_PP_SEQ_SIZE_C
#define ORDER_PP_SEQ_SIZE_B0 (,01)
#define ORDER_PP_SEQ_SIZE_C(...) ORDER_PP_SEQ_SIZE_D
#define ORDER_PP_SEQ_SIZE_C0 (,02)
#define ORDER_PP_SEQ_SIZE_D(...) ORDER_PP_SEQ_SIZE_E
#define ORDER_PP_SEQ_SIZE_D0 (,03)
#define ORDER_PP_SEQ_SIZE_E(...) ORDER_PP_SEQ_SIZE_F
#define ORDER_PP_SEQ_SIZE_E0 (,04)
#define ORDER_PP_SEQ_SIZE_F(...) ORDER_PP_SEQ_SIZE_G
#define ORDER_PP_SEQ_SIZE_F0 (,05)
#define ORDER_PP_SEQ_SIZE_G(...) ORDER_PP_SEQ_SIZE_H
#define ORDER_PP_SEQ_SIZE_G0 (,06)
#define ORDER_PP_SEQ_SIZE_H(...) ORDER_PP_SEQ_SIZE_I
#define ORDER_PP_SEQ_SIZE_H0 (,07)
#define ORDER_PP_SEQ_SIZE_I(...) ORDER_PP_SEQ_SIZE_J
#define ORDER_PP_SEQ_SIZE_I0 (,08)
#define ORDER_PP_SEQ_SIZE_J(...) ()ORDER_PP_SEQ_SIZE_K
#define ORDER_PP_SEQ_SIZE_J0 (,09)

#define ORDER_PP_SEQ_SIZE_K(...) ORDER_PP_SEQ_SIZE_L
#define ORDER_PP_SEQ_SIZE_K0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,0)
#define ORDER_PP_SEQ_SIZE_L(...) ORDER_PP_SEQ_SIZE_M
#define ORDER_PP_SEQ_SIZE_L0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,1)
#define ORDER_PP_SEQ_SIZE_M(...) ORDER_PP_SEQ_SIZE_N
#define ORDER_PP_SEQ_SIZE_M0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,2)
#define ORDER_PP_SEQ_SIZE_N(...) ORDER_PP_SEQ_SIZE_O
#define ORDER_PP_SEQ_SIZE_N0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,3)
#define ORDER_PP_SEQ_SIZE_O(...) ORDER_PP_SEQ_SIZE_P
#define ORDER_PP_SEQ_SIZE_O0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,4)
#define ORDER_PP_SEQ_SIZE_P(...) ORDER_PP_SEQ_SIZE_Q
#define ORDER_PP_SEQ_SIZE_P0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,5)
#define ORDER_PP_SEQ_SIZE_Q(...) ORDER_PP_SEQ_SIZE_R
#define ORDER_PP_SEQ_SIZE_Q0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,6)
#define ORDER_PP_SEQ_SIZE_R(...) ORDER_PP_SEQ_SIZE_S
#define ORDER_PP_SEQ_SIZE_R0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,7)
#define ORDER_PP_SEQ_SIZE_S(...) ORDER_PP_SEQ_SIZE_T
#define ORDER_PP_SEQ_SIZE_S0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,8)
#define ORDER_PP_SEQ_SIZE_T(...) ()ORDER_PP_SEQ_SIZE_K
#define ORDER_PP_SEQ_SIZE_T0 ,8SEQ_TERMINATE,ORDER_PP_SEQ_SIZE_A,(,9)

#define ORDER_PP_DEF_8seq_split_at ORDER_PP_FN_NATIVE(2,9SEQ_SPLIT_AT,0IS_NUM,0IS_SEQ)
#define ORDER_PP_9SEQ_SPLIT_AT(P,i,s) (ORDER_PP_FX(9SEQ_SPLIT_AT_B,(,ORDER_PP_SEQ_SPLIT_AT(,P##i,P##s))))
#define ORDER_PP_9SEQ_SPLIT_AT_B(P,l,r) l##P(),r##P

#define ORDER_PP_DEF_8seq_take ORDER_PP_FN_NATIVE(2,9SEQ_TAKE,0IS_NUM,0IS_SEQ)
#define ORDER_PP_9SEQ_TAKE(P,n,s) ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_SEQ_SPLIT_AT(,P##n,P##s),))()

#define ORDER_PP_DEF_8seq_to_tuple ORDER_PP_FN_CM(1,8SEQ_TO_TUPLE,0IS_SEQ)
#define ORDER_PP_8SEQ_TO_TUPLE(P,s,...) (,ORDER_PP_FX(SEQ_TO_TUPLE_TERMINATE,(ORDER_PP_SEQ_TO_TUPLE_A P##s)),P##__VA_ARGS__)
#define ORDER_PP_SEQ_TO_TUPLE_TERMINATE(...) ORDER_PP_SEQ_TO_TUPLE_##__VA_ARGS__##0
#define ORDER_PP_SEQ_TO_TUPLE_ORDER_PP_SEQ_TO_TUPLE_A0
#define ORDER_PP_SEQ_TO_TUPLE_0(P,x) (P##x
#define ORDER_PP_SEQ_TO_TUPLE_A(x) 0(,x)ORDER_PP_SEQ_TO_TUPLE_B
#define ORDER_PP_SEQ_TO_TUPLE_B(x) ORDER_PP_RIGHT(,,x)ORDER_PP_SEQ_TO_TUPLE_C
#define ORDER_PP_SEQ_TO_TUPLE_B0 )
#define ORDER_PP_SEQ_TO_TUPLE_C(x) ORDER_PP_RIGHT(,,x)ORDER_PP_SEQ_TO_TUPLE_B
#define ORDER_PP_SEQ_TO_TUPLE_C0 )

// Higher-order functions

#define ORDER_PP_DEF_8seq_count ORDER_PP_FN_CM(2,8SEQ_COUNT,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_COUNT(P,s,f,...) (,P##s,8SEQ_FOLD,0,(,8SEQ_COUNT_F,P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_COUNT_F(P,n,f,...) (,(,ORDER_PP_OPEN f##P,8SEQ_COUNT_G,P##n),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_COUNT_G(P,b,n,...) (,ORDER_PP_IF_##b(ORDER_PP_,NUM_INC,OPEN)(,P##n),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_exists ORDER_PP_FN_CM(2,8SEQ_EXISTS,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_EXISTS(P,s,f,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,8false,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_EXISTS_4,P##f,ORDER_PP_SEQ_AT_1 P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_EXISTS_4(P,b,f,x,xs,...) (,ORDER_PP_SELECT_4(ORDER_PP_,IF_##b,SEQ_IS_NIL(,P##xs))(,8true,8true,ORDER_PP_LEFT(,P##x,ORDER_PP_OPEN f##P),P##x,ORDER_PP_OPEN f##P,8SEQ_EXISTS_4,P##f,ORDER_PP_SEQ_AT_0 P##xs),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_filter ORDER_PP_FN_CM(2,8SEQ_FILTER,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_FILTER(P,s,f,...) (,0,8SEQ_FILTER_O,,P##f,ORDER_PP_NIL,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FILTER_O(P,b0,x0,f,out,b,x,...) (,ORDER_PP_WHEN_##b(,P##x,ORDER_PP_OPEN f##P,8SEQ_FILTER_O,P##x,P##f,)P##out()ORDER_PP_WHEN_##b0(,(P##x0))ORDER_PP_WHEN_##b(,ORDER_PP_NIL),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_fold ORDER_PP_FN_CM(3,8SEQ_FOLD,0IS_FN,0IS_ANY,0IS_SEQ)
#define ORDER_PP_8SEQ_FOLD(P,s,x,f,...) (,P##x,8SEQ_FOLD_O,P##f,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOLD_O(P,y,f,b,x,...) (,P##y,ORDER_PP_WHEN_##b(,ORDER_PP_OPEN f##P,8AP,P##x,8SEQ_FOLD_O,P##f,)P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_all ORDER_PP_FN_CM(2,8SEQ_FOR_ALL,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_FOR_ALL(P,s,f,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,8true,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_FOR_ALL_4,P##f,ORDER_PP_SEQ_AT_1 P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_ALL_4(P,b,f,x,xs,...) (,ORDER_PP_IF_NOT_##b(,8false,P##x,ORDER_PP_OPEN f##P ORDER_PP_SEQ_IS_NIL(,P##xs)(,,,8SEQ_FOR_ALL_4,P##f,ORDER_PP_SEQ_AT_0 P##xs)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each ORDER_PP_FN_CM(2,8SEQ_FOR_EACH,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_FOR_EACH(P,s,f,...) (,,8SEQ_FOR_EACH_O,P##f,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_EACH_O(P,_,f,b,x,...) (,ORDER_PP_WHEN_##b(,P##x,ORDER_PP_OPEN P##f,8SEQ_FOR_EACH_O,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_in_product ORDER_PP_FN_CM(2,8SEQ_FOR_EACH_IN_PRODUCT,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_FOR_EACH_IN_PRODUCT(P,s,f,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,,8SEQ_FOR_EACH_O,(,ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_IN_PRODUCT_L,ORDER_PP_EAT s##P),ORDER_PP_FX(SEQ_OPEN,(,ORDER_PP_SEQ_AT(,0,P##s)))),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_EACH_IN_PRODUCT_L(P,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,,8SEQ_FOR_EACH_O,(,ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_IN_PRODUCT_L,ORDER_PP_EAT s##P),ORDER_PP_FX(SEQ_OPEN,(,ORDER_PP_SEQ_AT(,0,P##s)))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_with_idx ORDER_PP_FN_CM(3,8SEQ_FOR_EACH_WITH_IDX,0IS_FN,0IS_NUM,0IS_SEQ)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_IDX(P,s,i,f,...) (,,ORDER_PP_IS_EDIBLE(,P##i)(8SEQ_FOR_EACH_WITH_IDX_,NAT,LIT),P##i,P##f,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_IDX_LIT(P,_,i,f,b,x,...) (,ORDER_PP_WHEN_##b(,P##i,ORDER_PP_OPEN f##P,8AP,P##x,ORDER_PP_TEST(8SEQ_FOR_EACH_WITH_IDX_,ORDER_PP_SYM_100_##i(,),NAT,LIT),ORDER_PP_LIT_INC(,P##i),P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_IDX_NAT(P,_,i,f,b,x,...) (,ORDER_PP_WHEN_##b(,P##i,ORDER_PP_OPEN f##P,8AP,P##x,8SEQ_FOR_EACH_WITH_IDX_NAT,ORDER_PP_NAT_SUCC P##i,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_with_delimiter ORDER_PP_FN_CM(3,8SEQ_FOR_EACH_WITH_DELIMITER,0IS_FN,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_DELIMITER(P,s,d,f,...) (,(,ORDER_PP_OPEN P##f,ORDER_PP_OPEN P##d),8SEQ_FOR_EACH_WITH_DELIMITER_S,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),P##f,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_DELIMITER_S(P,fd,b0,x0,f,...) (,ORDER_PP_WHEN_##b0(,,8SEQ_FOR_EACH_WITH_DELIMITER_O,P##fd,P##x0,P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_FOR_EACH_WITH_DELIMITER_O(P,_,fd,x0,b1,x1,f,...) (,P##x0,ORDER_PP_IF_NOT_##b1(ORDER_PP_,OPEN f##P,OPEN fd##P,8SEQ_FOR_EACH_WITH_DELIMITER_O,P##fd,P##x1,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_map ORDER_PP_FN_CM(2,8SEQ_MAP,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_MAP(P,in,f,...) (,ORDER_PP_SEQ_IS_NIL(,P##in)(,,ORDER_PP_SEQ_AT(,0,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_O,P##f,,ORDER_PP_FX(SEQ_OPEN,(,ORDER_PP_EAT in##P))),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MAP_O(P,y,f,out,b,x,...) (,ORDER_PP_WHEN_##b(,P##x,ORDER_PP_OPEN f##P,8SEQ_MAP_O,P##f,)P##out(P##y),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_merge ORDER_PP_FN_CM(3,8SEQ_MERGE,0IS_FN,0IS_SEQ,0IS_SEQ)
#define ORDER_PP_8SEQ_MERGE(P,rs,ls,f,...) (,ORDER_PP_SELECT_4(ORDER_PP_,SEQ_IS_NIL(,P##ls),SEQ_IS_NIL(,P##rs))(,,P##rs,P##ls,ORDER_PP_SEQ_AT(,0,P##ls),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##rs),8SEQ_MERGE_L,ORDER_PP_SEQ_AT_0 ls##P,ORDER_PP_SEQ_AT_0 rs##P,P##f,),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MERGE_L(P,b,l,ls,r,rs,f,out,...) (,ORDER_PP_IF_##b(ORDER_PP_8SEQ_MERGE_,LS,RS)(,P##l,P##ls,P##r,P##rs,P##f,P##out),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MERGE_LS(P,l,ls,r,rs,f,out) ORDER_PP_SEQ_IS_NIL(,P##ls)(,,ORDER_PP_SEQ_AT(,0,P##ls),ORDER_PP_OPEN f##P,8AP,P##r,8SEQ_MERGE_L,ORDER_PP_SEQ_AT_0 ls##P,P##r,P##rs,P##f,)P##out(P##l)ORDER_PP_SEQ_IS_NIL(,P##ls)(,(P##r)P##rs,)
#define ORDER_PP_8SEQ_MERGE_RS(P,l,ls,r,rs,f,out) ORDER_PP_SEQ_IS_NIL(,P##rs)(,,P##l,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##rs),8SEQ_MERGE_L,P##l,P##ls,ORDER_PP_SEQ_AT_0 rs##P,P##f,)P##out(P##r)ORDER_PP_SEQ_IS_NIL(,P##rs)(,(P##l)P##ls,)

#define ORDER_PP_DEF_8seq_merge_sort ORDER_PP_FN_CM(2,8SEQ_MERGE_SORT,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_MERGE_SORT(P,s,f,...) (,ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES(,P##s),8SEQ_REDUCE,(,8SEQ_MERGE_SORT_B,P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MERGE_SORT_B(P,ls,f,K,...) ORDER_PP_##K(,(,8SEQ_MERGE_SORT_C,ORDER_PP_SEQ_AT_0 P##ls,P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_MERGE_SORT_C(P,rs,l,ls,f,...) (,P##l,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##rs),8SEQ_MERGE_L,P##l,P##ls,ORDER_PP_SEQ_AT_0 rs##P,P##f,,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_pair_with ORDER_PP_FN_CM(3,8SEQ_PAIR_WITH,0IS_FN,0IS_SEQ,0IS_SEQ)
#define ORDER_PP_8SEQ_PAIR_WITH(P,sr,sl,f,...) (,ORDER_PP_OR(or)(ORDER_PP_SEQ_IS_NIL(,P##sl))(or)(ORDER_PP_SEQ_IS_NIL(,P##sr))()(,,ORDER_PP_SEQ_AT(,0,P##sl),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##sr),8SEQ_PAIR_WITH_L,ORDER_PP_EAT P##sr,ORDER_PP_EAT P##sl,P##f,),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PAIR_WITH_L(P,x,sr,sl,f,out,...) (,ORDER_PP_OR(or)(ORDER_PP_SEQ_IS_NIL(,P##sl))(or)(ORDER_PP_SEQ_IS_NIL(,P##sr))()(,,ORDER_PP_SEQ_AT(,0,P##sl),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,0,P##sr),8SEQ_PAIR_WITH_L,ORDER_PP_EAT P##sr,ORDER_PP_EAT P##sl,P##f,)P##out(P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_partition ORDER_PP_FN_CM(2,8SEQ_PARTITION,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_PARTITION(P,s,f,...) (,P##f,8SEQ_PARTITION_O,,,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),8PAIR,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_O(P,f,ot,of,b,x,K,...) (,ORDER_PP_IF_NOT_##b(,ORDER_PP_OPEN(,P##of,P##K,P##ot),P##x,ORDER_PP_OPEN f##P,8SEQ_PARTITION_B,P##x,P##ot,P##of,P##f,P##K),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_B(P,b,x,ot,of,f,...) ORDER_PP_8SEQ_PARTITION_O(,P##f,ORDER_PP_LEFT(,ot##P)ORDER_PP_WHEN_##b(,(P##x)),ORDER_PP_LEFT(,of##P)ORDER_PP_UNLESS_##b(,(P##x)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_partition_sort ORDER_PP_FN_CM(2,8SEQ_PARTITION_SORT,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_PARTITION_SORT(P,s,f,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_PARTITION_O,,,ORDER_PP_SEQ_TERMINATE(ORDER_PP_FX(SEQ_OPEN_A,ORDER_PP_EAT s##P)),8SEQ_PARTITION_SORT_B,ORDER_PP_SEQ_AT(,0,P##s),P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_L(P,f,s,...) (,ORDER_PP_SEQ_IS_NIL(,P##s)(,,ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8SEQ_PARTITION_O,,,ORDER_PP_SEQ_TERMINATE(ORDER_PP_FX(SEQ_OPEN_A,ORDER_PP_EAT s##P)),8SEQ_PARTITION_SORT_B,ORDER_PP_SEQ_AT(,0,P##s),P##f),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_B(P,sf,st,m,f,...) (,P##f,8SEQ_PARTITION_SORT_L,P##st,8SEQ_PARTITION_SORT_C,P##sf,P##m,P##f,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_C(P,st,sf,m,f,...) (,P##f,8SEQ_PARTITION_SORT_L,P##sf,8SEQ_PARTITION_SORT_D,P##m,P##st,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_PARTITION_SORT_D(P,sl,m,sr,...) (,P##sl(P##m)P##sr,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_reduce ORDER_PP_FN_CM(2,8SEQ_REDUCE,0IS_FN,0IS_SEQ)
#define ORDER_PP_8SEQ_REDUCE(P,s,f,...) (,ORDER_PP_OVERLOAD(8SEQ_REDUCE,ORDER_PP_SEQ_SATURATED_SIZE(,4,P##s))(,P##f,P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_REDUCE_0(P,f,s)
#define ORDER_PP_8SEQ_REDUCE_1(P,f,s) ORDER_PP_REM s##P
#define ORDER_PP_8SEQ_REDUCE_2(P,f,s) ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,1,P##s)
#define ORDER_PP_8SEQ_REDUCE_3(P,f,s) ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,1,P##s),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,2,P##s)
#define ORDER_PP_8SEQ_REDUCE_4(P,f,s) ORDER_PP_SEQ_AT(,0,P##s),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_AT(,1,P##s),8SEQ_REDUCE_L,P##f,ORDER_PP_SEQ_FIRST_2 ORDER_PP_EAT_2 s##P
#define ORDER_PP_8SEQ_REDUCE_L(P,y,f,x0,x1,xs,...) (,P##x0,ORDER_PP_OPEN f##P,8AP,P##x1,ORDER_PP_SEQ_IS_NIL(,P##xs)(,ORDER_PP_OPEN f##P ORDER_PP_OPEN(,,8AP,P##y),8SEQ_REDUCE_L,P##f,ORDER_PP_SEQ_FIRST_2 P##xs(P##y)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_select ORDER_PP_FN_CM(3,8SEQ_SELECT,0IS_FN,0IS_ANY,0IS_SEQ)
#define ORDER_PP_8SEQ_SELECT(P,s,x0,f,...) (,,8SEQ_SELECT_O,,P##x0,P##f,ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s),P##__VA_ARGS__)
#define ORDER_PP_8SEQ_SELECT_O(P,c,x0,x1,f,b,x2,...) (,ORDER_PP_IF_##c(,P##x1,P##x0),ORDER_PP_WHEN_##b(,ORDER_PP_OPEN f##P,8AP,P##x2,8SEQ_SELECT_O,ORDER_PP_IF_##c(,P##x1,P##x0),P##x2,P##f,)P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_sort ORDER_PP_FN_CM(2,8SEQ_MERGE_SORT,0IS_FN,0IS_SEQ)

#define ORDER_PP_DEF_8seq_unfold ORDER_PP_FN_CM(4,8SEQ_UNFOLD,0IS_FN,0IS_FN,0IS_FN,0IS_ANY)
#define ORDER_PP_8SEQ_UNFOLD(P,x,f,s,c,...) ORDER_PP_8SEQ_UNFOLD_5(,P##x,P##c,P##s,P##f,,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_UNFOLD_5(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8SEQ_UNFOLD_B,P##x,c##P,P##__VA_ARGS__)
#define ORDER_PP_8SEQ_UNFOLD_B(P,b,x,c,s,f,...) (,ORDER_PP_WHEN_##b(,P##x,ORDER_PP_OPEN f##P,8SEQ_UNFOLD_C,P##x,P##c,s##P,f##P,)P##__VA_ARGS__)
#define ORDER_PP_8SEQ_UNFOLD_C(P,y,x,c,s,f,ys,...) (,P##x,ORDER_PP_OPEN s##P,8SEQ_UNFOLD_5,P##c,P##s,P##f,P##ys(P##y),P##__VA_ARGS__)

// Details

#define ORDER_PP_0IS_SEQ(P,x) ORDER_PP_OR(or)(ORDER_PP_0IS_SEQ_CONS(,P##x))(or)(ORDER_PP_IS_NIL(,P##x))()
#define ORDER_PP_0IS_SEQ_CONS(P,x) ORDER_PP_AND(and)(ORDER_PP_IS_EDIBLE(,P##x))(and)(ORDER_PP_FX(IS_TUPLE_SIZE_1,(,ORDER_PP_REM P##x)))()
#define ORDER_PP_0IS_VSEQ(P,x) ORDER_PP_OR(or)(ORDER_PP_IS_EDIBLE(,P##x))(or)(ORDER_PP_IS_NIL(,P##x))()

#define ORDER_PP_SEQ_FIRST_2(x) x,ORDER_PP_SEQ_AT_0

#define ORDER_PP_EAT_2(...) ORDER_PP_EAT

#define ORDER_PP_SEQ_AT(P,i,s) ORDER_PP_SEQ_AT_B(ORDER_PP_SEQ_AT_##i P##s)
#define ORDER_PP_SEQ_AT_B(xs) ORDER_PP_TUPLE_AT_0(,xs)
#define ORDER_PP_SEQ_AT_0(...) __VA_ARGS__,
#define ORDER_PP_SEQ_AT_1(...) ORDER_PP_SEQ_AT_0
#define ORDER_PP_SEQ_AT_2(...) ORDER_PP_SEQ_AT_1

#define ORDER_PP_PSEQ_CLOSE(P,s) ORDER_PP_PSEQ_CLOSE_A P##s(0,)
#define ORDER_PP_PSEQ_CLOSE_A(P,x) )ORDER_PP_PSEQ_CLOSE_B##P
#define ORDER_PP_PSEQ_CLOSE_A0
#define ORDER_PP_PSEQ_CLOSE_B(P,x) )ORDER_PP_PSEQ_CLOSE_A##P
#define ORDER_PP_PSEQ_CLOSE_B0

#define ORDER_PP_SEQ_IS_NIL(P,s) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_IS_EDIBLE_TEST P##s,0,)

#define ORDER_PP_SEQ_SATURATED_SIZE(P,max,s) ORDER_PP_SEQ_SATURATED_SIZE_B(ORDER_PP_SEQ_SATURATED_SIZE_##max P##s)
#define ORDER_PP_SEQ_SATURATED_SIZE_B(x) ORDER_PP_SEQ_SATURATED_SIZE_C(,x,4,3,2,1,0,)
#define ORDER_PP_SEQ_SATURATED_SIZE_C(P,_,D,C,B,A,x,...) P##x

#define ORDER_PP_SEQ_SATURATED_SIZE_1(x) ,
#define ORDER_PP_SEQ_SATURATED_SIZE_2(x) ,ORDER_PP_SEQ_SATURATED_SIZE_1
#define ORDER_PP_SEQ_SATURATED_SIZE_3(x) ,ORDER_PP_SEQ_SATURATED_SIZE_2
#define ORDER_PP_SEQ_SATURATED_SIZE_4(x) ,ORDER_PP_SEQ_SATURATED_SIZE_3

#define ORDER_PP_8SEQ_APPLY(P,s,m,...) (,P##m P##s,P##__VA_ARGS__)

#define ORDER_PP_8SEQ_TERMINATE(P,s,m,...) (,ORDER_PP_SEQ_TERMINATE(P##m P##s)P##__VA_ARGS__)
#define ORDER_PP_SEQ_TERMINATE(...) ORDER_PP_SEQ_TERMINATE_B(__VA_ARGS__)
#define ORDER_PP_SEQ_TERMINATE_B(...) __VA_ARGS__##0

#define ORDER_PP_SEQ_MAKE_EVEN_A(x) (x)ORDER_PP_SEQ_MAKE_EVEN_B
#define ORDER_PP_SEQ_MAKE_EVEN_A0
#define ORDER_PP_SEQ_MAKE_EVEN_B(x) (x)ORDER_PP_SEQ_MAKE_EVEN_A
#define ORDER_PP_SEQ_MAKE_EVEN_B0 ()

#define ORDER_PP_SEQ_OPEN(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OPEN_A P##s)
#define ORDER_PP_SEQ_OPEN_A(x) ,x,ORDER_PP_SEQ_OPEN_B
#define ORDER_PP_SEQ_OPEN_A0 0,
#define ORDER_PP_SEQ_OPEN_B(x) ,x,ORDER_PP_SEQ_OPEN_A
#define ORDER_PP_SEQ_OPEN_B0 0,

#define ORDER_PP_SEQ_TO_PSEQ(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_TO_PSEQ_A P##s)
#define ORDER_PP_SEQ_TO_PSEQ_A(...) (,__VA_ARGS__)ORDER_PP_SEQ_TO_PSEQ_B
#define ORDER_PP_SEQ_TO_PSEQ_A0
#define ORDER_PP_SEQ_TO_PSEQ_B(...) (,__VA_ARGS__)ORDER_PP_SEQ_TO_PSEQ_A
#define ORDER_PP_SEQ_TO_PSEQ_B0

#define ORDER_PP_PSEQ_TO_SEQ(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_PSEQ_TO_SEQ_A P##s)
#define ORDER_PP_PSEQ_TO_SEQ_A(P,x) (P##x)ORDER_PP_PSEQ_TO_SEQ_B
#define ORDER_PP_PSEQ_TO_SEQ_A0
#define ORDER_PP_PSEQ_TO_SEQ_B(P,x) (P##x)ORDER_PP_PSEQ_TO_SEQ_A
#define ORDER_PP_PSEQ_TO_SEQ_B0

#define ORDER_PP_SEQ_SPLIT_AT(P,i,s) ORDER_PP_IS_EDIBLE(,P##i)(ORDER_PP_SEQ_SPLIT_AT_,NAT,LIT)(,P##i,P##s)
#define ORDER_PP_SEQ_SPLIT_AT_LIT(P,i,s) ORDER_PP_PRIMITIVE_CAT(ORDER_PP_SEQ_SPLIT_AT_,P##i)s##P
#define ORDER_PP_SEQ_SPLIT_AT_NAT(P,i,s) ORDER_PP_PM(,ORDER_PP_NAT_DIV_100 i##P,8SEQ_SPLIT_AT_B,ORDER_PP_OVERLOAD(SEQ_SPLIT_AT,ORDER_PP_SCAN(ORDER_PP_NAT_MOD_100_LIT i##P))s##P,)
#define ORDER_PP_8SEQ_SPLIT_AT_B(P,n,first_n,rest,...) ORDER_PP_NAT_IS_ZERO P##n(ORDER_PP_8SEQ_SPLIT_AT_,C,D)(,P##n,P##first_n,P##rest)
#define ORDER_PP_8SEQ_SPLIT_AT_C(P,n,first_n,rest) )P##first_n,P##rest
#define ORDER_PP_8SEQ_SPLIT_AT_D(P,n,first_n,rest) (,ORDER_PP_NAT_PRED n##P,8SEQ_SPLIT_AT_B,P##first_n()ORDER_PP_SEQ_SPLIT_AT_100 P##rest,)

#define ORDER_PP_SEQ_SPLIT_LAST_SHIFT(P,x) ORDER_PP_UNLESS_##P(,ORDER_PP_ERROR_EMPTY_SEQ(!))(,x##P,ORDER_PP_SEQ_SPLIT_LAST_SHIFT_A
#define ORDER_PP_SEQ_SPLIT_LAST_SHIFT_A(P,x) ORDER_PP_UNLESS_##P(,0))ORDER_PP_WHEN_##P(,ORDER_PP_LPAREN,x##P,ORDER_PP_SEQ_SPLIT_LAST_SHIFT_B)
#define ORDER_PP_SEQ_SPLIT_LAST_SHIFT_B(P,x) ORDER_PP_UNLESS_##P(,0))ORDER_PP_WHEN_##P(,ORDER_PP_LPAREN,x##P,ORDER_PP_SEQ_SPLIT_LAST_SHIFT_A)

#define ORDER_PP_SEQ_SPLIT_LAST_SWAP_A(P,x,b) ORDER_PP_UNLESS_##b(,,ORDER_PP_REM)(P##x)ORDER_PP_WHEN_##b(,ORDER_PP_SEQ_SPLIT_LAST_SWAP_B)
#define ORDER_PP_SEQ_SPLIT_LAST_SWAP_B(P,x,b) ORDER_PP_UNLESS_##b(,,ORDER_PP_REM)(P##x)ORDER_PP_WHEN_##b(,ORDER_PP_SEQ_SPLIT_LAST_SWAP_A)

#define ORDER_PP_ERROR_EMPTY_SEQ()

#include "order/prelude/seq_tables.h"
