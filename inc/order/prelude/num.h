// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8add ORDER_PP_OP_LEFT_CM(8PLUS)

#define ORDER_PP_DEF_8dec ORDER_PP_FN_CM(1,8DEC)
#define ORDER_PP_8DEC(P,x,...) (,ORDER_PP_NUM_UOP(,DEC,P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8div ORDER_PP_OP_LEFT_CM(8DIV)
#define ORDER_PP_8DIV(P,r,l,...) (,ORDER_PP_NUM_BOP(,QUOTIENT,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8equal ORDER_PP_FN_CM(2,8EQUAL)
#define ORDER_PP_8EQUAL(P,l,r,...) (,ORDER_PP_NUM_BOP(,EQUAL,P##l,P##r)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8greater ORDER_PP_FN_CM(2,8GREATER)
#define ORDER_PP_8GREATER(P,l,r,...) (,ORDER_PP_NUM_BOP(,LESS,P##r,P##l)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8greater_eq ORDER_PP_FN_CM(2,8GREATER_EQ)
#define ORDER_PP_8GREATER_EQ(P,l,r,...) (,ORDER_PP_NUM_BOP(,LESS,P##l,P##r)(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8inc ORDER_PP_FN_CM(1,8INC)
#define ORDER_PP_8INC(P,l,...) (,ORDER_PP_NUM_UOP(,INC,P##l),P##__VA_ARGS__)

#define ORDER_PP_DEF_8is_0 ORDER_PP_FN_CM(1,8IS_0)
#define ORDER_PP_8IS_0(P,l,...) (,ORDER_PP_NUM_UOP(,IS_0,P##l)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8isnt_0 ORDER_PP_FN_CM(1,8ISNT_0)
#define ORDER_PP_8ISNT_0(P,l,...) (,ORDER_PP_NUM_UOP(,IS_0,P##l)(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8less ORDER_PP_FN_CM(2,8LESS)
#define ORDER_PP_8LESS(P,l,r,...) (,ORDER_PP_NUM_BOP(,LESS,P##l,P##r)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8less_eq ORDER_PP_FN_CM(2,8LESS_EQ)
#define ORDER_PP_8LESS_EQ(P,l,r,...) (,ORDER_PP_NUM_BOP(,LESS,P##r,P##l)(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8minus ORDER_PP_FN_CM(2,8MINUS)
#define ORDER_PP_8MINUS(P,l,r,...) (,ORDER_PP_NUM_BOP(,MINUS,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8mul ORDER_PP_OP_LEFT_CM(8TIMES)

#define ORDER_PP_DEF_8not_eq ORDER_PP_FN_CM(2,8NOT_EQ)
#define ORDER_PP_8NOT_EQ(P,l,r,...) (,ORDER_PP_NUM_BOP(,EQUAL,P##l,P##r)(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8plus ORDER_PP_FN_CM(2,8PLUS)
#define ORDER_PP_8PLUS(P,l,r,...) (,ORDER_PP_NUM_BOP(,PLUS,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8quotient ORDER_PP_FN_CM(2,8QUOTIENT)
#define ORDER_PP_8QUOTIENT(P,l,r,...) (,ORDER_PP_NUM_BOP(,QUOTIENT,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8remainder ORDER_PP_FN_CM(2,8REMAINDER)
#define ORDER_PP_8REMAINDER(P,l,r,...) (,ORDER_PP_NUM_BOP(,REMAINDER,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8sub ORDER_PP_OP_LEFT_CM(8SUB)
#define ORDER_PP_8SUB(P,r,l,...) (,ORDER_PP_NUM_BOP(,MINUS,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8times ORDER_PP_FN_CM(2,8TIMES)
#define ORDER_PP_8TIMES(P,l,r,...) (,ORDER_PP_NUM_BOP(,TIMES,P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_DEF_8to_lit ORDER_PP_FN_CM(1,8TO_LIT)
#define ORDER_PP_8TO_LIT(P,x,...) (,ORDER_PP_NUM_UOP(,TO_LIT,P##x),P##__VA_ARGS__)

// Detail

#define ORDER_PP_NUM_UOP(P,op,x) ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_##op,LIT_##op)(,P##x)

#define ORDER_PP_NUM_BOP(P,op,x,y) ORDER_PP_SELECT_4(ORDER_PP_,IS_EDIBLE(,P##x),IS_EDIBLE(,P##y))(ORDER_PP_NUM_BOP_,NAT_NAT,NAT_LIT,LIT_NAT,LIT_LIT)(,P##op,P##x,P##y)
#define ORDER_PP_NUM_BOP_NAT_NAT(P,op,x,y) ORDER_PP_NAT_##op(,P##x,P##y)
#define ORDER_PP_NUM_BOP_NAT_LIT(P,op,x,y) ORDER_PP_FW(NAT_##op,(,P##x,ORDER_PP_LIT_TO_NAT(,P##y)))
#define ORDER_PP_NUM_BOP_LIT_NAT(P,op,x,y) ORDER_PP_FW(NAT_##op,(,ORDER_PP_LIT_TO_NAT(,P##x),P##y))
#define ORDER_PP_NUM_BOP_LIT_LIT(P,op,x,y) ORDER_PP_LIT_##op(,P##x,P##y)