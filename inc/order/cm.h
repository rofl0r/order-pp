#ifndef ORDER_CM_H_VAJK20040620
#define ORDER_CM_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "chaos/preprocessor/seq/reverse.h"

#define ORDER_PP_CM ORDER_PP_CM_IS_SCAN_ACTIVE(0)(,ORDER_PP_CM_FIND_SCAN_1,ORDER_PP_CM_GO)(0)
#define ORDER_PP_CM_FIND_SCAN_1(...) ORDER_PP_CM_IS_SCAN_ACTIVE(1)(,ORDER_PP_CM_FIND_SCAN_2,ORDER_PP_CM_GO)(1)
#define ORDER_PP_CM_FIND_SCAN_2(...) ORDER_PP_CM_IS_SCAN_ACTIVE(2)(,ORDER_PP_CM_FIND_SCAN_3,ORDER_PP_CM_GO)(2)
#define ORDER_PP_CM_FIND_SCAN_3(...) ORDER_PP_CM_IS_SCAN_ACTIVE(3)(,ORDER_PP_CM_FIND_SCAN_4,ORDER_PP_CM_GO)(3)
#define ORDER_PP_CM_FIND_SCAN_4(...) ORDER_PP_CM_ERROR_OUT_OF_MACHINES(!)

#define ORDER_PP_CM_ERROR_OUT_OF_MACHINES()

#define ORDER_PP_CM_GO(i) ORDER_PP_CM_##i ORDER_PP_BLOCK

#define ORDER_PP_CM_0(...) ORDER_PP_CM_B_0(ORDER_PP_CM_UP_0(__VA_ARGS__))
#define ORDER_PP_CM_1(...) ORDER_PP_CM_B_1(ORDER_PP_CM_UP_0(__VA_ARGS__))
#define ORDER_PP_CM_2(...) ORDER_PP_CM_B_2(ORDER_PP_CM_UP_0(__VA_ARGS__))
#define ORDER_PP_CM_3(...) ORDER_PP_CM_B_3(ORDER_PP_CM_UP_0(__VA_ARGS__))

#define ORDER_PP_CM_B_0(x) ORDER_PP_CM_ERROR_0(,x)))
#define ORDER_PP_CM_B_1(x) ORDER_PP_CM_ERROR_1(,x)))
#define ORDER_PP_CM_B_2(x) ORDER_PP_CM_ERROR_2(,x)))
#define ORDER_PP_CM_B_3(x) ORDER_PP_CM_ERROR_3(,x)))

#define ORDER_PP_CM_ERROR_0(P,_,x) ORDER_PP_CM_SCAN_0(ORDER_PP_CM_SCAN_0(ORDER_PP_CM_EMIT_A(,1,P##x)ORDER_PP_CM_REV(,
#define ORDER_PP_CM_ERROR_1(P,_,x) ORDER_PP_CM_SCAN_1(ORDER_PP_CM_SCAN_1(ORDER_PP_CM_EMIT_A(,1,P##x)ORDER_PP_CM_REV(,
#define ORDER_PP_CM_ERROR_2(P,_,x) ORDER_PP_CM_SCAN_2(ORDER_PP_CM_SCAN_2(ORDER_PP_CM_EMIT_A(,1,P##x)ORDER_PP_CM_REV(,
#define ORDER_PP_CM_ERROR_3(P,_,x) ORDER_PP_CM_SCAN_3(ORDER_PP_CM_SCAN_3(ORDER_PP_CM_EMIT_A(,1,P##x)ORDER_PP_CM_REV(,

#define ORDER_PP_CM_SCAN(x) x

#define ORDER_PP_CM_REV(P,s) ORDER_PP_CM_SCAN(ORDER_PP_CM_REV_A P##s(0,0,))(0,0,)

#define ORDER_PP_CM_REV_A(P,m,...) ORDER_PP_CM_REV_##m(,P##__VA_ARGS__)ORDER_PP_CM_REV_B##P
#define ORDER_PP_CM_REV_B(P,m,...) ORDER_PP_CM_REV_##m(,P##__VA_ARGS__)ORDER_PP_CM_REV_A##P
#define ORDER_PP_CM_REV_A0
#define ORDER_PP_CM_REV_B0

