// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// `8stringize(x)' stringizes `x'.
//
// For example,
//
//   8stringize(8plus(1,2)) ==> "3"
#define ORDER_PP_DEF_8stringize ORDER_PP_FN_CM(1,8STRINGIZE)
#define ORDER_PP_8STRINGIZE(P,x,...) (,#x,P##__VA_ARGS__)

// `8expand(l,r)' evaluates to `l r'. No extra whitespace is left
// between the token sequences `l' and `r'.
//
// For example,
//
//   8expand(3, 8inc(3)) ==> 3 4
//   8expand(8(!), 8inc(1)) ==> !2
#define ORDER_PP_DEF_8expand ORDER_PP_FN_CM(2,8EXPAND)
#define ORDER_PP_8EXPAND(P,l,r,...) (,ORDER_PP_LEFT(,l##P)r##P,P##__VA_ARGS__)

// `8paste(l,r)' concatenates the token sequences `l' and `r'.
//
// For example,
//
//   8paste(8plus(1,2), 4) ==> 34
#define ORDER_PP_DEF_8paste ORDER_PP_FN_CM(2,8PASTE)
#define ORDER_PP_8PASTE(P,l,r,...) (,l##r,P##__VA_ARGS__)
