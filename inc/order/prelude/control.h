// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8call_cc(f)' calls the unary function `f' with the current
// continuation wrapped as a unary function.
#define ORDER_PP_DEF_8call_cc ORDER_PP_FN_CM(1,8CALL_CC)
#define ORDER_PP_8CALL_CC(P,f,...) (,(,8REPLACE_C,(,P##__VA_ARGS__)),ORDER_PP_OPEN f##P,P##__VA_ARGS__)
#define ORDER_PP_8REPLACE_C(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P)

// `8exit(x)' exits the interpreter returning `x'.
//
// For example,
//
//   8plus(1, 8exit(8nat_to_lit(2)), 3) ==> 2
#define ORDER_PP_DEF_8exit ORDER_PP_FN_CM(1,8EXIT)
#define ORDER_PP_8EXIT(P,x,...) ,(,1,x##P))

// `8eval(exp, env)' evaluates the Order expression `exp' in the
// environment `env'.
#define ORDER_PP_DEF_8eval ORDER_PP_FN_CM(2,8EVAL)
#define ORDER_PP_8EVAL(P,t,e,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)

// If `i0 < i1' then `8for_each_in_range(i0, i1, op)' calls the
// unary procedure `op' for each number in the range $[i0,i1[$ in
// ascending order and returns nil.
//
// If `i1 < i0' then `8for_each_in_range(i0, i1, op)' calls the
// unary procedure `op' for each number in the range $[i1,i0[$ in
// descending order and returns nil.
//
// If `i0 = i1', then `8for_each_in_range(i0, i1, op)' returns nil
// without calling `op'.
//
// The return value of `op' is always ignored and the return value
// of `8for_each_in_range' is always nil.
//
// For example,
//
//   8for_each_in_range(3, 6, 8chain(8put, 8to_lit)) ==> 3 4 5
//   8for_each_in_range(6, 3, 8chain(8put, 8to_lit)) ==> 5 4 3
#define ORDER_PP_DEF_8for_each_in_range ORDER_PP_FN_CM(3,8FOR_EACH_IN_RANGE)
#define ORDER_PP_8FOR_EACH_IN_RANGE(P,i0,i1,...) (,,ORDER_PP_FX(FOR_EACH_IN_RANGE_B,ORDER_PP_NUM_BOP(,LESS,P##i0,P##i1)(,(,8INC,P##i0,ORDER_PP_NUM_BOP(,MINUS,P##i1,P##i0)),(,8DEC,ORDER_PP_NUM_UOP(,DEC,P##i0),ORDER_PP_NUM_BOP(,MINUS,P##i0,P##i1)))),P##__VA_ARGS__)
#define ORDER_PP_FOR_EACH_IN_RANGE_B(P,dir,i,n) ORDER_PP_SELECT_4(ORDER_PP_IS_EDIBLE(,P##i),ORDER_PP_IS_EDIBLE(,P##n))(,ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,P##i,P##n),ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,P##i,ORDER_PP_LIT_TO_NAT(,P##n)),ORDER_PP_OPEN(,8FOR_EACH_IN_RANGE_NAT_##dir,ORDER_PP_LIT_TO_NAT(,P##i),P##n),8FOR_EACH_IN_RANGE_LIT_##dir,P##i,P##n)
#define ORDER_PP_8FOR_EACH_IN_RANGE_LIT_8INC(P,_,i,n,f,...) (,ORDER_PP_LIT_IS_0(,P##n)(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_LIT_8INC,ORDER_PP_LIT_INC_##i,ORDER_PP_LIT_DEC_##n,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_NAT_8INC(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_NAT_8INC,ORDER_PP_NAT_SUCC i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_LIT_8DEC(P,_,i,n,f,...) (,ORDER_PP_LIT_IS_0(,P##n)(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_LIT_8DEC,ORDER_PP_LIT_DEC(,P##i),ORDER_PP_LIT_DEC_##n,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_NAT_8DEC(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_NAT_8DEC,ORDER_PP_NAT_PRED i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8for_each ORDER_PP_FN_CM(4,8FOR_EACH)
#define ORDER_PP_8FOR_EACH(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8FOR_EACH_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_B(P,b,x,c,s,f,...) (,ORDER_PP_IF_NOT_##b(,,x##P,ORDER_PP_OPEN f##P,8FOR_EACH_C,x##P,c##P,s##P,f##P),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_C(P,_,x,c,s,...) (,P##x,ORDER_PP_OPEN s##P,8FOR_EACH,P##c,P##s,P##__VA_ARGS__)

// `8unless(cond,body...)' is equivalent to `8if(cond,8nil,8do(body...))'.
#define ORDER_PP_DEF_8unless(cond,...) 8EVAL_IF,cond,8nil,8do(__VA_ARGS__),

#define ORDER_PP_DEF_8until ORDER_PP_FN_CM(3,8UNTIL)
#define ORDER_PP_8UNTIL(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8UNTIL_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8UNTIL_B(P,b,x,c,s,...) (,P##x,ORDER_PP_UNLESS_##b(,ORDER_PP_OPEN s##P,8UNTIL,P##c,P##s,)P##__VA_ARGS__)

// `8when(cond,body...)' is equivalent to `8if(cond,8do(body...),8nil)'.
#define ORDER_PP_DEF_8when(cond,...) 8EVAL_IF,cond,8do(__VA_ARGS__),8nil,

#define ORDER_PP_DEF_8while ORDER_PP_FN_CM(3,8WHILE)
#define ORDER_PP_8WHILE(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8WHILE_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8WHILE_B(P,b,x,c,s,...) (,P##x,ORDER_PP_WHEN_##b(,ORDER_PP_OPEN s##P,8WHILE,P##c,P##s,)P##__VA_ARGS__)

#ifndef ORDER_PP_NDEBUG
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(8if(cond,body,8exit(8quote(8Assert_Failed(8with_assert(cond,body))))))
#else
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(body)
#endif
