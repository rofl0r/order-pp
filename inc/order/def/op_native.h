// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_OP_LEFT_NATIVE(m,t) 8DEF_OP_LN,m,ORDER_PP_OP_LN_PARAMS
#define ORDER_PP_OP_LN_PARAMS(...) (,__VA_ARGS__,0op_ln),

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8DEF_OP_LN(P,e,m,ts,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_FIRST ts##P())ORDER_PP_DEF_FIRST ts##P,8DEF_OP_LN_B,e##P,m##P,ORDER_PP_TUPLE_REST ts##P,P##__VA_ARGS__)
#define ORDER_PP_8DEF_OP_LN_B(P,v,e,m,t,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t)ORDER_PP_DEF_##t,8DEF_OP_LN_C,e##P,P##m,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_OP_LN_C(P,vr,e,m,vl,t,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t)ORDER_PP_DEF_##t,8DEF_OP_LN_C,e##P,P##m,ORDER_PP_##m(,P##vl,P##vr),P##__VA_ARGS__)
#else
#define ORDER_PP_8DEF_OP_LN(P,e,m,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_OP_LN_B,e##P,m##P,ORDER_PP_TUPLE_REST ts##P,P##__VA_ARGS__)
#define ORDER_PP_8DEF_OP_LN_B(P,v,e,m,t,...) (,P##e,ORDER_PP_DEF_##t,8DEF_OP_LN_C,e##P,P##m,P##v,P##__VA_ARGS__)
#define ORDER_PP_8DEF_OP_LN_C(P,vr,e,m,vl,t,...) (,P##e,ORDER_PP_DEF_##t,8DEF_OP_LN_C,e##P,P##m,ORDER_PP_##m(,P##vl,P##vr),P##__VA_ARGS__)
#endif

#define ORDER_PP_DEF_0op_ln 0OP_LN,
#define ORDER_PP_0OP_LN(P,e1,G,def_op_ln_c,e2,m,v,K,...) ORDER_PP_##K(,P##v,P##__VA_ARGS__)
