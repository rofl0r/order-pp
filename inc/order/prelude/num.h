// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8add ORDER_PP_OP_LEFT_NATIVE(9PLUS,0IS_NUM)

#define ORDER_PP_DEF_8dec ORDER_PP_FN_CM(1,8DEC,0IS_NUM)
#define ORDER_PP_8DEC(P,x,...) (,ORDER_PP_NUM_DEC(,P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8div ORDER_PP_OP_LEFT_NATIVE(9QUOTIENT,0IS_NUM)

#define ORDER_PP_DEF_8equal ORDER_PP_FN_NATIVE(2,9EQUAL,0IS_NUM,0IS_NUM)
#define ORDER_PP_9EQUAL(P,l,r) ORDER_PP_NUM_EQUAL(,P##l,P##r)(,8true,8false)

#define ORDER_PP_DEF_8greater ORDER_PP_FN_NATIVE(2,9GREATER,0IS_NUM,0IS_NUM)
#define ORDER_PP_9GREATER(P,l,r) ORDER_PP_NUM_LESS(,P##r,P##l)(,8true,8false)

#define ORDER_PP_DEF_8greater_eq ORDER_PP_FN_NATIVE(2,9GREATER_EQ,0IS_NUM,0IS_NUM)
#define ORDER_PP_9GREATER_EQ(P,l,r) ORDER_PP_NUM_LESS(,P##l,P##r)(,8false,8true)

#define ORDER_PP_DEF_8inc ORDER_PP_FN_CM(1,8INC,0IS_NUM)
#define ORDER_PP_8INC(P,l,...) (,ORDER_PP_NUM_INC(,P##l),P##__VA_ARGS__)

#define ORDER_PP_DEF_8is_0 ORDER_PP_FN_CM(1,8IS_0,0IS_NUM)
#define ORDER_PP_8IS_0(P,l,...) (,ORDER_PP_NUM_IS_0(,P##l)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8isnt_0 ORDER_PP_FN_CM(1,8ISNT_0,0IS_NUM)
#define ORDER_PP_8ISNT_0(P,l,...) (,ORDER_PP_NUM_IS_0(,P##l)(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8less ORDER_PP_FN_NATIVE(2,9LESS,0IS_NUM,0IS_NUM)
#define ORDER_PP_9LESS(P,l,r) ORDER_PP_NUM_LESS(,P##l,P##r)(,8true,8false)

#define ORDER_PP_DEF_8less_eq ORDER_PP_FN_NATIVE(2,9LESS_EQ,0IS_NUM,0IS_NUM)
#define ORDER_PP_9LESS_EQ(P,l,r) ORDER_PP_NUM_LESS(,P##r,P##l)(,8false,8true)

#define ORDER_PP_DEF_8minus ORDER_PP_FN_NATIVE(2,9MINUS,0IS_NUM,0IS_NUM)
#define ORDER_PP_9MINUS(P,l,r) ORDER_PP_NUM_MINUS(,P##l,P##r)

#define ORDER_PP_DEF_8mul ORDER_PP_OP_LEFT_NATIVE(9TIMES,0IS_NUM)

#define ORDER_PP_DEF_8not_eq ORDER_PP_FN_NATIVE(2,9NOT_EQ,0IS_NUM,0IS_NUM)
#define ORDER_PP_9NOT_EQ(P,l,r) ORDER_PP_NUM_EQUAL(,P##l,P##r)(,8false,8true)

#define ORDER_PP_DEF_8plus ORDER_PP_FN_NATIVE(2,9PLUS,0IS_NUM,0IS_NUM)
#define ORDER_PP_9PLUS ORDER_PP_NUM_PLUS

// TBD: Optimize 8pow
#define ORDER_PP_DEF_8pow                                       \
ORDER_PP_FN(8fn(8B, 8E,                                         \
                8cond((8is_0(8E),                               \
                       1)                                       \
                      (8equal(8E, 1),                           \
                       8B)                                      \
                      (8else,                                   \
                       8let((8R, 8pow(8mul(8B, 8B),             \
                                      8div(8E, 2))),            \
                            8if(8is_0(8remainder(8E, 2)),       \
                                8R,                             \
                                8mul(8R, 8B)))))))

