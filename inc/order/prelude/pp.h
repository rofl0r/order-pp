// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8stringize ORDER_PP_FN_CM(1,8STRINGIZE)
#define ORDER_PP_8STRINGIZE(P,x,...) (,#x,P##__VA_ARGS__)

#define ORDER_PP_DEF_8expand ORDER_PP_FN_CM(2,8EXPAND)
#define ORDER_PP_8EXPAND(P,l,r,...) (,ORDER_PP_LEFT(,l##P)r##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8paste ORDER_PP_FN_CM(2,8PASTE)
#define ORDER_PP_8PASTE(P,l,r,...) (,l##r,P##__VA_ARGS__)
