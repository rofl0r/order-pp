// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_DEF_8quote(...) ORDER_PP_IS_TUPLE_SIZE_1(,__VA_ARGS__)(,,8EXIT_SYNTAX_ERROR,8quote(__VA_ARGS__),)8DEF_CONST,__VA_ARGS__,
#define ORDER_PP_DEF_8(...) ORDER_PP_IS_TUPLE_SIZE_1(,__VA_ARGS__)(,,8EXIT_SYNTAX_ERROR,8(__VA_ARGS__),)8DEF_CONST,__VA_ARGS__,
#else
#define ORDER_PP_DEF_8quote(x) 8DEF_CONST,x,
#define ORDER_PP_DEF_8(x) 8DEF_CONST,x,
#endif

#define ORDER_PP_ORDER_PP_DEF_8(P,e,K,...) ORDER_PP_##K(,8,P##__VA_ARGS__)
