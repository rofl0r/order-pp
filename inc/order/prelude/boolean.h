// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8always ORDER_PP_FN_CM(1,8ALWAYS,0IS_ANY)
#define ORDER_PP_8ALWAYS(P,_,...) (,8true,P##__VA_ARGS__)

#define ORDER_PP_DEF_8and_chain ORDER_PP_OP_LEFT_NATIVE(9AND_COMPOSE,0IS_FN)

#define ORDER_PP_DEF_8and_compose ORDER_PP_FN_NATIVE(2,9AND_COMPOSE,0IS_FN,0IS_FN)
#define ORDER_PP_9AND_COMPOSE(P,p0,p1) (,8AND_COMPOSE,P##p0,P##p1)
#define ORDER_PP_8AND_COMPOSE(P,x,p0,p1,...) (,P##x,ORDER_PP_OPEN p0##P,8AND_COMPOSE_B,P##x,P##p1,P##__VA_ARGS__)
#define ORDER_PP_8AND_COMPOSE_B(P,b,x,p1,...) (,ORDER_PP_IF_NOT_##b(,8false,P##x,ORDER_PP_OPEN p1##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8true 8DEF_CONST,8true,
#define ORDER_PP_SYM_8true(...) __VA_ARGS__

#define ORDER_PP_DEF_8false 8DEF_CONST,8false,
#define ORDER_PP_SYM_8false(...) __VA_ARGS__

#define ORDER_PP_DEF_8never ORDER_PP_FN_CM(1,8NEVER,0IS_ANY)
#define ORDER_PP_8NEVER(P,_,...) (,8false,P##__VA_ARGS__)

#define ORDER_PP_DEF_8not ORDER_PP_FN_CM(1,8NOT,0IS_BOOL)
#define ORDER_PP_8NOT(P,b,...) (,ORDER_PP_IF_##b(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8or_chain ORDER_PP_OP_LEFT_NATIVE(9OR_COMPOSE,0IS_FN)

#define ORDER_PP_DEF_8or_compose ORDER_PP_FN_NATIVE(2,9OR_COMPOSE,0IS_FN,0IS_FN)
#define ORDER_PP_9OR_COMPOSE(P,p0,p1) (,8OR_COMPOSE,P##p0,P##p1)
#define ORDER_PP_8OR_COMPOSE(P,x,p0,p1,...) (,P##x,ORDER_PP_OPEN p0##P,8OR_COMPOSE_B,P##x,P##p1,P##__VA_ARGS__)
#define ORDER_PP_8OR_COMPOSE_B(P,b,x,p1,...) (,ORDER_PP_IF_##b(,8true,P##x,ORDER_PP_OPEN p1##P),P##__VA_ARGS__)

// Detail

// TBD: 0IS_BOOL
#define ORDER_PP_0IS_BOOL(P,x) ORDER_PP_IF_8true

