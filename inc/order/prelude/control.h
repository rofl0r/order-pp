// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8call_cc ORDER_PP_FN_CM(1,8CALL_CC)
#define ORDER_PP_8CALL_CC(P,f,...) (,(,8REPLACE_C,(,P##__VA_ARGS__)),ORDER_PP_OPEN f##P,P##__VA_ARGS__)
#define ORDER_PP_8REPLACE_C(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P)

#define ORDER_PP_DEF_8exit ORDER_PP_FN_CM(1,8EXIT)
#define ORDER_PP_8EXIT(P,x,...) ,(,1,x##P))

#define ORDER_PP_DEF_8eval ORDER_PP_FN_CM(2,8EVAL)
#define ORDER_PP_8EVAL(P,t,e,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)

#define ORDER_PP_DEF_8for_each_in_range ORDER_PP_FN_CM(3,8FOR_EACH_IN_RANGE)
#define ORDER_PP_8FOR_EACH_IN_RANGE(P,i0,i1,...) (,,ORDER_PP_FX(8FOR_EACH_IN_RANGE_B,(,ORDER_PP_NUM_BOP(,LESS,P##i0,P##i1)(ORDER_PP_8FOR_EACH_IN_RANGE_,INC,DEC)(,P##i0,P##i1))),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_INC(P,i0,i1) 8INC,P##i0,ORDER_PP_NUM_BOP(,MINUS,P##i1,P##i0)
#define ORDER_PP_8FOR_EACH_IN_RANGE_DEC(P,i0,i1) 8DEC,ORDER_PP_NUM_UOP(,DEC,P##i0),ORDER_PP_NUM_BOP(,MINUS,P##i0,P##i1)
#define ORDER_PP_8FOR_EACH_IN_RANGE_B(P,dir,i,n) ORDER_PP_SELECT_4(ORDER_PP_,IS_EDIBLE(,P##i),IS_EDIBLE(,P##n))(,ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,P##i,P##n),ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,P##i,ORDER_PP_LIT_TO_NAT(,P##n)),ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,ORDER_PP_LIT_TO_NAT(,P##i),P##n),8FOR_EACH_IN_RANGE_LIT_##dir,P##i,P##n)
#define ORDER_PP_8FOR_EACH_IN_RANGE_LIT_8DEC(P,_,i,n,f,...) (,ORDER_PP_LIT_IS_0(,P##n)(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_LIT_8DEC,ORDER_PP_LIT_DEC(,P##i),ORDER_PP_LIT_DEC_##n,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_LIT_8INC(P,_,i,n,f,...) (,ORDER_PP_LIT_IS_0(,P##n)(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_LIT_8INC,ORDER_PP_LIT_INC_##i,ORDER_PP_LIT_DEC_##n,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_NAT_8DEC(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_NAT_8DEC,ORDER_PP_NAT_PRED i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_NAT_8INC(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_NAT_8INC,ORDER_PP_NAT_SUCC i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8for_each ORDER_PP_FN_CM(4,8FOR_EACH)
#define ORDER_PP_8FOR_EACH(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8FOR_EACH_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_B(P,b,x,c,s,f,...) (,ORDER_PP_WHEN_##b(,x##P,ORDER_PP_OPEN f##P,8FOR_EACH_C,x##P,c##P,s##P,f##P),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_C(P,_,x,c,s,...) (,P##x,ORDER_PP_OPEN s##P,8FOR_EACH,P##c,P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8unless(cond,...) 8EVAL_IF,cond,8nil,8do(__VA_ARGS__),

#define ORDER_PP_DEF_8until ORDER_PP_FN_CM(3,8UNTIL)
#define ORDER_PP_8UNTIL(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8UNTIL_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8UNTIL_B(P,b,x,c,s,...) (,P##x,ORDER_PP_UNLESS_##b(,ORDER_PP_OPEN s##P,8UNTIL,P##c,P##s,)P##__VA_ARGS__)

#define ORDER_PP_DEF_8when(cond,...) 8EVAL_IF,cond,8do(__VA_ARGS__),8nil,

#define ORDER_PP_DEF_8while ORDER_PP_FN_CM(3,8WHILE)
#define ORDER_PP_8WHILE(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8WHILE_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8WHILE_B(P,b,x,c,s,...) (,P##x,ORDER_PP_WHEN_##b(,ORDER_PP_OPEN s##P,8WHILE,P##c,P##s,)P##__VA_ARGS__)

#ifndef ORDER_PP_NDEBUG
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(8if(cond,body,8exit(8quote(8Assert_Failed(8with_assert(cond,body))))))
#else
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(body)
#endif