#define ORDER_PP_CM_REV_1B(P,...) CHAOS_PP_SEQ_REVERSE ORDER_PP_BLOCK(
#define ORDER_PP_CM_REV_1E(P,...) )
#define ORDER_PP_CM_REV_0(P,...)
#define ORDER_PP_CM_REV_1(P,...) (,1,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_2(P,...) (,2,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_3(P,...) (,3,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_4(P,...) (,4,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_5(P,...) (,5,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_6(P,...) (,6,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_7(P,...) (,7,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_8(P,...) (,8,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_1C(P,...) (,1C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_2C(P,...) (,2C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_3C(P,...) (,3C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_4C(P,...) (,4C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_5C(P,...) (,5C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_6C(P,...) (,6C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_7C(P,...) (,7C,P##__VA_ARGS__)
#define ORDER_PP_CM_REV_8C(P,...) (,8C,P##__VA_ARGS__)

#define ORDER_PP_CM_EMIT_A(P,m,...) ORDER_PP_CM_EMIT_##m(,P##__VA_ARGS__)ORDER_PP_CM_EMIT_B##P
#define ORDER_PP_CM_EMIT_B(P,m,...) ORDER_PP_CM_EMIT_##m(,P##__VA_ARGS__)ORDER_PP_CM_EMIT_A##P
#define ORDER_PP_CM_EMIT_A0
#define ORDER_PP_CM_EMIT_B0

#define ORDER_PP_CM_EMIT_0(...)
#define ORDER_PP_CM_EMIT_00(P,...)
#define ORDER_PP_CM_EMIT_1(P,...) P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_2(P,_0,...) P##_0 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_3(P,_0,_1,...) P##_0 P##_1 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_4(P,_0,_1,_2,...) P##_0 P##_1 P##_2 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_5(P,_0,_1,_2,_3,...) P##_0 P##_1 P##_2 P##_3 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_6(P,_0,_1,_2,_3,_4,...) P##_0 P##_1 P##_2 P##_3 P##_4 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_7(P,_0,_1,_2,_3,_4,_5,...) P##_0 P##_1 P##_2 P##_3 P##_4 P##_5 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_8(P,_0,_1,_2,_3,_4,_5,_6,...) P##_0 P##_1 P##_2 P##_3 P##_4 P##_5 P##_6 P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_1C(P,...) P##__VA_ARGS__
#define ORDER_PP_CM_EMIT_2C(P,_0,...) _0##__VA_ARGS__
#define ORDER_PP_CM_EMIT_3C(P,_0,_1,...) _0##_1##__VA_ARGS__
#define ORDER_PP_CM_EMIT_4C(P,_0,_1,_2,...) _0##_1##_2##__VA_ARGS__
#define ORDER_PP_CM_EMIT_5C(P,_0,_1,_2,_3,...) _0##_1##_2##_3##__VA_ARGS__
#define ORDER_PP_CM_EMIT_6C(P,_0,_1,_2,_3,_4,...) _0##_1##_2##_3##_4##__VA_ARGS__
#define ORDER_PP_CM_EMIT_7C(P,_0,_1,_2,_3,_4,_5,...) _0##_1##_2##_3##_4##_5##__VA_ARGS__
#define ORDER_PP_CM_EMIT_8C(P,_0,_1,_2,_3,_4,_5,_6,...) _0##_1##_2##_3##_4##_5##_6##__VA_ARGS__

#define ORDER_PP_CM_SCAN_0(...) __VA_ARGS__
#define ORDER_PP_CM_SCAN_1(...) __VA_ARGS__
#define ORDER_PP_CM_SCAN_2(...) __VA_ARGS__
#define ORDER_PP_CM_SCAN_3(...) __VA_ARGS__

#define ORDER_PP_CM_IS_SCAN_ACTIVE(i) ORDER_PP_TEST(,ORDER_PP_CM_SCAN_##i(,,),ORDER_PP_IF_8false,ORDER_PP_IF_8true)

#define ORDER_PP_CM_8EXIT(P,x,...) ,x##P)

