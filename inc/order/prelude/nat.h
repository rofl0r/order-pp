#ifndef ORDER_PRELUDE_NAT_H_VAJK20040620
#define ORDER_PRELUDE_NAT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8lit_to_nat(l)' converts the signless decimal literal `l' in the
// range $[0,100]$ to the internal natural number representation of
// the interpreter.
//
// For example,
//
//   8nat_to_lit(8nat_inc(8lit_to_nat(8quote(56)))) ==> 57
#define ORDER_PP_DEF_8lit_to_nat ORDER_PP_FN_CM(1,8LIT_TO_NAT)
#define ORDER_PP_8LIT_TO_NAT(P,lit,K,...) ORDER_PP_CM_INVOKE(P##K,ORDER_PP_FY(TUPLE_AT_1,(,ORDER_PP_DEF_##lit))),P##__VA_ARGS__)

// `ORDER_PP_NAT(digit...)' converts the digits to the internal
// natural number representation used by the interpreter.
// `ORDER_PP_NAT' is designed to be used in constant definitions.
#define ORDER_PP_NAT(...) ORDER_PP_PM(,(,0##__VA_ARGS__),8NAT,)

// `8nat(digit0, digit1, ..., digitN)' specifies a natural number
// constant. Note that this is a syntactic form. The digits will not
// be evaluated.
//
// For example,
//
//   8nat_to_lit(8nat_inc(8nat(2,0,0,4))) ==> 2005
//
// Note also that the literals `0', `1', ..., `100' evaluate to the
// corresponding natural number.
#define ORDER_PP_DEF_8nat(...) 8DEF_CONST,ORDER_PP_PM(,(,0##__VA_ARGS__),8NAT,),
#define ORDER_PP_8NAT(P,t,...) ORDER_PP_OVERLOAD(8NAT,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE t##P)t##P
#define ORDER_PP_8NAT_1(P,_0) ,)(P##_0)
#define ORDER_PP_8NAT_2(P,_0,_1) ,)(P##_1)(P##_0)
#define ORDER_PP_8NAT_3(P,_0,_1,_2) ,)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_4(P,_0,_1,_2,_3) ,)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_5(P,_0,_1,_2,_3,_4) ,)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_6(P,_0,_1,_2,_3,_4,_5) ,)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_7(P,_0,_1,_2,_3,_4,_5,_6) ,)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_8(P,_0,_1,_2,_3,_4,_5,_6,_7) ,)(P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8) ,)(P##_8)(P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) ,)(P##_9)(P##_8)(P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_8NAT_11_OR_MORE(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) (,(,P##__VA_ARGS__),8NAT,)(P##_9)(P##_8)(P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)

// `8nat_add(n0, n1, ..., nN)' computes the sum of the natural
// numbers `n0', `n1', ..., `nN'.
//
// For example,
//
//   8nat_to_lit(8nat_add(3)) ==> 3
//   8nat_to_lit(8nat_add(3,1)) ==> 4
//   8nat_to_lit(8nat_add(3,1,4)) ==> 8
#define ORDER_PP_DEF_8nat_add ORDER_PP_OP_LEFT_CM(8NAT_ADD)
#define ORDER_PP_8NAT_ADD(P,r,l,...) (,ORDER_PP_NAT_ADD(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_ADD(P,l,r) ORDER_PP_NAT_CHAOS_BOP(,ADD,P##l,P##r)
#include "chaos/preprocessor/arbitrary/add.h"

