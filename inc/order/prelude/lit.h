#ifndef ORDER_PRELUDE_LIT_H_VAJK20040620
#define ORDER_PRELUDE_LIT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8is_lit ORDER_PP_FN_CM(1,8IS_LIT)
#define ORDER_PP_8IS_LIT(P,l,...) (,ORDER_PP_IS_SYM(,P##l)(,ORDER_PP_TEST(,ORDER_PP_FX(REM,(ORDER_PP_PRIMITIVE_CAT(ORDER_PP_LIT_UOP_,P##l))),8true,8false),8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_add ORDER_PP_OP_LEFT_CM(8LIT_PLUS)

#define ORDER_PP_DEF_8lit_dec ORDER_PP_FN_CM(1,8LIT_DEC)
#define ORDER_PP_8LIT_DEC(P,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_DEC(ORDER_PP_LIT_UOP_##l)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_div ORDER_PP_OP_LEFT_CM(8LIT_DIV)
#define ORDER_PP_8LIT_DIV(P,r,l,...) (,ORDER_PP_LIT_GET_QUOTIENT(ORDER_PP_LIT_BOP_##l##_##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_equal ORDER_PP_FN_CM(2,8LIT_EQUAL)
#define ORDER_PP_8LIT_EQUAL(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_greater ORDER_PP_FN_CM(2,8LIT_GREATER)
#define ORDER_PP_8LIT_GREATER(P,l,r,...) (,ORDER_PP_LIT_GET_LESS(ORDER_PP_LIT_BOP_##r##_##l),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_greater_eq ORDER_PP_FN_CM(2,8LIT_GREATER_EQ)
#define ORDER_PP_8LIT_GREATER_EQ(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8true,ORDER_PP_LIT_GET_LESS(ORDER_PP_LIT_BOP_##r##_##l)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_inc ORDER_PP_FN_CM(1,8LIT_INC)
#define ORDER_PP_8LIT_INC(P,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_INC(ORDER_PP_LIT_UOP_##l)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_is_0 ORDER_PP_FN_CM(1,8LIT_IS_0)
#define ORDER_PP_8LIT_IS_0(P,l,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_0_##l(,),8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_isnt_0 ORDER_PP_FN_CM(1,8LIT_ISNT_0)
#define ORDER_PP_8LIT_ISNT_0(P,l,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_0_##l(,),8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_less ORDER_PP_FN_CM(2,8LIT_LESS)
#define ORDER_PP_8LIT_LESS(P,l,r,...) (,ORDER_PP_LIT_GET_LESS(ORDER_PP_LIT_BOP_##l##_##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_less_eq ORDER_PP_FN_CM(2,8LIT_LESS_EQ)
#define ORDER_PP_8LIT_LESS_EQ(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8true,ORDER_PP_LIT_GET_LESS(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_minus ORDER_PP_FN_CM(2,8LIT_MINUS)
#define ORDER_PP_8LIT_MINUS(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_MINUS(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_mul ORDER_PP_OP_LEFT_CM(8LIT_TIMES)

#define ORDER_PP_DEF_8lit_not_eq ORDER_PP_FN_CM(2,8LIT_NOT_EQ)
#define ORDER_PP_8LIT_NOT_EQ(P,l,r,...) (,ORDER_PP_TEST(,ORDER_PP_SYM_##l##_##r(,),8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_plus ORDER_PP_FN_CM(2,8LIT_PLUS)
#define ORDER_PP_8LIT_PLUS(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_PLUS(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_quotient ORDER_PP_FN_CM(2,8LIT_QUOTIENT)
#define ORDER_PP_8LIT_QUOTIENT(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_QUOTIENT(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_remainder ORDER_PP_FN_CM(2,8LIT_REMAINDER)
#define ORDER_PP_8LIT_REMAINDER(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_REMAINDER(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_sub ORDER_PP_OP_LEFT_CM(8LIT_SUB)
#define ORDER_PP_8LIT_SUB(P,r,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_MINUS(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_times ORDER_PP_FN_CM(2,8LIT_TIMES)
#define ORDER_PP_8LIT_TIMES(P,l,r,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_GET_TIMES(ORDER_PP_LIT_BOP_##l##_##r)),P##__VA_ARGS__)