#define ORDER_PP_CM_D_0(...) ORDER_PP_CM_DN_0 __VA_ARGS__
#define ORDER_PP_CM_U_0(...) ORDER_PP_CM_UP_1 __VA_ARGS__
#define ORDER_PP_CM_D_1(...) ORDER_PP_CM_DN_1 __VA_ARGS__
#define ORDER_PP_CM_U_1(...) ORDER_PP_CM_UP_2 __VA_ARGS__
#define ORDER_PP_CM_D_2(...) ORDER_PP_CM_DN_2 __VA_ARGS__
#define ORDER_PP_CM_U_2(...) ORDER_PP_CM_UP_3 __VA_ARGS__
#define ORDER_PP_CM_D_3(...) ORDER_PP_CM_DN_3 __VA_ARGS__
#define ORDER_PP_CM_U_3(...) ORDER_PP_CM_UP_4 __VA_ARGS__
#define ORDER_PP_CM_D_4(...) ORDER_PP_CM_DN_4 __VA_ARGS__
#define ORDER_PP_CM_U_4(...) ORDER_PP_CM_UP_5 __VA_ARGS__
#define ORDER_PP_CM_D_5(...) ORDER_PP_CM_DN_5 __VA_ARGS__
#define ORDER_PP_CM_U_5(...) ORDER_PP_CM_UP_6 __VA_ARGS__
#define ORDER_PP_CM_D_6(...) ORDER_PP_CM_DN_6 __VA_ARGS__
#define ORDER_PP_CM_U_6(...) ORDER_PP_CM_UP_7 __VA_ARGS__
#define ORDER_PP_CM_D_7(...) ORDER_PP_CM_DN_7 __VA_ARGS__
#define ORDER_PP_CM_U_7(...) ORDER_PP_CM_UP_8 __VA_ARGS__
#define ORDER_PP_CM_D_8(...) ORDER_PP_CM_DN_8 __VA_ARGS__
#define ORDER_PP_CM_U_8(...) ORDER_PP_CM_UP_9 __VA_ARGS__
#define ORDER_PP_CM_D_9(...) ORDER_PP_CM_DN_9 __VA_ARGS__
#define ORDER_PP_CM_U_9(...) ORDER_PP_CM_UP_10 __VA_ARGS__
#define ORDER_PP_CM_D_10(...) ORDER_PP_CM_DN_10 __VA_ARGS__
#define ORDER_PP_CM_U_10(...) ORDER_PP_CM_UP_11 __VA_ARGS__
#define ORDER_PP_CM_D_11(...) ORDER_PP_CM_DN_11 __VA_ARGS__
#define ORDER_PP_CM_U_11(...) ORDER_PP_CM_UP_12 __VA_ARGS__
#define ORDER_PP_CM_D_12(...) ORDER_PP_CM_DN_12 __VA_ARGS__
#define ORDER_PP_CM_U_12(...) ORDER_PP_CM_UP_13 __VA_ARGS__
#define ORDER_PP_CM_D_13(...) ORDER_PP_CM_DN_13 __VA_ARGS__
#define ORDER_PP_CM_U_13(...) ORDER_PP_CM_UP_14 __VA_ARGS__
#define ORDER_PP_CM_D_14(...) ORDER_PP_CM_DN_14 __VA_ARGS__
#define ORDER_PP_CM_U_14(...) ORDER_PP_CM_UP_15 __VA_ARGS__
#define ORDER_PP_CM_D_15(...) ORDER_PP_CM_DN_15 __VA_ARGS__
#define ORDER_PP_CM_U_15(...) ORDER_PP_CM_UP_16 __VA_ARGS__
#define ORDER_PP_CM_D_16(...) ORDER_PP_CM_DN_16 __VA_ARGS__
#define ORDER_PP_CM_U_16(...) ORDER_PP_CM_UP_17 __VA_ARGS__
#define ORDER_PP_CM_D_17(...) ORDER_PP_CM_DN_17 __VA_ARGS__
#define ORDER_PP_CM_U_17(...) ORDER_PP_CM_UP_18 __VA_ARGS__
#define ORDER_PP_CM_D_18(...) ORDER_PP_CM_DN_18 __VA_ARGS__
#define ORDER_PP_CM_U_18(...) ORDER_PP_CM_UP_19 __VA_ARGS__
#define ORDER_PP_CM_D_19(...) ORDER_PP_CM_DN_19 __VA_ARGS__
#define ORDER_PP_CM_U_19(...) ORDER_PP_CM_UP_20 __VA_ARGS__
#define ORDER_PP_CM_D_20(...) ORDER_PP_CM_DN_20 __VA_ARGS__
#define ORDER_PP_CM_U_20(...) ORDER_PP_CM_UP_21 __VA_ARGS__
#define ORDER_PP_CM_D_21(...) ORDER_PP_CM_DN_21 __VA_ARGS__
#define ORDER_PP_CM_U_21(...) ORDER_PP_CM_UP_22 __VA_ARGS__
#define ORDER_PP_CM_D_22(...) ORDER_PP_CM_DN_22 __VA_ARGS__
#define ORDER_PP_CM_U_22(...) ORDER_PP_CM_UP_23 __VA_ARGS__
#define ORDER_PP_CM_D_23(...) ORDER_PP_CM_DN_23 __VA_ARGS__
#define ORDER_PP_CM_U_23(...) ORDER_PP_CM_UP_24 __VA_ARGS__
#define ORDER_PP_CM_D_24(...) ORDER_PP_CM_DN_24 __VA_ARGS__
#define ORDER_PP_CM_U_24(...) ORDER_PP_CM_UP_25 __VA_ARGS__
#define ORDER_PP_CM_D_25(...) ORDER_PP_CM_DN_25 __VA_ARGS__
#define ORDER_PP_CM_U_25(...) ORDER_PP_CM_UP_26 __VA_ARGS__
#define ORDER_PP_CM_D_26(...) ORDER_PP_CM_DN_26 __VA_ARGS__
#define ORDER_PP_CM_U_26(...) ORDER_PP_CM_UP_27 __VA_ARGS__
#define ORDER_PP_CM_D_27(...) ORDER_PP_CM_DN_27 __VA_ARGS__
#define ORDER_PP_CM_U_27(...) ORDER_PP_CM_UP_28 __VA_ARGS__
#define ORDER_PP_CM_D_28(...) ORDER_PP_CM_DN_28 __VA_ARGS__
#define ORDER_PP_CM_U_28(...) ORDER_PP_CM_UP_29 __VA_ARGS__
#define ORDER_PP_CM_D_29(...) ORDER_PP_CM_DN_29 __VA_ARGS__
#define ORDER_PP_CM_U_29(...) ORDER_PP_CM_UP_30 __VA_ARGS__
#define ORDER_PP_CM_D_30(...) ORDER_PP_CM_DN_30 __VA_ARGS__
#define ORDER_PP_CM_U_30(...) ORDER_PP_CM_UP_31 __VA_ARGS__
#define ORDER_PP_CM_D_31(...) ORDER_PP_CM_DN_31 __VA_ARGS__
#define ORDER_PP_CM_U_31(...) ORDER_PP_CM_UP_32 __VA_ARGS__
#define ORDER_PP_CM_D_32(...) ORDER_PP_CM_DN_32 __VA_ARGS__
#define ORDER_PP_CM_U_32(...) ORDER_PP_CM_UP_33 __VA_ARGS__
#define ORDER_PP_CM_D_33(...) ORDER_PP_CM_DN_33 __VA_ARGS__
#define ORDER_PP_CM_U_33(...) ORDER_PP_CM_UP_34 __VA_ARGS__
#define ORDER_PP_CM_D_34(...) ORDER_PP_CM_DN_34 __VA_ARGS__
#define ORDER_PP_CM_U_34(...) ORDER_PP_CM_UP_35 __VA_ARGS__
#define ORDER_PP_CM_D_35(...) ORDER_PP_CM_DN_35 __VA_ARGS__
#define ORDER_PP_CM_U_35(...) ORDER_PP_CM_UP_36 __VA_ARGS__
#define ORDER_PP_CM_D_36(...) ORDER_PP_CM_DN_36 __VA_ARGS__
#define ORDER_PP_CM_U_36(...) ORDER_PP_CM_UP_37 __VA_ARGS__
#define ORDER_PP_CM_D_37(...) ORDER_PP_CM_DN_37 __VA_ARGS__
#define ORDER_PP_CM_U_37(...) ORDER_PP_CM_UP_38 __VA_ARGS__
#define ORDER_PP_CM_D_38(...) ORDER_PP_CM_DN_38 __VA_ARGS__
#define ORDER_PP_CM_U_38(...) ORDER_PP_CM_UP_39 __VA_ARGS__
#define ORDER_PP_CM_D_39(...) ORDER_PP_CM_DN_39 __VA_ARGS__
#define ORDER_PP_CM_U_39(...) ORDER_PP_CM_UP_40 __VA_ARGS__
#define ORDER_PP_CM_D_40(...) ORDER_PP_CM_DN_40 __VA_ARGS__
#define ORDER_PP_CM_U_40(...) ORDER_PP_CM_UP_41 __VA_ARGS__