// `8nat_dec(n)' computes the predecessor of the non-zero natural
// number `n'.
//
// For example,
//
//   8nat_to_lit(8nat_dec(10)) ==> 9
#define ORDER_PP_DEF_8nat_dec ORDER_PP_FN_CM(1,8NAT_DEC)
#define ORDER_PP_8NAT_DEC(P,n,...) (,ORDER_PP_NAT_DEC n##P,P##__VA_ARGS__)
#define ORDER_PP_NAT_DEC(d) ORDER_PP_NAT_DEC_##d
#define ORDER_PP_NAT_DEC_0 ORDER_PP_NAT_DEC_A
#define ORDER_PP_NAT_DEC_1 (0)
#define ORDER_PP_NAT_DEC_2 (1)
#define ORDER_PP_NAT_DEC_3 (2)
#define ORDER_PP_NAT_DEC_4 (3)
#define ORDER_PP_NAT_DEC_5 (4)
#define ORDER_PP_NAT_DEC_6 (5)
#define ORDER_PP_NAT_DEC_7 (6)
#define ORDER_PP_NAT_DEC_8 (7)
#define ORDER_PP_NAT_DEC_9 (8)
#define ORDER_PP_NAT_DEC_00 ORDER_PP_ERROR_NATURAL_NUMBER_0_HAS_NO_PREDECESSOR(!)
#define ORDER_PP_NAT_DEC_01 (00)
#define ORDER_PP_NAT_DEC_02 (01)
#define ORDER_PP_NAT_DEC_03 (02)
#define ORDER_PP_NAT_DEC_04 (03)
#define ORDER_PP_NAT_DEC_05 (04)
#define ORDER_PP_NAT_DEC_06 (05)
#define ORDER_PP_NAT_DEC_07 (06)
#define ORDER_PP_NAT_DEC_08 (07)
#define ORDER_PP_NAT_DEC_09 (08)
#define ORDER_PP_NAT_DEC_A(d) ORDER_PP_NAT_DEC_A_##d
#define ORDER_PP_NAT_DEC_A_0 (9)ORDER_PP_NAT_DEC_B
#define ORDER_PP_NAT_DEC_A_1 (9)(0)
#define ORDER_PP_NAT_DEC_A_2 (9)(1)
#define ORDER_PP_NAT_DEC_A_3 (9)(2)
#define ORDER_PP_NAT_DEC_A_4 (9)(3)
#define ORDER_PP_NAT_DEC_A_5 (9)(4)
#define ORDER_PP_NAT_DEC_A_6 (9)(5)
#define ORDER_PP_NAT_DEC_A_7 (9)(6)
#define ORDER_PP_NAT_DEC_A_8 (9)(7)
#define ORDER_PP_NAT_DEC_A_9 (9)(8)
#define ORDER_PP_NAT_DEC_A_01 (09)
#define ORDER_PP_NAT_DEC_A_02 (9)(01)
#define ORDER_PP_NAT_DEC_A_03 (9)(02)
#define ORDER_PP_NAT_DEC_A_04 (9)(03)
#define ORDER_PP_NAT_DEC_A_05 (9)(04)
#define ORDER_PP_NAT_DEC_A_06 (9)(05)
#define ORDER_PP_NAT_DEC_A_07 (9)(06)
#define ORDER_PP_NAT_DEC_A_08 (9)(07)
#define ORDER_PP_NAT_DEC_A_09 (9)(08)
#define ORDER_PP_NAT_DEC_B(d) ORDER_PP_NAT_DEC_B_##d
#define ORDER_PP_NAT_DEC_B_0 (9)ORDER_PP_NAT_DEC_A
#define ORDER_PP_NAT_DEC_B_1 (9)(0)
#define ORDER_PP_NAT_DEC_B_2 (9)(1)
#define ORDER_PP_NAT_DEC_B_3 (9)(2)
#define ORDER_PP_NAT_DEC_B_4 (9)(3)
#define ORDER_PP_NAT_DEC_B_5 (9)(4)
#define ORDER_PP_NAT_DEC_B_6 (9)(5)
#define ORDER_PP_NAT_DEC_B_7 (9)(6)
#define ORDER_PP_NAT_DEC_B_8 (9)(7)
#define ORDER_PP_NAT_DEC_B_9 (9)(8)
#define ORDER_PP_NAT_DEC_B_01 (09)
#define ORDER_PP_NAT_DEC_B_02 (9)(01)
#define ORDER_PP_NAT_DEC_B_03 (9)(02)
#define ORDER_PP_NAT_DEC_B_04 (9)(03)
#define ORDER_PP_NAT_DEC_B_05 (9)(04)
#define ORDER_PP_NAT_DEC_B_06 (9)(05)
#define ORDER_PP_NAT_DEC_B_07 (9)(06)
#define ORDER_PP_NAT_DEC_B_08 (9)(07)
#define ORDER_PP_NAT_DEC_B_09 (9)(08)

#define ORDER_PP_ERROR_NATURAL_NUMBER_0_HAS_NO_PREDECESSOR()

// `8nat_div(n0, n1, ..., nN)' computes the quotient of `n0 / n1 /
// ... / nN'.
//
// For example,
//
//   8nat_to_lit(8nat_div(8)) ==> 8
//   8nat_to_lit(8nat_div(8,4)) ==> 2
//   8nat_to_lit(8nat_div(8,4,2)) ==> 1
#define ORDER_PP_DEF_8nat_div ORDER_PP_OP_LEFT_CM(8NAT_DIV)
#define ORDER_PP_8NAT_DIV(P,r,l,...) (,ORDER_PP_NAT_DIV(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_DIV(P,l,r) ORDER_PP_NAT_CHAOS_BOP(,DIV,P##l,P##r)
#include "chaos/preprocessor/arbitrary/div.h"

