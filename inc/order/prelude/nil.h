// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8nil 8DEF_CONST,,

#define ORDER_PP_DEF_8is_nil ORDER_PP_FN_CM(1,8IS_NIL)
#define ORDER_PP_8IS_NIL(P,x,...) (,ORDER_PP_IS_NIL(,P##x)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8isnt_nil ORDER_PP_FN_CM(1,8ISNT_NIL)
#define ORDER_PP_8ISNT_NIL(P,x,...) (,ORDER_PP_IS_NIL(,P##x)(,8false,8true),P##__VA_ARGS__)
