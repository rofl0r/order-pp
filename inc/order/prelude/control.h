#ifndef ORDER_PRELUDE_CONTROL_H_VAJK20040620
#define ORDER_PRELUDE_CONTROL_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8when(cond,body...)' is equivalent to `8if(cond,8do(body...),8nil)'.
#define ORDER_PP_DEF_8when(cond,...) 8EVAL_IF,cond,8do(__VA_ARGS__),8nil,

// `8unless(cond,body...)' is equivalent to `8if(cond,8nil,8do(body...))'.
#define ORDER_PP_DEF_8unless(cond,...) 8EVAL_IF,cond,8nil,8do(__VA_ARGS__),

// `8exit(x)' exits the interpreter returning `x'.
//
// For example,
//
//   8plus(1, 8exit(8nat_to_lit(2)), 3) ==> 2
#define ORDER_PP_DEF_8exit ORDER_PP_FN_CM(1,8EXIT)
#define ORDER_PP_8EXIT(P,x,...) ,x##P)

#ifndef ORDER_PP_NDEBUG
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(8if(cond,body,8exit(8quote(8Assert_Failed(8with_assert(cond,body))))))
#else
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(body)
#endif

// `8for_each_in_range(i,n,op)' calls the unary procedure `op' for
// each natural number in the range $[i,i+n[$ in ascending order.
// The return value of `op' is always ignored and the return value
// of `8for_each_in_range' is always nil. If `n' is $0$, then
// `8for_each_in_range' returns without calling `op'.
//
// For example,
//
//   8for_each_in_range(5, 3,
//                      8fn(8I,
//                          8emit(8nat_to_lit(8I)))) ==> 5 6 7
#define ORDER_PP_DEF_8for_each_in_range ORDER_PP_FN_CM(3,8REMAP_3012,,8FOR_EACH_IN_RANGE_4)
#define ORDER_PP_8FOR_EACH_IN_RANGE_4(P,_,i,n,f,...) (,ORDER_PP_NAT_IS_0 n##P(,,P##i,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_4,ORDER_PP_NAT_SUCC i##P,ORDER_PP_NAT_PRED n##P,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8for_each ORDER_PP_FN_CM(4,8FOR_EACH)
#define ORDER_PP_8FOR_EACH(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8FOR_EACH_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_B(P,b,x,c,s,f,...) (,ORDER_PP_IF_NOT_##b(,,x##P,ORDER_PP_OPEN f##P,8FOR_EACH_C,x##P,c##P,s##P,f##P),P##__VA_ARGS__)
#define ORDER_PP_8FOR_EACH_C(P,_,x,c,s,...) (,P##x,ORDER_PP_OPEN s##P,8FOR_EACH,P##c,P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8until ORDER_PP_FN_CM(3,8UNTIL)
#define ORDER_PP_8UNTIL(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8UNTIL_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8UNTIL_B(P,b,x,c,s,...) (,P##x,ORDER_PP_UNLESS_##b(,ORDER_PP_OPEN s##P,8UNTIL,P##c,P##s,)P##__VA_ARGS__)

#define ORDER_PP_DEF_8while ORDER_PP_FN_CM(3,8WHILE)
#define ORDER_PP_8WHILE(P,x,c,...) (,P##x,ORDER_PP_OPEN c##P,8WHILE_B,P##x,P##c,P##__VA_ARGS__)
#define ORDER_PP_8WHILE_B(P,b,x,c,s,...) (,P##x,ORDER_PP_WHEN_##b(,ORDER_PP_OPEN s##P,8WHILE,P##c,P##s,)P##__VA_ARGS__)

#endif
