// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8rout(exp,...)' is like `8do(exp,...)' except that the order of
// individual emits is reversed during the execution of the block.
//
// For example,
//
//   8rout(8print((1)),8print((2))) ==> 2 1
//
// Uses of `8rout' can be nested. For example,
//
//   8rout(8print((1)),
//         8rout(8print((2)),8print((3))),
//         8print((4))) ==> 4 2 3 1
//
// Besides reversing the order of output, `8rout' can be used for
// optimization. Producing the intuitive left-to-right order of
// output actually requires $Theta(n*log(n))$ extra work, where $n$
// is the number of individual emits. When output is reversed, the
// extra work can be avoided.
#define ORDER_PP_DEF_8rout(...) 8EVAL_ROUT,(__VA_ARGS__),
#define ORDER_PP_8EVAL_ROUT(P,e,p,G,...) (,P##e,ORDER_PP_DEF_8do P##p,8EVAL_ROUT_B,P##__VA_ARGS__)(9,)
#define ORDER_PP_8EVAL_ROUT_B(P,x,...) (,P##x,P##__VA_ARGS__)(9,)
