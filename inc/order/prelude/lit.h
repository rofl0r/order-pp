#ifndef ORDER_PRELUDE_LIT_H_VAJK20040620
#define ORDER_PRELUDE_LIT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8is_lit ORDER_PP_FN_CM(1,8IS_LIT)
#define ORDER_PP_8IS_LIT(P,l,...) (,ORDER_PP_IS_SYM(,P##l)(,ORDER_PP_TEST(,ORDER_PP_FX(IS_EDIBLE_TEST,ORDER_PP_LIT_TO_NAT_##l),8true,8false),8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_add ORDER_PP_OP_LEFT_CM(8LIT_PLUS)

#define ORDER_PP_DEF_8lit_dec ORDER_PP_FN_CM(1,8LIT_DEC)
#define ORDER_PP_8LIT_DEC(P,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_DEC_##l),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_div ORDER_PP_OP_LEFT_CM(8LIT_DIV)
#define ORDER_PP_8LIT_DIV(P,r,l,...) (,ORDER_PP_LIT_QUOTIENT(,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_equal ORDER_PP_FN_CM(2,8LIT_EQUAL)
#define ORDER_PP_8LIT_EQUAL(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_greater ORDER_PP_FN_CM(2,8LIT_GREATER)
#define ORDER_PP_8LIT_GREATER(P,l,r,...) (,ORDER_PP_LIT_LESS(,P##r,P##l)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_greater_eq ORDER_PP_FN_CM(2,8LIT_GREATER_EQ)
#define ORDER_PP_8LIT_GREATER_EQ(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8true,ORDER_PP_LIT_LESS(,P##r,P##l)(,8true,8false)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_inc ORDER_PP_FN_CM(1,8LIT_INC)
#define ORDER_PP_8LIT_INC(P,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_INC_##l),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_is_0 ORDER_PP_FN_CM(1,8LIT_IS_0)
#define ORDER_PP_8LIT_IS_0(P,l,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_0_##l(,),8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_isnt_0 ORDER_PP_FN_CM(1,8LIT_ISNT_0)
#define ORDER_PP_8LIT_ISNT_0(P,l,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_0_##l(,),8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_less ORDER_PP_FN_CM(2,8LIT_LESS)
#define ORDER_PP_8LIT_LESS(P,l,r,...) (,ORDER_PP_LIT_LESS(,P##l,P##r)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_less_eq ORDER_PP_FN_CM(2,8LIT_LESS_EQ)
#define ORDER_PP_8LIT_LESS_EQ(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8true,ORDER_PP_LIT_LESS(,P##l,P##r)(,8true,8false)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_minus ORDER_PP_FN_CM(2,8LIT_MINUS)
#define ORDER_PP_8LIT_MINUS(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_MINUS(,P##l,P##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_mul ORDER_PP_OP_LEFT_CM(8LIT_TIMES)

#define ORDER_PP_DEF_8lit_not_eq ORDER_PP_FN_CM(2,8LIT_NOT_EQ)
#define ORDER_PP_8LIT_NOT_EQ(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_plus ORDER_PP_FN_CM(2,8LIT_PLUS)
#define ORDER_PP_8LIT_PLUS(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_PLUS(,P##l,P##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_quotient ORDER_PP_FN_CM(2,8LIT_QUOTIENT)
#define ORDER_PP_8LIT_QUOTIENT(P,l,r,...) (,ORDER_PP_LIT_QUOTIENT(,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_remainder ORDER_PP_FN_CM(2,8LIT_REMAINDER)
#define ORDER_PP_8LIT_REMAINDER(P,l,r,...) (,ORDER_PP_LIT_REMAINDER(,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_sub ORDER_PP_OP_LEFT_CM(8LIT_SUB)
#define ORDER_PP_8LIT_SUB(P,r,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_MINUS(,P##l,P##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_times ORDER_PP_FN_CM(2,8LIT_TIMES)
#define ORDER_PP_8LIT_TIMES(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_TIMES(,P##l,P##r)),P##__VA_ARGS__)

// `8lit_to_nat(l)' converts the signless decimal literal `l' in the
// range $[0,100]$ to the internal natural number representation of
// the interpreter.
//
// For example,
//
//   8nat_to_lit(8nat_inc(8lit_to_nat(8quote(56)))) ==> 57
#define ORDER_PP_DEF_8lit_to_nat ORDER_PP_FN_CM(1,8LIT_TO_NAT)
#define ORDER_PP_8LIT_TO_NAT(P,x,...) (,ORDER_PP_LIT_TO_NAT_##x,P##__VA_ARGS__)

// Macros for numeric operations

#define ORDER_PP_LIT_EQUAL(P,l,r)     ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_##l##_##r(,),8true,8false)
#define ORDER_PP_LIT_LESS(P,l,r)      ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_LESS_##l,)))
#define ORDER_PP_LIT_MINUS(P,l,r)     ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_LESS_##l,)))(,()P##l,ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_MINUS_##l,)))
#define ORDER_PP_LIT_PLUS(P,l,r)      ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_LESS_##l,)))(,ORDER_PP_FX(TUPLE_AT_##l,(,ORDER_PP_LIT_PLUS_##r,)),ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_PLUS_##l,)))
#define ORDER_PP_LIT_QUOTIENT(P,l,r)  ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_LESS_##l,)))(,0,ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_QUOTIENT_##l,)))
#define ORDER_PP_LIT_REMAINDER(P,l,r) ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_LESS_##l,)))(,P##l,ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_REMAINDER_##l,)))
#define ORDER_PP_LIT_TIMES(P,l,r)     ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_LESS_##l,)))(,ORDER_PP_FX(TUPLE_AT_##l,(,ORDER_PP_LIT_TIMES_##r,)),ORDER_PP_FX(TUPLE_AT_##r,(,ORDER_PP_LIT_TIMES_##l,)))

#define ORDER_PP_LIT_DEC(P,x)    ORDER_PP_LIT_DEC_##x
#define ORDER_PP_LIT_INC(P,x)    ORDER_PP_LIT_INC_##x
#define ORDER_PP_LIT_IS_0(P,x)   ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_0_##x(,),8true,8false)
#define ORDER_PP_LIT_TO_LIT(P,x) P##x
#define ORDER_PP_LIT_TO_NAT(P,x) ORDER_PP_LIT_TO_NAT_##x

// Detail

#define ORDER_PP_LIT_ASSERT(x) ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST x,ORDER_PP_ERROR_RESULT_IS_NOT_A_LITERAL(!),x)

#define ORDER_PP_ERROR_RESULT_IS_NOT_A_LITERAL()
#define ORDER_PP_ERROR_DIVISION_BY_ZERO()

#include "order/prelude/lit_tables.h"

#endif