#define ORDER_PP_CM_DN_0(P,x,f,...) ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)
#define ORDER_PP_CM_UP_0(P,x,f,...) ORDER_PP_CM_U_0(ORDER_PP_CM_D_0(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__##P)))
#define ORDER_PP_CM_DN_1(P,x,f,...) ORDER_PP_CM_D_0(ORDER_PP_CM_D_0(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_1(P,x,f,...) ORDER_PP_CM_U_1(ORDER_PP_CM_D_1(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_2(P,x,f,...) ORDER_PP_CM_D_1(ORDER_PP_CM_D_1(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_2(P,x,f,...) ORDER_PP_CM_U_2(ORDER_PP_CM_D_2(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_3(P,x,f,...) ORDER_PP_CM_D_2(ORDER_PP_CM_D_2(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_3(P,x,f,...) ORDER_PP_CM_U_3(ORDER_PP_CM_D_3(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_4(P,x,f,...) ORDER_PP_CM_D_3(ORDER_PP_CM_D_3(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_4(P,x,f,...) ORDER_PP_CM_U_4(ORDER_PP_CM_D_4(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_5(P,x,f,...) ORDER_PP_CM_D_4(ORDER_PP_CM_D_4(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_5(P,x,f,...) ORDER_PP_CM_U_5(ORDER_PP_CM_D_5(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_6(P,x,f,...) ORDER_PP_CM_D_5(ORDER_PP_CM_D_5(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_6(P,x,f,...) ORDER_PP_CM_U_6(ORDER_PP_CM_D_6(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_7(P,x,f,...) ORDER_PP_CM_D_6(ORDER_PP_CM_D_6(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_7(P,x,f,...) ORDER_PP_CM_U_7(ORDER_PP_CM_D_7(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_8(P,x,f,...) ORDER_PP_CM_D_7(ORDER_PP_CM_D_7(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_8(P,x,f,...) ORDER_PP_CM_U_8(ORDER_PP_CM_D_8(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_9(P,x,f,...) ORDER_PP_CM_D_8(ORDER_PP_CM_D_8(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_9(P,x,f,...) ORDER_PP_CM_U_9(ORDER_PP_CM_D_9(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_10(P,x,f,...) ORDER_PP_CM_D_9(ORDER_PP_CM_D_9(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_10(P,x,f,...) ORDER_PP_CM_U_10(ORDER_PP_CM_D_10(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_11(P,x,f,...) ORDER_PP_CM_D_10(ORDER_PP_CM_D_10(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_11(P,x,f,...) ORDER_PP_CM_U_11(ORDER_PP_CM_D_11(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_12(P,x,f,...) ORDER_PP_CM_D_11(ORDER_PP_CM_D_11(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_12(P,x,f,...) ORDER_PP_CM_U_12(ORDER_PP_CM_D_12(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_13(P,x,f,...) ORDER_PP_CM_D_12(ORDER_PP_CM_D_12(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_13(P,x,f,...) ORDER_PP_CM_U_13(ORDER_PP_CM_D_13(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_14(P,x,f,...) ORDER_PP_CM_D_13(ORDER_PP_CM_D_13(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_14(P,x,f,...) ORDER_PP_CM_U_14(ORDER_PP_CM_D_14(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_15(P,x,f,...) ORDER_PP_CM_D_14(ORDER_PP_CM_D_14(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_15(P,x,f,...) ORDER_PP_CM_U_15(ORDER_PP_CM_D_15(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_16(P,x,f,...) ORDER_PP_CM_D_15(ORDER_PP_CM_D_15(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_16(P,x,f,...) ORDER_PP_CM_U_16(ORDER_PP_CM_D_16(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_17(P,x,f,...) ORDER_PP_CM_D_16(ORDER_PP_CM_D_16(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_17(P,x,f,...) ORDER_PP_CM_U_17(ORDER_PP_CM_D_17(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_18(P,x,f,...) ORDER_PP_CM_D_17(ORDER_PP_CM_D_17(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_18(P,x,f,...) ORDER_PP_CM_U_18(ORDER_PP_CM_D_18(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_19(P,x,f,...) ORDER_PP_CM_D_18(ORDER_PP_CM_D_18(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_19(P,x,f,...) ORDER_PP_CM_U_19(ORDER_PP_CM_D_19(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_20(P,x,f,...) ORDER_PP_CM_D_19(ORDER_PP_CM_D_19(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_20(P,x,f,...) ORDER_PP_CM_U_20(ORDER_PP_CM_D_20(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_21(P,x,f,...) ORDER_PP_CM_D_20(ORDER_PP_CM_D_20(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_21(P,x,f,...) ORDER_PP_CM_U_21(ORDER_PP_CM_D_21(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_22(P,x,f,...) ORDER_PP_CM_D_21(ORDER_PP_CM_D_21(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_22(P,x,f,...) ORDER_PP_CM_U_22(ORDER_PP_CM_D_22(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_23(P,x,f,...) ORDER_PP_CM_D_22(ORDER_PP_CM_D_22(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_23(P,x,f,...) ORDER_PP_CM_U_23(ORDER_PP_CM_D_23(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_24(P,x,f,...) ORDER_PP_CM_D_23(ORDER_PP_CM_D_23(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_24(P,x,f,...) ORDER_PP_CM_U_24(ORDER_PP_CM_D_24(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_25(P,x,f,...) ORDER_PP_CM_D_24(ORDER_PP_CM_D_24(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_25(P,x,f,...) ORDER_PP_CM_U_25(ORDER_PP_CM_D_25(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_26(P,x,f,...) ORDER_PP_CM_D_25(ORDER_PP_CM_D_25(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_26(P,x,f,...) ORDER_PP_CM_U_26(ORDER_PP_CM_D_26(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_27(P,x,f,...) ORDER_PP_CM_D_26(ORDER_PP_CM_D_26(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_27(P,x,f,...) ORDER_PP_CM_U_27(ORDER_PP_CM_D_27(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_28(P,x,f,...) ORDER_PP_CM_D_27(ORDER_PP_CM_D_27(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_28(P,x,f,...) ORDER_PP_CM_U_28(ORDER_PP_CM_D_28(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_29(P,x,f,...) ORDER_PP_CM_D_28(ORDER_PP_CM_D_28(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_29(P,x,f,...) ORDER_PP_CM_U_29(ORDER_PP_CM_D_29(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_30(P,x,f,...) ORDER_PP_CM_D_29(ORDER_PP_CM_D_29(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_30(P,x,f,...) ORDER_PP_CM_U_30(ORDER_PP_CM_D_30(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_31(P,x,f,...) ORDER_PP_CM_D_30(ORDER_PP_CM_D_30(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_31(P,x,f,...) ORDER_PP_CM_U_31(ORDER_PP_CM_D_31(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_32(P,x,f,...) ORDER_PP_CM_D_31(ORDER_PP_CM_D_31(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_32(P,x,f,...) ORDER_PP_CM_U_32(ORDER_PP_CM_D_32(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_33(P,x,f,...) ORDER_PP_CM_D_32(ORDER_PP_CM_D_32(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_33(P,x,f,...) ORDER_PP_CM_U_33(ORDER_PP_CM_D_33(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_34(P,x,f,...) ORDER_PP_CM_D_33(ORDER_PP_CM_D_33(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_34(P,x,f,...) ORDER_PP_CM_U_34(ORDER_PP_CM_D_34(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_35(P,x,f,...) ORDER_PP_CM_D_34(ORDER_PP_CM_D_34(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_35(P,x,f,...) ORDER_PP_CM_U_35(ORDER_PP_CM_D_35(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_36(P,x,f,...) ORDER_PP_CM_D_35(ORDER_PP_CM_D_35(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_36(P,x,f,...) ORDER_PP_CM_U_36(ORDER_PP_CM_D_36(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_37(P,x,f,...) ORDER_PP_CM_D_36(ORDER_PP_CM_D_36(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_37(P,x,f,...) ORDER_PP_CM_U_37(ORDER_PP_CM_D_37(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_38(P,x,f,...) ORDER_PP_CM_D_37(ORDER_PP_CM_D_37(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_38(P,x,f,...) ORDER_PP_CM_U_38(ORDER_PP_CM_D_38(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_39(P,x,f,...) ORDER_PP_CM_D_38(ORDER_PP_CM_D_38(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_39(P,x,f,...) ORDER_PP_CM_U_39(ORDER_PP_CM_D_39(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_DN_40(P,x,f,...) ORDER_PP_CM_D_39(ORDER_PP_CM_D_39(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_40(P,x,f,...) ORDER_PP_CM_U_40(ORDER_PP_CM_D_40(ORDER_PP_CM_##f(,x##P,P##__VA_ARGS__)))
#define ORDER_PP_CM_UP_41(P,...) ,ORDER_PP_CM_ERROR_OUT_OF_ITERATIONS(!))

#define ORDER_PP_CM_ERROR_OUT_OF_ITERATIONS()

#endif
