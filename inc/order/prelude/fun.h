// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_DEF_8apply ORDER_PP_FN_NATIVE(2,9APPLY,0IS_FN,0IS_TUPLE)
#define ORDER_PP_9APPLY(P,f,ps) ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_REM ps##P,)),ORDER_PP_OPEN f##P ORDER_PP_FX(IS_TUPLE_SIZE_1,(,ORDER_PP_REM ps##P))(,,,8APPLY_LOOP,(,ORDER_PP_FX(TUPLE_REST,(,ORDER_PP_REM ps##P)),))
#define ORDER_PP_8APPLY_LOOP(P,f,ps,...) (,ORDER_PP_TUPLE_AT_0 ps##P,ORDER_PP_OPEN f##P,ORDER_PP_IS_TUPLE_SIZE_2 ps##P(,,8APPLY_LOOP,(,ORDER_PP_TUPLE_REST ps##P),)P##__VA_ARGS__)

#define ORDER_PP_DEF_8bin_pr ORDER_PP_FN_NATIVE(2,9BIN_PR,0IS_FN,0IS_FN)
#define ORDER_PP_9BIN_PR(P,b,p) (,ORDER_PP_OPEN p##P,ORDER_PP_OPEN b##P,8BIN_PR,P##p)
#define ORDER_PP_8BIN_PR(P,u,p,...) (,(,ORDER_PP_OPEN p##P,ORDER_PP_OPEN u##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8chain ORDER_PP_OP_LEFT_NATIVE(9COMPOSE,0IS_FN)

#define ORDER_PP_DEF_8compose ORDER_PP_FN_NATIVE(2,9COMPOSE,0IS_FN,0IS_FN)
#define ORDER_PP_9COMPOSE(P,f,g) (,ORDER_PP_OPEN g##P,ORDER_PP_OPEN f##P)

#define ORDER_PP_DEF_8flip ORDER_PP_FN_CM(1,8FLIP,0IS_FN)
#define ORDER_PP_8FLIP(P,f,...) (,(,8FLIP_B,P##f),P##__VA_ARGS__)
#define ORDER_PP_8FLIP_B(P,x,f,...) (,(,ORDER_PP_OPEN P##f,8AP,P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8identity ORDER_PP_FN_CM(1,8IDENTITY,0IS_ANY)
#define ORDER_PP_8IDENTITY

#define ORDER_PP_DEF_8ignore ORDER_PP_FN_CM(1,8IGNORE,0IS_ANY)
#define ORDER_PP_8IGNORE(P,_,...) (,,P##__VA_ARGS__)

#define ORDER_PP_DEF_8step ORDER_PP_FN_CM(1,8STEP,0IS_TUPLE)
#define ORDER_PP_8STEP(P,o,...) (,(,8STEP_B,ORDER_PP_REM P##o,(,8STEP_D)),P##__VA_ARGS__)
#define ORDER_PP_8STEP_B(P,x,f,...) (,P##x,ORDER_PP_OPEN f##P,8STEP_C,,P##x,P##__VA_ARGS__)
#define ORDER_PP_8STEP_C(P,v,vs,x,f,...) (,P##x,ORDER_PP_OPEN f##P,8STEP_C,P##vs(,P##v),P##x,P##__VA_ARGS__)
#define ORDER_PP_8STEP_D(P,x,step_c,vs,x2,...) (,(ORDER_PP_PSEQ_TO_TUPLE_A P##vs(0,)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8uncurry ORDER_PP_FN_NATIVE(2,9APPLY,0IS_FN,0IS_TUPLE)
