#ifndef ORDER_PRELUDE_EMIT_H_VAJK20040620
#define ORDER_PRELUDE_EMIT_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_DEF_emit ORDER_PP_OP_CM(1,8EMIT)
#define ORDER_PP_CM_8EMIT(P,x,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##x

#define ORDER_PP_DEF_emit_expand ORDER_PP_OP_CM(2,8EMIT_EXPAND)
#define ORDER_PP_CM_8EMIT_EXPAND(P,l,r,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)P##l P##r

#define ORDER_PP_DEF_emit_cat ORDER_PP_OP_CM(2,8EMIT_CAT)
#define ORDER_PP_CM_8EMIT_CAT(P,l,r,K,...) ORDER_PP_CM_##K(,,P##__VA_ARGS__)l##r

#endif
