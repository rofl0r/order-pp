#ifndef ORDER_PRELUDE_PP_H_VAJK20040620
#define ORDER_PRELUDE_PP_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_stringize ORDER_PP_OP_CM(1,8STRINGIZE)
#define ORDER_PP_CM_8STRINGIZE(P,x,...) (,#x,P##__VA_ARGS__)

#define ORDER_PP_DEF_expand ORDER_PP_OP_CM(2,8EXPAND)
#define ORDER_PP_CM_8EXPAND(P,l,r,...) (,l##P P##r,P##__VA_ARGS__)

#define ORDER_PP_DEF_cat ORDER_PP_OP_CM(2,8CAT)
#define ORDER_PP_CM_8CAT(P,l,r,...) (,l##r,P##__VA_ARGS__)

#endif