// `8nat_equal(i,j)' tests whether the natural numbers `i' and `j'
// are equal.
#define ORDER_PP_DEF_8nat_equal ORDER_PP_FN_CM(2,8NAT_EQUAL)
#define ORDER_PP_8NAT_EQUAL(P,l,r,...) (,ORDER_PP_NAT_EQUAL(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_EQUAL(P,l,r) ORDER_PP_NAT_CHAOS_BPR(,EQUAL,P##l,P##r)
#include "chaos/preprocessor/arbitrary/equal.h"

#define ORDER_PP_DEF_8nat_greater ORDER_PP_FN_CM(2,8NAT_GREATER)
#define ORDER_PP_8NAT_GREATER(P,l,r,...) (,ORDER_PP_NAT_GREATER(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_GREATER(P,l,r) ORDER_PP_NAT_CHAOS_BPR(,GREATER,P##l,P##r)
#include "chaos/preprocessor/arbitrary/greater.h"

#define ORDER_PP_DEF_8nat_greater_eq ORDER_PP_FN_CM(2,8NAT_GREATER_EQ)
#define ORDER_PP_8NAT_GREATER_EQ(P,l,r,...) (,ORDER_PP_NAT_GREATER_EQ(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_GREATER_EQ(P,l,r) ORDER_PP_NAT_CHAOS_BPR(,GREATER_EQUAL,P##l,P##r)
#include "chaos/preprocessor/arbitrary/greater_equal.h"

#define ORDER_PP_DEF_8nat_inc ORDER_PP_FN_CM(1,8NAT_INC)
#define ORDER_PP_8NAT_INC(P,n,...) (,ORDER_PP_NAT_INC n##P,P##__VA_ARGS__)
#define ORDER_PP_NAT_INC(d) ORDER_PP_NAT_INC_##d
#define ORDER_PP_NAT_INC_ (00)
#define ORDER_PP_NAT_INC_0 (1)
#define ORDER_PP_NAT_INC_1 (2)
#define ORDER_PP_NAT_INC_2 (3)
#define ORDER_PP_NAT_INC_3 (4)
#define ORDER_PP_NAT_INC_4 (5)
#define ORDER_PP_NAT_INC_5 (6)
#define ORDER_PP_NAT_INC_6 (7)
#define ORDER_PP_NAT_INC_7 (8)
#define ORDER_PP_NAT_INC_8 (9)
#define ORDER_PP_NAT_INC_9 (0)ORDER_PP_NAT_INC_B
#define ORDER_PP_NAT_INC_00 (01)
#define ORDER_PP_NAT_INC_01 (02)
#define ORDER_PP_NAT_INC_02 (03)
#define ORDER_PP_NAT_INC_03 (04)
#define ORDER_PP_NAT_INC_04 (05)
#define ORDER_PP_NAT_INC_05 (06)
#define ORDER_PP_NAT_INC_06 (07)
#define ORDER_PP_NAT_INC_07 (08)
#define ORDER_PP_NAT_INC_08 (09)
#define ORDER_PP_NAT_INC_09 (0)(01)
#define ORDER_PP_NAT_INC_B(d) ORDER_PP_NAT_INC_B_##d
#define ORDER_PP_NAT_INC_B_0 (1)
#define ORDER_PP_NAT_INC_B_1 (2)
#define ORDER_PP_NAT_INC_B_2 (3)
#define ORDER_PP_NAT_INC_B_3 (4)
#define ORDER_PP_NAT_INC_B_4 (5)
#define ORDER_PP_NAT_INC_B_5 (6)
#define ORDER_PP_NAT_INC_B_6 (7)
#define ORDER_PP_NAT_INC_B_7 (8)
#define ORDER_PP_NAT_INC_B_8 (9)
#define ORDER_PP_NAT_INC_B_9 (0)ORDER_PP_NAT_INC
#define ORDER_PP_NAT_INC_B_00 (01)
#define ORDER_PP_NAT_INC_B_01 (02)
#define ORDER_PP_NAT_INC_B_02 (03)
#define ORDER_PP_NAT_INC_B_03 (04)
#define ORDER_PP_NAT_INC_B_04 (05)
#define ORDER_PP_NAT_INC_B_05 (06)
#define ORDER_PP_NAT_INC_B_06 (07)
#define ORDER_PP_NAT_INC_B_07 (08)
#define ORDER_PP_NAT_INC_B_08 (09)
#define ORDER_PP_NAT_INC_B_09 (0)(01)

