#ifndef ORDER_PP_DEF_FN_MACRO_H_VAJK20040620
#define ORDER_PP_DEF_FN_MACRO_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Defines an Order function implemented by a function-like macro.
//
// - `arity' specifies the number of formal parameters of the macro.
// - `macro_name' specifies the name of the macro.
//
// The macro is invoked once all the actual parameters have been passed to
// the function.
//
// For example, suppose we would have the macro
//
//   #define MY_MACRO(x,y) I got (x,y)
//
// We could then define an Order function implemented by the macro
//
//   #define ORDER_PP_DEF_8my_function ORDER_PP_FN_MACRO(2,MY_MACRO)
//
// and use the function as an Order expression
//
//   8my_function(8inc(5),8dec(5)) ==> I got (6,4)
#define ORDER_PP_FN_MACRO(arity,macro_name) 8DEF_FN_CM,arity,8MACRO_##arity,(,macro_name,),ORDER_PP_PARAMS

#define ORDER_PP_8MACRO_8(P,v0,v1,v2,v3,v4,v5,v6,v7,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_7(P,v0,v1,v2,v3,v4,v5,v6,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_6(P,v0,v1,v2,v3,v4,v5,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_5(P,v0,v1,v2,v3,v4,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_4(P,v0,v1,v2,v3,m,...) (,P##m(P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_3(P,v0,v1,v2,m,...) (,P##m(P##v0,P##v1,P##v2),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_2(P,v0,v1,m,...) (,P##m(P##v0,P##v1),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_1(P,v0,m,...) (,P##m(P##v0),P##__VA_ARGS__)

// Defines an Order function implemented by a function-like macro, that
// must be passed a placemarker as the first actual parameter.
//
// - `arity' specifies the number of formal parameters of the macro,
//    excluding the placemarker.
// - `macro_name' specifies the name of the macro.
//
// The macro is invoked, with a placemarker, once all the actual
// parameters have been passed to the function.
//
// Placemarker concatenation inhibits macro expansion rescanning and is an
// important optimization technique.
//
// For example, suppose we would have the macro
//
//   #define MY_MACRO(P,x,y) I got (P##x,P##y)
//
// We could then define an Order function implemented by the macro
//
//   #define ORDER_PP_DEF_8my_function ORDER_PP_FN_MACRO(2,MY_MACRO)
//
// and use the function as an Order expression
//
//   8my_function(8inc(5),8dec(5)) ==> I got (6,4)
#define ORDER_PP_FN_MACRO_P(arity,macro_name) 8DEF_FN_CM,arity,8MACRO_P_##arity,(,macro_name,),ORDER_PP_PARAMS

#define ORDER_PP_8MACRO_P_8(P,v0,v1,v2,v3,v4,v5,v6,v7,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6,P##v7),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_7(P,v0,v1,v2,v3,v4,v5,v6,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5,P##v6),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_6(P,v0,v1,v2,v3,v4,v5,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4,P##v5),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_5(P,v0,v1,v2,v3,v4,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3,P##v4),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_4(P,v0,v1,v2,v3,m,...) (,P##m(,P##v0,P##v1,P##v2,P##v3),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_3(P,v0,v1,v2,m,...) (,P##m(,P##v0,P##v1,P##v2),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_2(P,v0,v1,m,...) (,P##m(,P##v0,P##v1),P##__VA_ARGS__)
#define ORDER_PP_8MACRO_P_1(P,v0,m,...) (,P##m(,P##v0),P##__VA_ARGS__)

#endif
