#ifndef ORDER_PRELUDE_PP_H_VAJK20040620
#define ORDER_PRELUDE_PP_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_stringize ORDER_PP_OP_CM(1,8STRINGIZE)
#define ORDER_PP_CM_8STRINGIZE(P,x,...) (,#x,P##__VA_ARGS__)

#define ORDER_PP_DEF_expand ORDER_PP_CTOR_N(8EXPAND_)
#define ORDER_PP_DEF_expand_2 ORDER_PP_OP_CM(2,8EXPAND_2)
#define ORDER_PP_CM_8EXPAND_8(P,_0,_1,_2,_3,_4,_5,_6,_7,...) (,_0##P _1##P _2##P _3##P _4##P _5##P _6##P _7##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_7(P,_0,_1,_2,_3,_4,_5,_6,...) (,_0##P _1##P _2##P _3##P _4##P _5##P _6##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_6(P,_0,_1,_2,_3,_4,_5,...) (,_0##P _1##P _2##P _3##P _4##P _5##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_5(P,_0,_1,_2,_3,_4,...) (,_0##P _1##P _2##P _3##P _4##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_4(P,_0,_1,_2,_3,...) (,_0##P _1##P _2##P _3##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_3(P,_0,_1,_2,...) (,_0##P _1##P _2##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_2(P,_0,_1,...) (,_0##P _1##P,P##__VA_ARGS__)
#define ORDER_PP_CM_8EXPAND_1(P,_0,...) (,_0##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_cat ORDER_PP_CTOR_N(8CAT_)
#define ORDER_PP_DEF_cat_2 ORDER_PP_OP_CM(2,8CAT_2)
#define ORDER_PP_CM_8CAT_8(P,_0,_1,_2,_3,_4,_5,_6,_7,...) (,_0##_1##_2##_3##_4##_5##_6##_7,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_7(P,_0,_1,_2,_3,_4,_5,_6,...) (,_0##_1##_2##_3##_4##_5##_6,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_6(P,_0,_1,_2,_3,_4,_5,...) (,_0##_1##_2##_3##_4##_5,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_5(P,_0,_1,_2,_3,_4,...) (,_0##_1##_2##_3##_4,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_4(P,_0,_1,_2,_3,...) (,_0##_1##_2##_3,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_3(P,_0,_1,_2,...) (,_0##_1##_2,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_2(P,_0,_1,...) (,_0##_1,P##__VA_ARGS__)
#define ORDER_PP_CM_8CAT_1(P,_0,...) (,P##_0,P##__VA_ARGS__)

#endif