// `8nat_is_0(n)' tests whether `n' is the natural number $0$.
//
// For example,
//
//   8nat_is_0(8nat(0)) ==> 8true
//   8nat_is_0(8nat(1,5)) ==> 8false
#define ORDER_PP_DEF_8nat_is_0 ORDER_PP_FN_CM(1,8NAT_IS_0)
#define ORDER_PP_8NAT_IS_0(P,x,...) (,ORDER_PP_NAT_IS_0 x##P(,8true,8false),P##__VA_ARGS__)

// `8nat_isnt_0(n)' tests whether `n' isn't the natural number $0$.
//
// For example,
//
//   8nat_isnt_0(8nat(0)) ==> 8false
//   8nat_isnt_0(8nat(3,1)) ==> 8true
#define ORDER_PP_DEF_8nat_isnt_0 ORDER_PP_FN_CM(1,8NAT_ISNT_0)
#define ORDER_PP_8NAT_ISNT_0(P,x,...) (,ORDER_PP_NAT_IS_0 x##P(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_less ORDER_PP_FN_CM(2,8NAT_LESS)
#define ORDER_PP_8NAT_LESS(P,l,r,...) (,ORDER_PP_NAT_LESS(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_LESS(P,l,r) ORDER_PP_NAT_CHAOS_BPR(,LESS,P##l,P##r)
#include "chaos/preprocessor/arbitrary/less.h"

#define ORDER_PP_DEF_8nat_less_eq ORDER_PP_FN_CM(2,8NAT_LESS_EQ)
#define ORDER_PP_8NAT_LESS_EQ(P,l,r,...) (,ORDER_PP_NAT_LESS_EQ(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_LESS_EQ(P,l,r) ORDER_PP_NAT_CHAOS_BPR(,LESS_EQUAL,P##l,P##r)
#include "chaos/preprocessor/arbitrary/less_equal.h"

// `8nat_minus(nl,nr)' computes the difference of the natural
// numbers `nl' and `nr'.
//
// For example,
//
//   8nat_to_lit(8nat_minus(7,2)) ==> 9
#define ORDER_PP_DEF_8nat_minus ORDER_PP_FN_CM(2,8NAT_MINUS)
#define ORDER_PP_8NAT_MINUS(P,l,r,...) (,ORDER_PP_NAT_SUB(,P##l,P##r),P##__VA_ARGS__)

// `8nat_mul(n0, n1, ..., nN)' computes the product of the natural
// numbers `n0', `n1', ..., `nN'.
//
// For example,
//
//   8nat_to_lit(8nat_mul(3,1,4)) ==> 12
#define ORDER_PP_DEF_8nat_mul ORDER_PP_OP_LEFT_CM(8NAT_MUL)
#define ORDER_PP_8NAT_MUL(P,r,l,...) (,ORDER_PP_NAT_MUL(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_MUL(P,l,r) ORDER_PP_NAT_CHAOS_BOP(,MUL,P##l,P##r)
#include "chaos/preprocessor/arbitrary/mul.h"

#define ORDER_PP_DEF_8nat_not_eq ORDER_PP_FN_CM(2,8NAT_NOT_EQ)
#define ORDER_PP_8NAT_NOT_EQ(P,l,r,...) (,ORDER_PP_NAT_NOT_EQ(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_NOT_EQ(P,l,r) ORDER_PP_NAT_CHAOS_BPR(,NOT_EQUAL,P##l,P##r)
#include "chaos/preprocessor/arbitrary/not_equal.h"

// `8nat_plus(nl,nr)' computes the sum of the natural numbers `nl'
// and `nr'.
//
// For example,
//
//   8nat_to_lit(8nat_plus(7,2)) ==> 9
#define ORDER_PP_DEF_8nat_plus ORDER_PP_FN_CM(2,8NAT_PLUS)
#define ORDER_PP_8NAT_PLUS(P,l,r,...) (,ORDER_PP_NAT_ADD(,P##l,P##r),P##__VA_ARGS__)

// `8nat_quotient(nl,nr)' computes the quotient of dividing the
// natural number `nl' by the natural number `nr'.
//
// For example,
//
//   8nat_to_lit(8nat_quotient(7,2)) ==> 3
#define ORDER_PP_DEF_8nat_quotient ORDER_PP_FN_CM(2,8NAT_QUOTIENT)
#define ORDER_PP_8NAT_QUOTIENT(P,l,r,...) (,ORDER_PP_NAT_DIV(,P##l,P##r),P##__VA_ARGS__)

