#ifndef ORDER_DEF_OP_H_VAJK20040620
#define ORDER_DEF_OP_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_OP_LEFT_CM(...) 8DEF_OP_LEFT_CM,ORDER_PP_PREPARE_CONTINUATION(,__VA_ARGS__,),ORDER_PP_PARAMS

#define ORDER_PP_8DEF_OP_LEFT_CM(P,e,f,r,np,t,...) (,P##e,ORDER_PP_DEF_##t,8OP_##np,P##e,P##f,P##r,P##__VA_ARGS__)

#define ORDER_PP_8OP_8(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P 8OP_7,P##e,P##f,P##r,P##__VA_ARGS__)
#define ORDER_PP_8OP_7(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P 8OP_6,P##e,P##f,P##r,P##__VA_ARGS__)
#define ORDER_PP_8OP_6(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P 8OP_5,P##e,P##f,P##r,P##__VA_ARGS__)
#define ORDER_PP_8OP_5(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P 8OP_4,P##e,P##f,P##r,P##__VA_ARGS__)
#define ORDER_PP_8OP_4(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P 8OP_3,P##e,P##f,P##r,P##__VA_ARGS__)
#define ORDER_PP_8OP_3(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P 8OP_2,P##e,P##f,P##r,P##__VA_ARGS__)
#define ORDER_PP_8OP_2(P,v,e,f,r,t,...) (,P##e,ORDER_PP_DEF_##t,P##f,P##v,ORDER_PP_OPEN r##P P##__VA_ARGS__)
#define ORDER_PP_8OP_1(P,v,e,f,r,...) (,P##v,P##__VA_ARGS__)

#endif
