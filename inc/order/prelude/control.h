// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8call_cc ORDER_PP_FN_CM(1,8CALL_CC,0IS_FN)
#define ORDER_PP_8CALL_CC(P,f,...) (,(,8REPLACE_C,(,P##__VA_ARGS__)),ORDER_PP_OPEN f##P,P##__VA_ARGS__)
#define ORDER_PP_8REPLACE_C(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P)

#define ORDER_PP_DEF_8eval ORDER_PP_FN_CM(2,8EVAL,0IS_ENV,0IS_ANY)
#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8EVAL(P,t,e,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,P##__VA_ARGS__)
#else
#define ORDER_PP_8EVAL(P,t,e,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_8exit ORDER_PP_FN_CM(1,8EXIT,0IS_ANY)
#define ORDER_PP_8EXIT(P,x,...) )(,1,x##P)

#define ORDER_PP_DEF_8force ORDER_PP_FN_CM(1,8FORCE,0IS_FN)
#define ORDER_PP_8FORCE(P,p,...) (,,ORDER_PP_OPEN p##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8for_each ORDER_PP_FN_CM(4,8FOR_EACH,0IS_FN,0IS_FN,0IS_FN,0IS_ANY)
#define ORDER_PP_8FOR_EACH(P,x,o,s,c,...) (,P##x,ORDER_PP_OPEN c##P,8FOR_EACH_B,P##x,P##c,P##s,P##o,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_B(P,b,x,c,s,o,...) (,ORDER_PP_WHEN_##b(,x##P,ORDER_PP_OPEN o##P,8FOR_EACH_C,x##P,c##P,s##P,o##P),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_C(P,_,x,c,s,...) (,P##x,ORDER_PP_OPEN s##P,8FOR_EACH_D,P##c,P##s,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_D(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8FOR_EACH_B,P##x,P##c,P##__VA_ARGS__)

#define ORDER_PP_DEF_8for_each_in_range ORDER_PP_FN_CM(3,8FOR_EACH_IN_RANGE,0IS_FN,0IS_NUM,0IS_NUM)
#define ORDER_PP_8FOR_EACH_IN_RANGE(P,i1,i0,f,...) (,,ORDER_PP_FX(8FOR_EACH_IN_RANGE_B,(,ORDER_PP_NUM_LESS(,P##i0,P##i1)(ORDER_PP_8FOR_EACH_IN_RANGE_,INC,DEC)(,P##i0,P##i1))),P##f,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_INC(P,i0,i1) 8INC,P##i0,ORDER_PP_NUM_MINUS(,P##i1,P##i0)
#define ORDER_PP_8FOR_EACH_IN_RANGE_DEC(P,i0,i1) 8DEC,ORDER_PP_NUM_DEC(,P##i0),ORDER_PP_NUM_MINUS(,P##i0,P##i1)
#define ORDER_PP_8FOR_EACH_IN_RANGE_B(P,dir,i,n) ORDER_PP_SELECT_4(ORDER_PP_,IS_EDIBLE(,P##i),IS_EDIBLE(,P##n))(,ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,P##i,P##n),ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,P##i,ORDER_PP_LIT_TO_NAT(,P##n)),ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,ORDER_PP_LIT_TO_NAT(,P##i),P##n),8FOR_EACH_IN_RANGE_LIT_##dir,P##i,P##n)
#define ORDER_PP_8FOR_EACH_IN_RANGE_LIT_8DEC(P,_,i,n,f,...) (,ORDER_PP_LIT_IS_0(,P##n)(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_LIT_8DEC,ORDER_PP_LIT_DEC(,P##i),ORDER_PP_LIT_DEC(,P##n),P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_LIT_8INC(P,_,i,n,f,...) (,ORDER_PP_LIT_IS_0(,P##n)(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_LIT_8INC,ORDER_PP_LIT_INC(,P##i),ORDER_PP_LIT_DEC(,P##n),P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_NAT_8DEC(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_NAT_8DEC,ORDER_PP_NAT_PRED i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_NAT_8INC(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_NAT_8INC,ORDER_PP_NAT_SUCC i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8unless(cond,...) 8EVAL_IF,cond,8nil,ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#define ORDER_PP_DEF_8until ORDER_PP_FN_CM(3,8UNTIL,0IS_FN,0IS_FN,0IS_ANY)
#define ORDER_PP_8UNTIL(P,x,s,c,...) (,P##x,ORDER_PP_OPEN c##P,8UNTIL_B,P##x,P##c,P##s,P##__VA_ARGS__)
#define ORDER_PP_8UNTIL_B(P,b,x,c,s,...) (,P##x,ORDER_PP_UNLESS_##b(,ORDER_PP_OPEN s##P,8UNTIL_C,P##c,P##s,)P##__VA_ARGS__)
#define ORDER_PP_8UNTIL_C(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8UNTIL_B,P##x,P##c,P##__VA_ARGS__)

#define ORDER_PP_DEF_8when(cond,...) 8EVAL_IF,cond,ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),8nil,

#define ORDER_PP_DEF_8while ORDER_PP_FN_CM(3,8WHILE,0IS_FN,0IS_FN,0IS_ANY)
#define ORDER_PP_8WHILE(P,x,s,c,...) (,P##x,ORDER_PP_OPEN c##P,8WHILE_B,P##x,P##c,P##s,P##__VA_ARGS__)
#define ORDER_PP_8WHILE_B(P,b,x,c,s,...) (,P##x,ORDER_PP_WHEN_##b(,ORDER_PP_OPEN s##P,8WHILE_C,P##c,P##s,)P##__VA_ARGS__)
#define ORDER_PP_8WHILE_C(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8WHILE_B,P##x,P##c,P##__VA_ARGS__)

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_DEF_8with_assert(cond,...) 8EVAL_IF,cond,ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),8exit(8(8Assert_Failed(8with_assert(cond,__VA_ARGS__)))),
#else
#define ORDER_PP_DEF_8with_assert(cond,...) ORDER_PP_IS_TUPLE_SIZE_1(,0##__VA_ARGS__)(ORDER_PP_DEF,,_8do)(__VA_ARGS__)
#endif
