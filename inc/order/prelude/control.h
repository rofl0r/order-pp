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

// `8for_each_in_range(i,n,op)' calls the unary procedure `op' for
// each natural number in the range $[i,i+n[$ in ascending order.
// The return value of `op' is always ignored and the return value
// of `8for_each_in_range' is always nil. If `n' is $0$, then
// `8for_each_in_range' returns without calling `op'.
//
// For example,
//
//   8for_each_in_range(5, 3, 8chain(8put, 8to_lit)) ==> 5 6 7
#define ORDER_PP_DEF_8for_each_in_range ORDER_PP_FN_CM(3,8FOR_EACH_IN_RANGE)
#define ORDER_PP_8FOR_EACH_IN_RANGE(P,i,n,f,...) (,,8FOR_EACH_IN_RANGE_4,ORDER_PP_NUM_UOP(,TO_NAT,P##i),ORDER_PP_NUM_UOP(,TO_NAT,P##n),P##f,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_IN_RANGE_4(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_ZERO n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_4,ORDER_PP_NAT_SUCC i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)

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
