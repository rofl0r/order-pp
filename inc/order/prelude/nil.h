// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8nil 8DEF_CONST,,

#define ORDER_PP_DEF_8is_nil ORDER_PP_FN_NATIVE(1,9IS_NIL)
#define ORDER_PP_9IS_NIL(P,x) ORDER_PP_IS_NIL(,P##x)(,8true,8false)
