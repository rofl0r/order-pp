#ifndef ORDER_PRELUDE_CONTROL_H_VAJK20040620
#define ORDER_PRELUDE_CONTROL_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8when(cond,...) 8EVAL_IF,cond,8do(__VA_ARGS__),8nil
#define ORDER_PP_DEF_8unless(cond,...) 8EVAL_IF,cond,8nil,8do(__VA_ARGS__)

#define ORDER_PP_DEF_8exit ORDER_PP_FN_CM(1,8EXIT)

#ifndef ORDER_PP_NDEBUG
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(8if(cond,body,8exit(8quote(8Assert_Failed(8with_assert(cond,body))))))
#else
#define ORDER_PP_DEF_8with_assert(cond,body) ORDER_PP_MACRO(body)
#endif

#define ORDER_PP_DEF_8for_each_in_range ORDER_PP_FN_CM(3,8REMAP_3012,,8FOR_EACH_IN_RANGE_4)
#define ORDER_PP_CM_8FOR_EACH_IN_RANGE_4(P,_,f,lo,hi,...) (,ORDER_PP_EQUAL(,P##lo,P##hi)(,(,),P##lo,ORDER_PP_OPEN f##P,8FOR_EACH_IN_RANGE_4,P##f,ORDER_PP_INC_##lo,P##hi),P##__VA_ARGS__)

#endif
