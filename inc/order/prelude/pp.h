// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8adjacent ORDER_PP_FN_NATIVE(2,9ADJACENT,0IS_ANY,0IS_ANY)
#define ORDER_PP_9ADJACENT(P,l,r) ORDER_PP_LEFT(,l##P)r##P

#define ORDER_PP_DEF_8cat ORDER_PP_OP_LEFT_NATIVE(9PASTE,0IS_ANY)

#define ORDER_PP_DEF_8expand ORDER_PP_OP_LEFT_NATIVE(9SEPARATE,0IS_ANY)

#define ORDER_PP_DEF_8paste ORDER_PP_FN_NATIVE(2,9PASTE,0IS_ANY,0IS_ANY)
#define ORDER_PP_9PASTE(P,l,r) l##r

#define ORDER_PP_DEF_8separate ORDER_PP_FN_NATIVE(2,9SEPARATE,0IS_ANY,0IS_ANY)
#define ORDER_PP_9SEPARATE(P,l,r) l##P P##r

#define ORDER_PP_DEF_8stringize ORDER_PP_FN_CM(1,8STRINGIZE,0IS_ANY)
#define ORDER_PP_8STRINGIZE(P,x,...) (,#x,P##__VA_ARGS__)
