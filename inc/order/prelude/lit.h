// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8is_lit ORDER_PP_FN_CM(1,8IS_LIT)
#define ORDER_PP_8IS_LIT(P,l,...) (,ORDER_PP_IS_SYM(,P##l)(,ORDER_PP_FX(IS_TUPLE_SIZE_1,(,ORDER_PP_OVERLOAD(TUPLE_DROP,P##l)(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,)))(,8false,8true),8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_add ORDER_PP_OP_LEFT_NATIVE(9LIT_PLUS)

#define ORDER_PP_DEF_8lit_dec ORDER_PP_FN_CM(1,8LIT_DEC)
#define ORDER_PP_8LIT_DEC(P,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_DEC(,P##l)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_div ORDER_PP_OP_LEFT_NATIVE(9LIT_QUOTIENT)

#define ORDER_PP_DEF_8lit_equal ORDER_PP_FN_NATIVE(2,9LIT_EQUAL)
#define ORDER_PP_9LIT_EQUAL(P,l,r) ORDER_PP_TEST(,ORDER_PP_SYM_##x(ORDER_PP_SYM_##y)(,,),8false,8true)

#define ORDER_PP_DEF_8lit_greater ORDER_PP_FN_NATIVE(2,9LIT_GREATER)
#define ORDER_PP_9LIT_GREATER(P,l,r) ORDER_PP_LIT_LESS(,P##r,P##l)(,8true,8false)

#define ORDER_PP_DEF_8lit_greater_eq ORDER_PP_FN_NATIVE(2,9LIT_GREATER_EQ)
#define ORDER_PP_9LIT_GREATER_EQ(P,l,r) ORDER_PP_LIT_LESS(,P##l,P##r)(,8false,8true)

#define ORDER_PP_DEF_8lit_inc ORDER_PP_FN_CM(1,8LIT_INC)
#define ORDER_PP_9LIT_INC(P,l,...) (,ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_INC(,P##l)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_is_0 ORDER_PP_FN_CM(1,8LIT_IS_0)
#define ORDER_PP_8LIT_IS_0(P,l,...) (,ORDER_PP_LIT_IS_0(,P##l)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_isnt_0 ORDER_PP_FN_CM(1,8LIT_ISNT_0)
#define ORDER_PP_8LIT_ISNT_0(P,l,...) (,ORDER_PP_LIT_IS_0(,P##l)(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8lit_less ORDER_PP_FN_NATIVE(2,9LIT_LESS)
#define ORDER_PP_9LIT_LESS(P,l,r) ORDER_PP_LIT_LESS(,P##l,P##r)(,8true,8false)

#define ORDER_PP_DEF_8lit_less_eq ORDER_PP_FN_NATIVE(2,9LIT_LESS_EQ)
#define ORDER_PP_9LIT_LESS_EQ(P,l,r) ORDER_PP_LIT_LESS(,P##r,P##l)(,8false,8true)

#define ORDER_PP_DEF_8lit_minus ORDER_PP_FN_NATIVE(2,9LIT_MINUS)
#define ORDER_PP_9LIT_MINUS(P,l,r) ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_MINUS(,P##l,P##r))

#define ORDER_PP_DEF_8lit_mul ORDER_PP_OP_LEFT_NATIVE(9LIT_TIMES)

#define ORDER_PP_DEF_8lit_not_eq ORDER_PP_FN_NATIVE(2,9LIT_NOT_EQ)
#define ORDER_PP_9LIT_NOT_EQ(P,l,r) ORDER_PP_TEST(,ORDER_PP_SYM_##x(ORDER_PP_SYM_##y)(,,),8true,8false)

#define ORDER_PP_DEF_8lit_plus ORDER_PP_FN_NATIVE(2,9LIT_PLUS)
#define ORDER_PP_9LIT_PLUS(P,l,r) ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_PLUS(,P##l,P##r))

#define ORDER_PP_DEF_8lit_quotient ORDER_PP_FN_NATIVE(2,9LIT_QUOTIENT)
#define ORDER_PP_9LIT_QUOTIENT ORDER_PP_LIT_QUOTIENT

#define ORDER_PP_DEF_8lit_remainder ORDER_PP_FN_NATIVE(2,9LIT_REMAINDER)
#define ORDER_PP_9LIT_REMAINDER ORDER_PP_LIT_REMAINDER

#define ORDER_PP_DEF_8lit_sub ORDER_PP_OP_LEFT_NATIVE(9LIT_MINUS)

#define ORDER_PP_DEF_8lit_times ORDER_PP_FN_NATIVE(2,9LIT_TIMES)
#define ORDER_PP_9LIT_TIMES(P,l,r) ORDER_PP_LIT_ASSERT(ORDER_PP_LIT_TIMES(,P##l,P##r))

#define ORDER_PP_DEF_8lit_to_nat ORDER_PP_FN_CM(1,8LIT_TO_NAT)
#define ORDER_PP_8LIT_TO_NAT(P,x,...) (,ORDER_PP_LIT_TO_NAT(,P##x),P##__VA_ARGS__)

// Macros for numeric operations

