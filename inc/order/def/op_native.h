// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_OP_LEFT_NATIVE(m,p) 8DEF_OP_LN,m,p,ORDER_PP_OP_LN_PARAMS
# define ORDER_PP_OP_LN_PARAMS(...) (,__VA_ARGS__,0op_ln),

# define ORDER_PP_8DEF_OP_LN(P,e,m,p,ts,G,...) (,P##e,ORDER_PP_IS_EDIBLE(,P##ts)(,,8EXIT_SYNTAX_ERROR,P##m,)ORDER_PP_SYNTAX_CHECK(,ORDER_PP_TUPLE_FIRST ts##P,ORDER_PP_DEF_FIRST)ts##P,8DEF_OP_LN_B,e##P,m##P,p##P,ORDER_PP_TUPLE_REST ts##P,P##__VA_ARGS__)
# define ORDER_PP_8DEF_OP_LN_B(P,v,e,m,p,t,...) (,ORDER_PP_TYPE_CHECK(,P##p,P##v,)P##e,ORDER_PP_SYNTAX_CHECK(,P##t,ORDER_PP_DEF)(P##t),8DEF_OP_LN_C,e##P,P##m,P##v,P##p,P##__VA_ARGS__)
# define ORDER_PP_8DEF_OP_LN_C(P,vr,e,m,vl,p,t,...) (,ORDER_PP_TYPE_CHECK(,P##p,P##vr,ORDER_PP_TEST)(,ORDER_PP_##m##_PRECONDITION(,P##vl,P##vr)(,,,,),ORDER_PP_RIGHT(,P##m(P##vl,P##vr),8EXIT_ERROR,ORDER_PP_PRECONDITION_FAILURE,),ORDER_PP_8DEF_OP_LN_C_B)(,P##e,P##t,P##m)(,P##vl,P##vr),P##p,P##__VA_ARGS__)
# define ORDER_PP_8DEF_OP_LN_C_B(P,e,t,m) P##e,ORDER_PP_SYNTAX_CHECK(,P##t,ORDER_PP_DEF)(P##t),8DEF_OP_LN_C,e##P,P##m,ORDER_PP_##m

# define ORDER_PP_DEF_0op_ln 0OP_LN,
# define ORDER_PP_0OP_LN(P,e1,G,def_op_ln_c,e2,m,v,p,K,...) ORDER_PP_##K(,P##v,P##__VA_ARGS__)
#else
# define ORDER_PP_OP_LEFT_NATIVE(m,t) 8DEF_OP_LN,m,ORDER_PP_OP_LN_PARAMS
# define ORDER_PP_OP_LN_PARAMS(...) (,__VA_ARGS__,0op_ln),

# define ORDER_PP_8DEF_OP_LN(P,e,m,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,8DEF_OP_LN_B,e##P,m##P,ORDER_PP_TUPLE_REST ts##P,P##__VA_ARGS__)
# define ORDER_PP_8DEF_OP_LN_B(P,v,e,m,t,...) (,P##e,ORDER_PP_DEF_##t,8DEF_OP_LN_C,e##P,P##m,P##v,P##__VA_ARGS__)
# define ORDER_PP_8DEF_OP_LN_C(P,vr,e,m,vl,t,...) (,P##e,ORDER_PP_DEF_##t,8DEF_OP_LN_C,e##P,P##m,ORDER_PP_##m(,P##vl,P##vr),P##__VA_ARGS__)

# define ORDER_PP_DEF_0op_ln 0OP_LN,
# define ORDER_PP_0OP_LN(P,e1,G,def_op_ln_c,e2,m,v,K,...) ORDER_PP_##K(,P##v,P##__VA_ARGS__)
#endif
