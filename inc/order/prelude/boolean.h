// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8always ORDER_PP_FN_CM(1,8ALWAYS)
#define ORDER_PP_8ALWAYS(P,_,...) (,8true,P##__VA_ARGS__)

#define ORDER_PP_DEF_8true 8DEF_CONST,8true,
#define ORDER_PP_SYM_8true(...) __VA_ARGS__

#define ORDER_PP_DEF_8false 8DEF_CONST,8false,
#define ORDER_PP_SYM_8false(...) __VA_ARGS__

#define ORDER_PP_DEF_8never ORDER_PP_FN_CM(1,8NEVER)
#define ORDER_PP_8NEVER(P,_,...) (,8false,P##__VA_ARGS__)

#define ORDER_PP_DEF_8not ORDER_PP_FN_CM(1,8NOT)
#define ORDER_PP_8NOT(P,b,...) (,ORDER_PP_IF_##b(,8false,8true),P##__VA_ARGS__)