#define ORDER_PP_LIT_EQUAL            ORDER_PP_SAME
#define ORDER_PP_LIT_LESS(P,l,r)      ORDER_PP_IF(ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##r,(,ORDER_PP_OVERLOAD(TUPLE_DROP,ORDER_PP_LIT_SUB_100(,P##l))(,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0),,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,)),)))
#define ORDER_PP_LIT_MINUS(P,l,r)     ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##r,(,ORDER_PP_OVERLOAD(TUPLE_DROP,ORDER_PP_LIT_SUB_100(,P##l))(,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,)()1,()2,()3,()4,()5,()6,()7,()8,()9,()10,()11,()12,()13,()14,()15,()16,()17,()18,()19,()20,()21,()22,()23,()24,()25,()26,()27,()28,()29,()30,()31,()32,()33,()34,()35,()36,()37,()38,()39,()40,()41,()42,()43,()44,()45,()46,()47,()48,()49,()50,()51,()52,()53,()54,()55,()56,()57,()58,()59,()60,()61,()62,()63,()64,()65,()66,()67,()68,()69,()70,()71,()72,()73,()74,()75,()76,()77,()78,()79,()80,()81,()82,()83,()84,()85,()86,()87,()88,()89,()90,()91,()92,()93,()94,()95,()96,()97,()98,()99,()100)),))
#define ORDER_PP_LIT_PLUS(P,l,r)      ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##r,(,ORDER_PP_TUPLE_DROP_##l(,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,)(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01),(1)(9)(01),(2)(9)(01),(3)(9)(01),(4)(9)(01),(5)(9)(01),(6)(9)(01),(7)(9)(01),(8)(9)(01),(9)(9)(01),(0)(0)(02))),))
#define ORDER_PP_LIT_QUOTIENT(P,l,r)  ORDER_PP_LIT_LESS(,P##l,P##r)(,0,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##r,(,ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),P##l,ORDER_PP_LIT_DIV_##l)),)))
#define ORDER_PP_LIT_REMAINDER(P,l,r) ORDER_PP_LIT_LESS(,P##l,P##r)(,P##l,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##r,(,ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,ORDER_PP_LIT_MOD_##l)),)))
#define ORDER_PP_LIT_TIMES(P,l,r)     ORDER_PP_LIT_LESS(,P##l,P##r)(,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##l,(,0,P##r,ORDER_PP_LIT_MUL_##r)),)),ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_FX(TUPLE_DROP_##r,(,0,P##l,ORDER_PP_LIT_MUL_##l)),)))

#define ORDER_PP_LIT_DEC(P,x)    ORDER_PP_FY(TUPLE_AT_0,(,ORDER_PP_TUPLE_DROP_##x(,()1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99),))
#define ORDER_PP_LIT_INC(P,x)    ORDER_PP_FY(TUPLE_AT_0,(,ORDER_PP_TUPLE_DROP_##x(,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01)),))
#define ORDER_PP_LIT_IS_0(P,x)   ORDER_PP_SAME(,P##x,0)
#define ORDER_PP_LIT_TO_LIT(P,x) P##x
#define ORDER_PP_LIT_TO_NAT(P,x) ORDER_PP_FY(TUPLE_AT_0,(,ORDER_PP_TUPLE_DROP_##x(,(00),(01),(02),(03),(04),(05),(06),(07),(08),(09),(0)(01),(1)(01),(2)(01),(3)(01),(4)(01),(5)(01),(6)(01),(7)(01),(8)(01),(9)(01),(0)(02),(1)(02),(2)(02),(3)(02),(4)(02),(5)(02),(6)(02),(7)(02),(8)(02),(9)(02),(0)(03),(1)(03),(2)(03),(3)(03),(4)(03),(5)(03),(6)(03),(7)(03),(8)(03),(9)(03),(0)(04),(1)(04),(2)(04),(3)(04),(4)(04),(5)(04),(6)(04),(7)(04),(8)(04),(9)(04),(0)(05),(1)(05),(2)(05),(3)(05),(4)(05),(5)(05),(6)(05),(7)(05),(8)(05),(9)(05),(0)(06),(1)(06),(2)(06),(3)(06),(4)(06),(5)(06),(6)(06),(7)(06),(8)(06),(9)(06),(0)(07),(1)(07),(2)(07),(3)(07),(4)(07),(5)(07),(6)(07),(7)(07),(8)(07),(9)(07),(0)(08),(1)(08),(2)(08),(3)(08),(4)(08),(5)(08),(6)(08),(7)(08),(8)(08),(9)(08),(0)(09),(1)(09),(2)(09),(3)(09),(4)(09),(5)(09),(6)(09),(7)(09),(8)(09),(9)(09),(0)(0)(01)),))

#define ORDER_PP_LIT_SUB_100(P,x) ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_TUPLE_DROP_##x(,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0),))

// Detail

#define ORDER_PP_LIT_ASSERT(x) ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST x,ORDER_PP_ERROR_RESULT_IS_NOT_A_LITERAL(!),x)

#define ORDER_PP_ERROR_RESULT_IS_NOT_A_LITERAL()
#define ORDER_PP_ERROR_DIVISION_BY_ZERO()

#include "order/prelude/lit_tables.h"