// `8nat_remainder(nl,nr)' computes the remainder of dividing
// the natural number `nl' by the natural number `nr'.
//
// For example,
//
//   8nat_to_lit(8nat_remainder(7,2)) ==> 1
#define ORDER_PP_DEF_8nat_remainder ORDER_PP_FN_CM(2,8NAT_REMAINDER)
#define ORDER_PP_8NAT_REMAINDER(P,l,r,...) (,ORDER_PP_NAT_REMAINDER(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_REMAINDER(P,l,r) ORDER_PP_NAT_CHAOS_BOP(,MOD,P##l,P##r)
#include "chaos/preprocessor/arbitrary/mod.h"

// `8nat_times(n0, n1, ..., nN)' computes the difference `n0 - n1 -
// ... - nN'.
//
// For example,
//
//   8nat_to_lit(8nat_sub(8)) ==> 8
//   8nat_to_lit(8nat_sub(8,4)) ==> 4
//   8nat_to_lit(8nat_sub(8,4,2)) ==> 2
//   8nat_to_lit(8nat_sub(8,4,2,1)) ==> 1
#define ORDER_PP_DEF_8nat_sub ORDER_PP_OP_LEFT_CM(8NAT_SUB)
#define ORDER_PP_8NAT_SUB(P,r,l,...) (,ORDER_PP_NAT_SUB(,P##l,P##r),P##__VA_ARGS__)
#define ORDER_PP_NAT_SUB(P,l,r) ORDER_PP_NAT_CHAOS_BOP(,SUB,P##l,P##r)
#include "chaos/preprocessor/arbitrary/sub.h"

// `8nat_times(nl,nr)' computes the product of the natural numbers
// `nl' and `nr'.
//
// For example,
//
//   8nat_to_lit(8nat_times(5,6)) ==> 30
#define ORDER_PP_DEF_8nat_times ORDER_PP_FN_CM(2,8NAT_TIMES)
#define ORDER_PP_8NAT_TIMES(P,l,r,...) (,ORDER_PP_NAT_MUL(,P##l,P##r),P##__VA_ARGS__)

// `8nat_to_lit(n)' converts the natural number `n' to a signless
// decimal literal.
//
// For example,
//
//   8nat_to_lit(8nat_dec(8nat(2,0,0,4))) ==> 2003
#define ORDER_PP_DEF_8nat_to_lit ORDER_PP_FN_CM(1,8NAT_TO_LIT)
#define ORDER_PP_8NAT_TO_LIT(P,n,...) (,ORDER_PP_NAT_TO_LIT(,P##n),P##__VA_ARGS__)
#define ORDER_PP_NAT_TO_LIT(P,n) ORDER_PP_SCAN(ORDER_PP_NAT_TO_LIT_OPEN_A n##P ORDER_PP_NAT_CLOSE_A n##P)
#define ORDER_PP_NAT_TO_LIT_OPEN_A(d) ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_LIT_OPEN_B)
#define ORDER_PP_NAT_TO_LIT_OPEN_B(d) ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_LIT_OPEN_A)

// `8nat_to_seq_of_digits(n)' converts the natural number `n' to a
// sequence of digits with the highest order digit first.
//
// For example,
//
//   8nat_to_seq_of_digits(8nat(2,0,0,4)) ==> (2)(0)(0)(4)
#define ORDER_PP_DEF_8nat_to_seq_of_digits ORDER_PP_FN_CM(1,8NAT_TO_SEQ_OF_DIGITS)
#define ORDER_PP_8NAT_TO_SEQ_OF_DIGITS(P,n,...) (,ORDER_PP_NAT_TO_SEQ_OF_DIGITS(,P##n),P##__VA_ARGS__)
#define ORDER_PP_NAT_TO_SEQ_OF_DIGITS(P,n) ORDER_PP_SCAN(ORDER_PP_NAT_TO_SEQ_OF_DIGITS_A P##n ORDER_PP_NAT_CLOSE_A P##n)
#define ORDER_PP_NAT_TO_SEQ_OF_DIGITS_A(d) ORDER_PP_NAT_TO_SEQ_OF_DIGITS_F ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_SEQ_OF_DIGITS_B)
#define ORDER_PP_NAT_TO_SEQ_OF_DIGITS_B(d) ORDER_PP_NAT_TO_SEQ_OF_DIGITS_F ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_SEQ_OF_DIGITS_A)
#define ORDER_PP_NAT_TO_SEQ_OF_DIGITS_F(r,l) l(r)

