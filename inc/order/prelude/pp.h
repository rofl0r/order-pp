// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8stringize ORDER_PP_FN_CM(1,8STRINGIZE)
#define ORDER_PP_8STRINGIZE(P,x,...) (,#x,P##__VA_ARGS__)

#define ORDER_PP_DEF_8expand ORDER_PP_FN_CM(2,8SEPARATE)

#define ORDER_PP_DEF_8separate ORDER_PP_FN_CM(2,8SEPARATE)
#define ORDER_PP_8SEPARATE(P,l,r,...) (,l##P P##r,P##__VA_ARGS__)

#define ORDER_PP_DEF_8adjacent ORDER_PP_FN_CM(2,8ADJACENT)
#define ORDER_PP_8ADJACENT(P,l,r,...) (,ORDER_PP_LEFT(,l##P)r##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8paste ORDER_PP_FN_CM(2,8PASTE)
#define ORDER_PP_8PASTE(P,l,r,...) (,l##r,P##__VA_ARGS__)