// `8lit_to_nat(l)' converts the signless decimal literal `l' in the
// range $[0,100]$ to the internal natural number representation of
// the interpreter.
//
// For example,
//
//   8nat_to_lit(8nat_inc(8lit_to_nat(8quote(56)))) ==> 57
#define ORDER_PP_DEF_8lit_to_nat ORDER_PP_FN_CM(1,8LIT_TO_NAT)
#define ORDER_PP_8LIT_TO_NAT(P,l,...) (,ORDER_PP_LIT_GET_TO_NAT(ORDER_PP_LIT_UOP_##l),P##__VA_ARGS__)

// Macros for numeric operations

#define ORDER_PP_LIT_EQUAL(P,l,r)     ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_##l##_##r(,),8true,8false)
#define ORDER_PP_LIT_LESS(P,l,r)      ORDER_PP_CAT(ORDER_PP_IF_,ORDER_PP_LIT_GET_LESS(ORDER_PP_LIT_BOP_##l##_##r))
#define ORDER_PP_LIT_MINUS(P,l,r)     ORDER_PP_LIT_GET_MINUS(ORDER_PP_LIT_BOP_##l##_##r)
#define ORDER_PP_LIT_PLUS(P,l,r)      ORDER_PP_LIT_GET_PLUS(ORDER_PP_LIT_BOP_##l##_##r)
#define ORDER_PP_LIT_QUOTIENT(P,l,r)  ORDER_PP_LIT_GET_QUOTIENT(ORDER_PP_LIT_BOP_##l##_##r)
#define ORDER_PP_LIT_REMAINDER(P,l,r) ORDER_PP_LIT_GET_REMAINDER(ORDER_PP_LIT_BOP_##l##_##r)
#define ORDER_PP_LIT_TIMES(P,l,r)     ORDER_PP_LIT_GET_TIMES(ORDER_PP_LIT_BOP_##l##_##r)

#define ORDER_PP_LIT_DEC(P,x)    ORDER_PP_LIT_GET_DEC(ORDER_PP_LIT_UOP_##x)
#define ORDER_PP_LIT_INC(P,x)    ORDER_PP_LIT_GET_INC(ORDER_PP_LIT_UOP_##x)
#define ORDER_PP_LIT_IS_0(P,x)   ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_0_##x(,),8true,8false)
#define ORDER_PP_LIT_TO_LIT(P,x) P##x
#define ORDER_PP_LIT_TO_NAT(P,x) ORDER_PP_LIT_GET_TO_NAT(ORDER_PP_LIT_UOP_##x)

// Detail

#define ORDER_PP_LIT_GET_PLUS(r)      ORDER_PP_TUPLE_AT_0(,r,)
#define ORDER_PP_LIT_GET_MINUS(r)     ORDER_PP_TUPLE_AT_1(,r,)
#define ORDER_PP_LIT_GET_TIMES(r)     ORDER_PP_TUPLE_AT_2(,r,)
#define ORDER_PP_LIT_GET_QUOTIENT(r)  ORDER_PP_TUPLE_AT_3(,r,)
#define ORDER_PP_LIT_GET_REMAINDER(r) ORDER_PP_TUPLE_AT_4(,r,)
#define ORDER_PP_LIT_GET_LESS(r)      ORDER_PP_TUPLE_AT_5(,r,)

#define ORDER_PP_LIT_GET_TO_NAT(x) ORDER_PP_TUPLE_AT_0(,x,)
#define ORDER_PP_LIT_GET_INC(x)    ORDER_PP_TUPLE_AT_1(,x,)
#define ORDER_PP_LIT_GET_DEC(x)    ORDER_PP_TUPLE_AT_2(,x,)

#define ORDER_PP_LIT_ASSERT(x) ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST x,ORDER_PP_ERROR_RESULT_IS_NOT_A_LITERAL(!),x)

#define ORDER_PP_ERROR_RESULT_IS_NOT_A_LITERAL()
#define ORDER_PP_ERROR_DIVISION_BY_ZERO()

#include "order/prelude/lit_tables.h"

#endif