#define ORDER_PP_DEF_8quotient ORDER_PP_FN_NATIVE(2,9QUOTIENT,0IS_NUM,0IS_NUM)
#define ORDER_PP_9QUOTIENT ORDER_PP_NUM_QUOTIENT

#define ORDER_PP_DEF_8remainder ORDER_PP_FN_NATIVE(2,9REMAINDER,0IS_NUM,0IS_NUM)
#define ORDER_PP_9REMAINDER ORDER_PP_NUM_REMAINDER

#define ORDER_PP_DEF_8sub ORDER_PP_OP_LEFT_NATIVE(9MINUS,0IS_NUM)

#define ORDER_PP_DEF_8times ORDER_PP_FN_NATIVE(2,9TIMES,0IS_NUM,0IS_NUM)
#define ORDER_PP_9TIMES ORDER_PP_NUM_TIMES

#define ORDER_PP_DEF_8to_lit ORDER_PP_FN_CM(1,8TO_LIT,0IS_NUM)
#define ORDER_PP_8TO_LIT(P,x,...) (,ORDER_PP_NUM_TO_LIT(,P##x),P##__VA_ARGS__)

// Detail

#define ORDER_PP_NUM_EQUAL(P,l,r)     ORDER_PP_NUM_BOP(,P##l,P##r)(,EQUAL,P##l,P##r)
#define ORDER_PP_NUM_LESS(P,l,r)      ORDER_PP_NUM_BOP(,P##l,P##r)(,LESS,P##l,P##r)
#define ORDER_PP_NUM_MINUS(P,l,r)     ORDER_PP_NUM_BOP(,P##l,P##r)(,MINUS,P##l,P##r)
#define ORDER_PP_NUM_PLUS(P,l,r)      ORDER_PP_NUM_BOP(,P##l,P##r)(,PLUS,P##l,P##r)
#define ORDER_PP_NUM_QUOTIENT(P,l,r)  ORDER_PP_NUM_BOP(,P##l,P##r)(,QUOTIENT,P##l,P##r)
#define ORDER_PP_NUM_REMAINDER(P,l,r) ORDER_PP_NUM_BOP(,P##l,P##r)(,REMAINDER,P##l,P##r)
#define ORDER_PP_NUM_TIMES(P,l,r)     ORDER_PP_NUM_BOP(,P##l,P##r)(,TIMES,P##l,P##r)

#define ORDER_PP_NUM_DEC(P,x)    ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_DEC,LIT_DEC)(,P##x)
#define ORDER_PP_NUM_INC(P,x)    ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_INC,LIT_INC)(,P##x)
#define ORDER_PP_NUM_IS_0(P,x)   ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_IS_0,LIT_IS_0)(,P##x)
#define ORDER_PP_NUM_TO_LIT(P,x) ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_TO_LIT,LIT_TO_LIT)(,P##x)
#define ORDER_PP_NUM_TO_NAT(P,x) ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_TO_NAT,LIT_TO_NAT)(,P##x)

#define ORDER_PP_NUM_UOP(P,op,x) ORDER_PP_TEST(ORDER_PP_,ORDER_PP_IS_EDIBLE_TEST P##x,NAT_##op,LIT_##op)(,P##x)

#define ORDER_PP_NUM_BOP(P,l,r) ORDER_PP_CAT(ORDER_PP_IS_EDIBLE(,P##l)(ORDER_PP_NUM_BOP_,NAT,LIT),ORDER_PP_IS_EDIBLE(,P##r)(,0NAT,0LIT))
#define ORDER_PP_NUM_BOP_NAT0NAT(P,op,x,y) ORDER_PP_NAT_##op(,P##x,P##y)
#define ORDER_PP_NUM_BOP_NAT0LIT(P,op,x,y) ORDER_PP_FW(NAT_##op,(,P##x,ORDER_PP_LIT_TO_NAT(,P##y)))
#define ORDER_PP_NUM_BOP_LIT0NAT(P,op,x,y) ORDER_PP_FW(NAT_##op,(,ORDER_PP_LIT_TO_NAT(,P##x),P##y))
#define ORDER_PP_NUM_BOP_LIT0LIT(P,op,x,y) ORDER_PP_LIT_##op(,P##x,P##y)
