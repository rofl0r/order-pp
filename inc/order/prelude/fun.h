#ifndef ORDER_PRELUDE_FUN_H_VAJK20040620
#define ORDER_PRELUDE_FUN_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8chain ORDER_PP_OP_LEFT_CM(8CHAIN)
#define ORDER_PP_CM_8CHAIN(P,f,g,...) (,(,ORDER_PP_OPEN f##P,ORDER_PP_OPEN g##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8identity ORDER_PP_FN_CM(1,8IDENTITY)
#define ORDER_PP_CM_8IDENTITY(P,x,...) (,P##x,P##__VA_ARGS__)

#define ORDER_PP_DEF_8ignore ORDER_PP_FN_CM(1,8IGNORE)
#define ORDER_PP_CM_8IGNORE(P,x,...) (,,P##__VA_ARGS__)

#endif
