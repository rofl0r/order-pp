// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8adjacent ORDER_PP_FN_NATIVE(2,9ADJACENT)
#define ORDER_PP_9ADJACENT(P,l,r) ORDER_PP_LEFT(,l##P)r##P

#define ORDER_PP_DEF_8expand ORDER_PP_FN_NATIVE(2,9SEPARATE)

#define ORDER_PP_DEF_8paste ORDER_PP_FN_NATIVE(2,9PASTE)
#define ORDER_PP_9PASTE(P,l,r) l##r

#define ORDER_PP_DEF_8separate ORDER_PP_FN_NATIVE(2,9SEPARATE)
#define ORDER_PP_9SEPARATE(P,l,r) l##P P##r

#define ORDER_PP_DEF_8stringize ORDER_PP_FN_NATIVE(1,9STRINGIZE)
#define ORDER_PP_9STRINGIZE(P,x) #x
