// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8chain ORDER_PP_OP_LEFT_NATIVE(9COMPOSE)

#define ORDER_PP_DEF_8compose ORDER_PP_FN_NATIVE(2,9COMPOSE)
#define ORDER_PP_9COMPOSE(P,f,g) (,ORDER_PP_OPEN g##P,ORDER_PP_OPEN f##P)

#define ORDER_PP_DEF_8identity ORDER_PP_FN_NATIVE(1,9IDENTITY)
#define ORDER_PP_9IDENTITY(P,x) P##x

#define ORDER_PP_DEF_8ignore ORDER_PP_FN_NATIVE(1,9IGNORE)
#define ORDER_PP_9IGNORE(...)