// `8seq_of_digits_to_nat(s)' converts the sequence of digits `s' to
// the internal natural number representation of the interpreter.
//
// For example,
//
//   8nat_to_lit(8seq_of_digits_to_nat(8quote((2)(0)(0)(4)))) ==> 2004
#define ORDER_PP_DEF_8seq_of_digits_to_nat ORDER_PP_FN_CM(1,8SEQ_OF_DIGITS_TO_NAT)
#define ORDER_PP_8SEQ_OF_DIGITS_TO_NAT(P,s,...) (,ORDER_PP_SEQ_OF_DIGITS_TO_NAT(,P##s),P##__VA_ARGS__)
#define ORDER_PP_SEQ_OF_DIGITS_TO_NAT(P,s) ORDER_PP_FY(SEQ_REVERSE,(,ORDER_PP_SEQ_OF_DIGITS_TO_NAT_F P##s))
#define ORDER_PP_SEQ_OF_DIGITS_TO_NAT_F(d) (0##d)

// Details

#define ORDER_PP_IS_LESS_EQ_1_0(P,t,...) P##t
#define ORDER_PP_IS_LESS_EQ_1_1(P,t,...) P##t
#define ORDER_PP_IS_LESS_EQ_1_2(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_3(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_4(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_5(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_6(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_7(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_8(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_LESS_EQ_1_9(P,t,...) P##__VA_ARGS__

#define ORDER_PP_NAT_CLOSE_A(d) )ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_CLOSE_B)
#define ORDER_PP_NAT_CLOSE_B(d) )ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_CLOSE_A)

#define ORDER_PP_NAT_DIGIT_0 0
#define ORDER_PP_NAT_DIGIT_1 1
#define ORDER_PP_NAT_DIGIT_2 2
#define ORDER_PP_NAT_DIGIT_3 3
#define ORDER_PP_NAT_DIGIT_4 4
#define ORDER_PP_NAT_DIGIT_5 5
#define ORDER_PP_NAT_DIGIT_6 6
#define ORDER_PP_NAT_DIGIT_7 7
#define ORDER_PP_NAT_DIGIT_8 8
#define ORDER_PP_NAT_DIGIT_9 9
#define ORDER_PP_NAT_DIGIT_00 0
#define ORDER_PP_NAT_DIGIT_01 1
#define ORDER_PP_NAT_DIGIT_02 2
#define ORDER_PP_NAT_DIGIT_03 3
#define ORDER_PP_NAT_DIGIT_04 4
#define ORDER_PP_NAT_DIGIT_05 5
#define ORDER_PP_NAT_DIGIT_06 6
#define ORDER_PP_NAT_DIGIT_07 7
#define ORDER_PP_NAT_DIGIT_08 8
#define ORDER_PP_NAT_DIGIT_09 9

#define ORDER_PP_NAT_DIGIT_EXCEPT_0_0
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_1 1
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_2 2
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_3 3
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_4 4
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_5 5
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_6 6
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_7 7
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_8 8
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_9 9
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_00
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_01 1
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_02 2
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_03 3
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_04 4
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_05 5
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_06 6
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_07 7
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_08 8
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_09 9

#define ORDER_PP_NAT_EAT(d) ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT_B)
#define ORDER_PP_NAT_EAT_B(d) ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT)

#define ORDER_PP_NAT_FALSE(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8false,NAT_ESLAF)
#define ORDER_PP_NAT_ESLAF(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8false,NAT_FALSE)

#define ORDER_PP_NAT_IS_0(d) ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_NAT_IS_0_##d,ORDER_PP_NAT_FALSE)
#define ORDER_PP_NAT_IS_0_00(P,t,...) P##t
#define ORDER_PP_NAT_IS_0_01(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_02(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_03(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_04(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_05(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_06(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_07(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_08(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_0_09(P,t,...) P##__VA_ARGS__

#define ORDER_PP_NAT_IS_LESS_10(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8true,ORDER_PP_NAT_FALSE)
#define ORDER_PP_NAT_IS_LESS_100(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8true,NAT_IS_LESS_10)

#define ORDER_PP_NAT_IS_SENTINEL_0(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_1(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_2(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_3(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_4(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_5(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_6(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_7(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_8(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_9(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_00(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_01(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_02(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_03(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_04(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_05(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_06(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_07(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_08(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_09(P,t,...) P##t

#define ORDER_PP_NAT_DIV_10(d) ORDER_PP_NAT_IS_SENTINEL_##d(,(00),)
#define ORDER_PP_NAT_DIV_100(d) ORDER_PP_NAT_IS_SENTINEL_##d(,(00),ORDER_PP_NAT_DIV_10)

#define ORDER_PP_NAT_MOD_10_LIT(d) ORDER_PP_NAT_DIGIT_##d ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT)
#define ORDER_PP_NAT_MOD_100_LIT(d) ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_RPAREN,ORDER_PP_NAT_MOD_100_LIT_B)
#define ORDER_PP_NAT_MOD_100_LIT_B(d) ORDER_PP_NAT_DIGIT_EXCEPT_0_##d)ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT)

#define ORDER_PP_DEF_0 8DEF_CONST,(00),
#define ORDER_PP_DEF_1 8DEF_CONST,(01),
#define ORDER_PP_DEF_2 8DEF_CONST,(02),
#define ORDER_PP_DEF_3 8DEF_CONST,(03),
#define ORDER_PP_DEF_4 8DEF_CONST,(04),
#define ORDER_PP_DEF_5 8DEF_CONST,(05),
#define ORDER_PP_DEF_6 8DEF_CONST,(06),
#define ORDER_PP_DEF_7 8DEF_CONST,(07),
// See "quote.h"
#define ORDER_PP_DEF_9 8DEF_CONST,(09),
#define ORDER_PP_DEF_10 8DEF_CONST,(0)(01),
#define ORDER_PP_DEF_11 8DEF_CONST,(1)(01),
#define ORDER_PP_DEF_12 8DEF_CONST,(2)(01),
#define ORDER_PP_DEF_13 8DEF_CONST,(3)(01),
#define ORDER_PP_DEF_14 8DEF_CONST,(4)(01),
#define ORDER_PP_DEF_15 8DEF_CONST,(5)(01),
#define ORDER_PP_DEF_16 8DEF_CONST,(6)(01),
#define ORDER_PP_DEF_17 8DEF_CONST,(7)(01),
#define ORDER_PP_DEF_18 8DEF_CONST,(8)(01),
#define ORDER_PP_DEF_19 8DEF_CONST,(9)(01),
#define ORDER_PP_DEF_20 8DEF_CONST,(0)(02),
#define ORDER_PP_DEF_21 8DEF_CONST,(1)(02),
#define ORDER_PP_DEF_22 8DEF_CONST,(2)(02),
#define ORDER_PP_DEF_23 8DEF_CONST,(3)(02),
#define ORDER_PP_DEF_24 8DEF_CONST,(4)(02),
#define ORDER_PP_DEF_25 8DEF_CONST,(5)(02),
#define ORDER_PP_DEF_26 8DEF_CONST,(6)(02),
#define ORDER_PP_DEF_27 8DEF_CONST,(7)(02),
#define ORDER_PP_DEF_28 8DEF_CONST,(8)(02),
#define ORDER_PP_DEF_29 8DEF_CONST,(9)(02),
#define ORDER_PP_DEF_30 8DEF_CONST,(0)(03),
#define ORDER_PP_DEF_31 8DEF_CONST,(1)(03),
#define ORDER_PP_DEF_32 8DEF_CONST,(2)(03),
#define ORDER_PP_DEF_33 8DEF_CONST,(3)(03),
#define ORDER_PP_DEF_34 8DEF_CONST,(4)(03),
#define ORDER_PP_DEF_35 8DEF_CONST,(5)(03),
#define ORDER_PP_DEF_36 8DEF_CONST,(6)(03),
#define ORDER_PP_DEF_37 8DEF_CONST,(7)(03),
#define ORDER_PP_DEF_38 8DEF_CONST,(8)(03),
#define ORDER_PP_DEF_39 8DEF_CONST,(9)(03),
#define ORDER_PP_DEF_40 8DEF_CONST,(0)(04),
#define ORDER_PP_DEF_41 8DEF_CONST,(1)(04),
#define ORDER_PP_DEF_42 8DEF_CONST,(2)(04),
#define ORDER_PP_DEF_43 8DEF_CONST,(3)(04),
#define ORDER_PP_DEF_44 8DEF_CONST,(4)(04),
#define ORDER_PP_DEF_45 8DEF_CONST,(5)(04),
#define ORDER_PP_DEF_46 8DEF_CONST,(6)(04),
#define ORDER_PP_DEF_47 8DEF_CONST,(7)(04),
#define ORDER_PP_DEF_48 8DEF_CONST,(8)(04),
#define ORDER_PP_DEF_49 8DEF_CONST,(9)(04),
#define ORDER_PP_DEF_50 8DEF_CONST,(0)(05),
#define ORDER_PP_DEF_51 8DEF_CONST,(1)(05),
#define ORDER_PP_DEF_52 8DEF_CONST,(2)(05),
#define ORDER_PP_DEF_53 8DEF_CONST,(3)(05),
#define ORDER_PP_DEF_54 8DEF_CONST,(4)(05),
#define ORDER_PP_DEF_55 8DEF_CONST,(5)(05),
#define ORDER_PP_DEF_56 8DEF_CONST,(6)(05),
#define ORDER_PP_DEF_57 8DEF_CONST,(7)(05),
#define ORDER_PP_DEF_58 8DEF_CONST,(8)(05),
#define ORDER_PP_DEF_59 8DEF_CONST,(9)(05),
#define ORDER_PP_DEF_60 8DEF_CONST,(0)(06),
#define ORDER_PP_DEF_61 8DEF_CONST,(1)(06),
#define ORDER_PP_DEF_62 8DEF_CONST,(2)(06),
#define ORDER_PP_DEF_63 8DEF_CONST,(3)(06),
#define ORDER_PP_DEF_64 8DEF_CONST,(4)(06),
#define ORDER_PP_DEF_65 8DEF_CONST,(5)(06),
#define ORDER_PP_DEF_66 8DEF_CONST,(6)(06),
#define ORDER_PP_DEF_67 8DEF_CONST,(7)(06),
#define ORDER_PP_DEF_68 8DEF_CONST,(8)(06),
#define ORDER_PP_DEF_69 8DEF_CONST,(9)(06),
#define ORDER_PP_DEF_70 8DEF_CONST,(0)(07),
#define ORDER_PP_DEF_71 8DEF_CONST,(1)(07),
#define ORDER_PP_DEF_72 8DEF_CONST,(2)(07),
#define ORDER_PP_DEF_73 8DEF_CONST,(3)(07),
#define ORDER_PP_DEF_74 8DEF_CONST,(4)(07),
#define ORDER_PP_DEF_75 8DEF_CONST,(5)(07),
#define ORDER_PP_DEF_76 8DEF_CONST,(6)(07),
#define ORDER_PP_DEF_77 8DEF_CONST,(7)(07),
#define ORDER_PP_DEF_78 8DEF_CONST,(8)(07),
#define ORDER_PP_DEF_79 8DEF_CONST,(9)(07),
#define ORDER_PP_DEF_80 8DEF_CONST,(0)(08),
#define ORDER_PP_DEF_81 8DEF_CONST,(1)(08),
#define ORDER_PP_DEF_82 8DEF_CONST,(2)(08),
#define ORDER_PP_DEF_83 8DEF_CONST,(3)(08),
#define ORDER_PP_DEF_84 8DEF_CONST,(4)(08),
#define ORDER_PP_DEF_85 8DEF_CONST,(5)(08),
#define ORDER_PP_DEF_86 8DEF_CONST,(6)(08),
#define ORDER_PP_DEF_87 8DEF_CONST,(7)(08),
#define ORDER_PP_DEF_88 8DEF_CONST,(8)(08),
#define ORDER_PP_DEF_89 8DEF_CONST,(9)(08),
#define ORDER_PP_DEF_90 8DEF_CONST,(0)(09),
#define ORDER_PP_DEF_91 8DEF_CONST,(1)(09),
#define ORDER_PP_DEF_92 8DEF_CONST,(2)(09),
#define ORDER_PP_DEF_93 8DEF_CONST,(3)(09),
#define ORDER_PP_DEF_94 8DEF_CONST,(4)(09),
#define ORDER_PP_DEF_95 8DEF_CONST,(5)(09),
#define ORDER_PP_DEF_96 8DEF_CONST,(6)(09),
#define ORDER_PP_DEF_97 8DEF_CONST,(7)(09),
#define ORDER_PP_DEF_98 8DEF_CONST,(8)(09),
#define ORDER_PP_DEF_99 8DEF_CONST,(9)(09),
#define ORDER_PP_DEF_100 8DEF_CONST,(0)(0)(01),

#define ORDER_PP_NAT_CHAOS_BOP(P,op,l,r) ORDER_PP_FZ(SEQ_OF_DIGITS_TO_NAT,(,CHAOS_PP_##op##_AP(ORDER_PP_NAT_TO_SEQ_OF_DIGITS(,P##l),ORDER_PP_NAT_TO_SEQ_OF_DIGITS(,P##r))))
#define ORDER_PP_NAT_CHAOS_BPR(P,pr,l,r) ORDER_PP_OVERLOAD(NAT_CHAOS_BPR,CHAOS_PP_##pr##_AP(ORDER_PP_NAT_TO_SEQ_OF_DIGITS(,P##l),ORDER_PP_NAT_TO_SEQ_OF_DIGITS(,P##r)))
#define ORDER_PP_NAT_CHAOS_BPR_0 8false
#define ORDER_PP_NAT_CHAOS_BPR_1 8true

#endif
