#ifndef ORDER_PRELUDE_NAT_H_VAJK20040620
#define ORDER_PRELUDE_NAT_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8is_zero ORDER_PP_FN_CM(1,8IS_ZERO)
#define ORDER_PP_IS_ZERO(d) ORDER_PP_PTUPLE_AT_0(,ORDER_PP_IS_ZERO_##d,
#define ORDER_PP_CM_8IS_ZERO(P,x,...) (,ORDER_PP_IS_ZERO x##P),P##__VA_ARGS__)
#define ORDER_PP_IS_ZERO_0 8false
#define ORDER_PP_IS_ZERO_1 8false
#define ORDER_PP_IS_ZERO_2 8false
#define ORDER_PP_IS_ZERO_3 8false
#define ORDER_PP_IS_ZERO_4 8false
#define ORDER_PP_IS_ZERO_5 8false
#define ORDER_PP_IS_ZERO_6 8false
#define ORDER_PP_IS_ZERO_7 8false
#define ORDER_PP_IS_ZERO_8 8false
#define ORDER_PP_IS_ZERO_9 8false
#define ORDER_PP_IS_ZERO_00 8true
#define ORDER_PP_IS_ZERO_01 8false
#define ORDER_PP_IS_ZERO_02 8false
#define ORDER_PP_IS_ZERO_03 8false
#define ORDER_PP_IS_ZERO_04 8false
#define ORDER_PP_IS_ZERO_05 8false
#define ORDER_PP_IS_ZERO_06 8false
#define ORDER_PP_IS_ZERO_07 8false
#define ORDER_PP_IS_ZERO_08 8false
#define ORDER_PP_IS_ZERO_09 8false

#define ORDER_PP_DEF_8isnt_zero ORDER_PP_FN_CM(1,8ISNT_ZERO)
#define ORDER_PP_ISNT_ZERO(d) ORDER_PP_PTUPLE_AT_0(,ORDER_PP_ISNT_ZERO_##d,
#define ORDER_PP_CM_8ISNT_ZERO(P,x,...) (,ORDER_PP_ISNT_ZERO x##P),P##__VA_ARGS__)
#define ORDER_PP_ISNT_ZERO_0 8true
#define ORDER_PP_ISNT_ZERO_1 8true
#define ORDER_PP_ISNT_ZERO_2 8true
#define ORDER_PP_ISNT_ZERO_3 8true
#define ORDER_PP_ISNT_ZERO_4 8true
#define ORDER_PP_ISNT_ZERO_5 8true
#define ORDER_PP_ISNT_ZERO_6 8true
#define ORDER_PP_ISNT_ZERO_7 8true
#define ORDER_PP_ISNT_ZERO_8 8true
#define ORDER_PP_ISNT_ZERO_9 8true
#define ORDER_PP_ISNT_ZERO_00 8false
#define ORDER_PP_ISNT_ZERO_01 8true
#define ORDER_PP_ISNT_ZERO_02 8true
#define ORDER_PP_ISNT_ZERO_03 8true
#define ORDER_PP_ISNT_ZERO_04 8true
#define ORDER_PP_ISNT_ZERO_05 8true
#define ORDER_PP_ISNT_ZERO_06 8true
#define ORDER_PP_ISNT_ZERO_07 8true
#define ORDER_PP_ISNT_ZERO_08 8true
#define ORDER_PP_ISNT_ZERO_09 8true

#define ORDER_PP_DEF_8nat(...) 8NAT,ORDER_PP_PTUPLE_SIZE(,0##__VA_ARGS__),(,0##__VA_ARGS__)
#define ORDER_PP_CM_8NAT(P,e,n,d,...) (,ORDER_PP_NAT_##n d##P,P##__VA_ARGS__)
#define ORDER_PP_NAT(...) ORDER_PP_CAT(ORDER_PP_NAT_,ORDER_PP_PTUPLE_SIZE(,0##__VA_ARGS__))(,0##__VA_ARGS__)
#define ORDER_PP_NAT_1(P,_0) (P##_0)
#define ORDER_PP_NAT_2(P,_0,_1) (P##_1)(P##_0)
#define ORDER_PP_NAT_3(P,_0,_1,_2) (P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_4(P,_0,_1,_2,_3) (P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_5(P,_0,_1,_2,_3,_4) (P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_6(P,_0,_1,_2,_3,_4,_5) (P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_7(P,_0,_1,_2,_3,_4,_5,_6) (P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_8(P,_0,_1,_2,_3,_4,_5,_6,_7) (P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8) (P##_8)(P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)
#define ORDER_PP_NAT_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) (P##_9)(P##_8)(P##_7)(P##_6)(P##_5)(P##_4)(P##_3)(P##_2)(P##_1)(P##_0)

#define ORDER_PP_DEF_8nat_to_lit ORDER_PP_FN_CM(1,8NAT_TO_LIT)
#define ORDER_PP_CM_8NAT_TO_LIT(P,n,...) (,ORDER_PP_NAT_TO_LIT_OPEN_A n##P ORDER_PP_NAT_TO_LIT_CLOSE_A n##P,P##__VA_ARGS__)
#define ORDER_PP_NAT_TO_LIT_OPEN_A(d) ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_DIGIT_##d,ORDER_PP_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_LIT_OPEN_B)
#define ORDER_PP_NAT_TO_LIT_OPEN_B(d) ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_DIGIT_##d,ORDER_PP_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_LIT_OPEN_A)
#define ORDER_PP_NAT_TO_LIT_CLOSE_A(d) )ORDER_PP_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_LIT_CLOSE_B)
#define ORDER_PP_NAT_TO_LIT_CLOSE_B(d) )ORDER_PP_IS_SENTINEL_##d(,,ORDER_PP_NAT_TO_LIT_CLOSE_A)

#define ORDER_PP_DEF_8plus ORDER_PP_OP_LEFT_CM(8PLUS)
#define ORDER_PP_CM_8PLUS(P,x,y,...) ORDER_PP_CM_INVOKE(8PLUS_5,,ORDER_PP_PLUS_SPLIT_L x##P,ORDER_PP_PLUS_SPLIT_R y##P),P##__VA_ARGS__)
#define ORDER_PP_CM_8PLUS_5(P,r,x,xs,y,ys,...) (,ORDER_PP_PLUS_L_##x P##y(,r##P,P##xs,P##ys),P##__VA_ARGS__)
#define ORDER_PP_PLUS_SPLIT_L(d) 0##d,
#define ORDER_PP_PLUS_SPLIT_R(d) ORDER_PP_PLUS_R_##d,
#define ORDER_PP_PLUS_SPLIT_RC(d) ORDER_PP_PLUS_RC_##d,
#define ORDER_PP_PLUS_L_00(_0,...) ORDER_PP_PLUS_##_0
#define ORDER_PP_PLUS_L_01(_0,_1,...) ORDER_PP_PLUS_##_1
#define ORDER_PP_PLUS_L_02(_0,_1,_2,...) ORDER_PP_PLUS_##_2
#define ORDER_PP_PLUS_L_03(_0,_1,_2,_3,...) ORDER_PP_PLUS_##_3
#define ORDER_PP_PLUS_L_04(_0,_1,_2,_3,_4,...) ORDER_PP_PLUS_##_4
#define ORDER_PP_PLUS_L_05(_0,_1,_2,_3,_4,_5,...) ORDER_PP_PLUS_##_5
#define ORDER_PP_PLUS_L_06(_0,_1,_2,_3,_4,_5,_6,...) ORDER_PP_PLUS_##_6
#define ORDER_PP_PLUS_L_07(_0,_1,_2,_3,_4,_5,_6,_7,...) ORDER_PP_PLUS_##_7
#define ORDER_PP_PLUS_L_08(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) ORDER_PP_PLUS_##_8
#define ORDER_PP_PLUS_L_09(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) ORDER_PP_PLUS_##_9
#define ORDER_PP_PLUS_L_000(_0,...) ORDER_PP_PLUS_L##_0
#define ORDER_PP_PLUS_L_001(_0,_1,...) ORDER_PP_PLUS_L##_1
#define ORDER_PP_PLUS_L_002(_0,_1,_2,...) ORDER_PP_PLUS_L##_2
#define ORDER_PP_PLUS_L_003(_0,_1,_2,_3,...) ORDER_PP_PLUS_L##_3
#define ORDER_PP_PLUS_L_004(_0,_1,_2,_3,_4,...) ORDER_PP_PLUS_L##_4
#define ORDER_PP_PLUS_L_005(_0,_1,_2,_3,_4,_5,...) ORDER_PP_PLUS_L##_5
#define ORDER_PP_PLUS_L_006(_0,_1,_2,_3,_4,_5,_6,...) ORDER_PP_PLUS_L##_6
#define ORDER_PP_PLUS_L_007(_0,_1,_2,_3,_4,_5,_6,_7,...) ORDER_PP_PLUS_L##_7
#define ORDER_PP_PLUS_L_008(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) ORDER_PP_PLUS_L##_8
#define ORDER_PP_PLUS_L_009(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) ORDER_PP_PLUS_L##_9
#define ORDER_PP_PLUS_R_0 (0,1,2,3,4,5,6,7,8,9)
#define ORDER_PP_PLUS_R_1 (1,2,3,4,5,6,7,8,9,10)
#define ORDER_PP_PLUS_R_2 (2,3,4,5,6,7,8,9,10,11)
#define ORDER_PP_PLUS_R_3 (3,4,5,6,7,8,9,10,11,12)
#define ORDER_PP_PLUS_R_4 (4,5,6,7,8,9,10,11,12,13)
#define ORDER_PP_PLUS_R_5 (5,6,7,8,9,10,11,12,13,14)
#define ORDER_PP_PLUS_R_6 (6,7,8,9,10,11,12,13,14,15)
#define ORDER_PP_PLUS_R_7 (7,8,9,10,11,12,13,14,15,16)
#define ORDER_PP_PLUS_R_8 (8,9,10,11,12,13,14,15,16,17)
#define ORDER_PP_PLUS_R_9 (9,10,11,12,13,14,15,16,17,18)
#define ORDER_PP_PLUS_R_00 (0R,1R,2R,3R,4R,5R,6R,7R,8R,9R)
#define ORDER_PP_PLUS_R_01 (1R,2R,3R,4R,5R,6R,7R,8R,9R,10R)
#define ORDER_PP_PLUS_R_02 (2R,3R,4R,5R,6R,7R,8R,9R,10R,11R)
#define ORDER_PP_PLUS_R_03 (3R,4R,5R,6R,7R,8R,9R,10R,11R,12R)
#define ORDER_PP_PLUS_R_04 (4R,5R,6R,7R,8R,9R,10R,11R,12R,13R)
#define ORDER_PP_PLUS_R_05 (5R,6R,7R,8R,9R,10R,11R,12R,13R,14R)
#define ORDER_PP_PLUS_R_06 (6R,7R,8R,9R,10R,11R,12R,13R,14R,15R)
#define ORDER_PP_PLUS_R_07 (7R,8R,9R,10R,11R,12R,13R,14R,15R,16R)
#define ORDER_PP_PLUS_R_08 (8R,9R,10R,11R,12R,13R,14R,15R,16R,17R)
#define ORDER_PP_PLUS_R_09 (9R,10R,11R,12R,13R,14R,15R,16R,17R,18R)
#define ORDER_PP_PLUS_RC_0 (1,2,3,4,5,6,7,8,9,10)
#define ORDER_PP_PLUS_RC_1 (2,3,4,5,6,7,8,9,10,11)
#define ORDER_PP_PLUS_RC_2 (3,4,5,6,7,8,9,10,11,12)
#define ORDER_PP_PLUS_RC_3 (4,5,6,7,8,9,10,11,12,13)
#define ORDER_PP_PLUS_RC_4 (5,6,7,8,9,10,11,12,13,14)
#define ORDER_PP_PLUS_RC_5 (6,7,8,9,10,11,12,13,14,15)
#define ORDER_PP_PLUS_RC_6 (7,8,9,10,11,12,13,14,15,16)
#define ORDER_PP_PLUS_RC_7 (8,9,10,11,12,13,14,15,16,17)
#define ORDER_PP_PLUS_RC_8 (9,10,11,12,13,14,15,16,17,18)
#define ORDER_PP_PLUS_RC_9 (10,11,12,13,14,15,16,17,18,19)
#define ORDER_PP_PLUS_RC_00 (1R,2R,3R,4R,5R,6R,7R,8R,9R,10R)
#define ORDER_PP_PLUS_RC_01 (2R,3R,4R,5R,6R,7R,8R,9R,10R,11R)
#define ORDER_PP_PLUS_RC_02 (3R,4R,5R,6R,7R,8R,9R,10R,11R,12R)
#define ORDER_PP_PLUS_RC_03 (4R,5R,6R,7R,8R,9R,10R,11R,12R,13R)
#define ORDER_PP_PLUS_RC_04 (5R,6R,7R,8R,9R,10R,11R,12R,13R,14R)
#define ORDER_PP_PLUS_RC_05 (6R,7R,8R,9R,10R,11R,12R,13R,14R,15R)
#define ORDER_PP_PLUS_RC_06 (7R,8R,9R,10R,11R,12R,13R,14R,15R,16R)
#define ORDER_PP_PLUS_RC_07 (8R,9R,10R,11R,12R,13R,14R,15R,16R,17R)
#define ORDER_PP_PLUS_RC_08 (9R,10R,11R,12R,13R,14R,15R,16R,17R,18R)
#define ORDER_PP_PLUS_RC_09 (10R,11R,12R,13R,14R,15R,16R,17R,18R,19R)
#define ORDER_PP_PLUS_0(P,r,xs,ys) r##P(0),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_1(P,r,xs,ys) r##P(1),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_2(P,r,xs,ys) r##P(2),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_3(P,r,xs,ys) r##P(3),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_4(P,r,xs,ys) r##P(4),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_5(P,r,xs,ys) r##P(5),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_6(P,r,xs,ys) r##P(6),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_7(P,r,xs,ys) r##P(7),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_8(P,r,xs,ys) r##P(8),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_9(P,r,xs,ys) r##P(9),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_R ys##P
#define ORDER_PP_PLUS_10(P,r,xs,ys) r##P(0),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_11(P,r,xs,ys) r##P(1),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_12(P,r,xs,ys) r##P(2),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_13(P,r,xs,ys) r##P(3),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_14(P,r,xs,ys) r##P(4),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_15(P,r,xs,ys) r##P(5),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_16(P,r,xs,ys) r##P(6),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_17(P,r,xs,ys) r##P(7),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_18(P,r,xs,ys) r##P(8),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_19(P,r,xs,ys) r##P(9),8PLUS_5,ORDER_PP_PLUS_SPLIT_L xs##P,ORDER_PP_PLUS_SPLIT_RC ys##P
#define ORDER_PP_PLUS_L0(P,r,xs,ys) r##P(0)ys##P
#define ORDER_PP_PLUS_L1(P,r,xs,ys) r##P(1)ys##P
#define ORDER_PP_PLUS_L2(P,r,xs,ys) r##P(2)ys##P
#define ORDER_PP_PLUS_L3(P,r,xs,ys) r##P(3)ys##P
#define ORDER_PP_PLUS_L4(P,r,xs,ys) r##P(4)ys##P
#define ORDER_PP_PLUS_L5(P,r,xs,ys) r##P(5)ys##P
#define ORDER_PP_PLUS_L6(P,r,xs,ys) r##P(6)ys##P
#define ORDER_PP_PLUS_L7(P,r,xs,ys) r##P(7)ys##P
#define ORDER_PP_PLUS_L8(P,r,xs,ys) r##P(8)ys##P
#define ORDER_PP_PLUS_L9(P,r,xs,ys) r##P(9)ys##P
#define ORDER_PP_PLUS_L10(P,r,xs,ys) r##P(0)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L11(P,r,xs,ys) r##P(1)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L12(P,r,xs,ys) r##P(2)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L13(P,r,xs,ys) r##P(3)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L14(P,r,xs,ys) r##P(4)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L15(P,r,xs,ys) r##P(5)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L16(P,r,xs,ys) r##P(6)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L17(P,r,xs,ys) r##P(7)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L18(P,r,xs,ys) r##P(8)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_L19(P,r,xs,ys) r##P(9)ORDER_PP_SUCC ys##P
#define ORDER_PP_PLUS_0R(P,r,xs,ys) r##P(0)xs##P
#define ORDER_PP_PLUS_1R(P,r,xs,ys) r##P(1)xs##P
#define ORDER_PP_PLUS_2R(P,r,xs,ys) r##P(2)xs##P
#define ORDER_PP_PLUS_3R(P,r,xs,ys) r##P(3)xs##P
#define ORDER_PP_PLUS_4R(P,r,xs,ys) r##P(4)xs##P
#define ORDER_PP_PLUS_5R(P,r,xs,ys) r##P(5)xs##P
#define ORDER_PP_PLUS_6R(P,r,xs,ys) r##P(6)xs##P
#define ORDER_PP_PLUS_7R(P,r,xs,ys) r##P(7)xs##P
#define ORDER_PP_PLUS_8R(P,r,xs,ys) r##P(8)xs##P
#define ORDER_PP_PLUS_9R(P,r,xs,ys) r##P(9)xs##P
#define ORDER_PP_PLUS_10R(P,r,xs,ys) r##P(0)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_11R(P,r,xs,ys) r##P(1)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_12R(P,r,xs,ys) r##P(2)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_13R(P,r,xs,ys) r##P(3)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_14R(P,r,xs,ys) r##P(4)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_15R(P,r,xs,ys) r##P(5)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_16R(P,r,xs,ys) r##P(6)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_17R(P,r,xs,ys) r##P(7)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_18R(P,r,xs,ys) r##P(8)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_19R(P,r,xs,ys) r##P(9)ORDER_PP_SUCC xs##P
#define ORDER_PP_PLUS_L0R(P,r,xs,ys) r##P(00)
#define ORDER_PP_PLUS_L1R(P,r,xs,ys) r##P(01)
#define ORDER_PP_PLUS_L2R(P,r,xs,ys) r##P(02)
#define ORDER_PP_PLUS_L3R(P,r,xs,ys) r##P(03)
#define ORDER_PP_PLUS_L4R(P,r,xs,ys) r##P(04)
#define ORDER_PP_PLUS_L5R(P,r,xs,ys) r##P(05)
#define ORDER_PP_PLUS_L6R(P,r,xs,ys) r##P(06)
#define ORDER_PP_PLUS_L7R(P,r,xs,ys) r##P(07)
#define ORDER_PP_PLUS_L8R(P,r,xs,ys) r##P(08)
#define ORDER_PP_PLUS_L9R(P,r,xs,ys) r##P(09)
#define ORDER_PP_PLUS_L10R(P,r,xs,ys) r##P(0)(01)
#define ORDER_PP_PLUS_L11R(P,r,xs,ys) r##P(1)(01)
#define ORDER_PP_PLUS_L12R(P,r,xs,ys) r##P(2)(01)
#define ORDER_PP_PLUS_L13R(P,r,xs,ys) r##P(3)(01)
#define ORDER_PP_PLUS_L14R(P,r,xs,ys) r##P(4)(01)
#define ORDER_PP_PLUS_L15R(P,r,xs,ys) r##P(5)(01)
#define ORDER_PP_PLUS_L16R(P,r,xs,ys) r##P(6)(01)
#define ORDER_PP_PLUS_L17R(P,r,xs,ys) r##P(7)(01)
#define ORDER_PP_PLUS_L18R(P,r,xs,ys) r##P(8)(01)
#define ORDER_PP_PLUS_L19R(P,r,xs,ys) r##P(9)(01)

#define ORDER_PP_DEF_8pred ORDER_PP_FN_CM(1,8PRED)
#define ORDER_PP_CM_8PRED(P,n,...) (,ORDER_PP_PRED n##P,P##__VA_ARGS__)
#define ORDER_PP_PRED(d) ORDER_PP_PRED_##d
#define ORDER_PP_PRED_0 ORDER_PP_PRED_A
#define ORDER_PP_PRED_1 (0)
#define ORDER_PP_PRED_2 (1)
#define ORDER_PP_PRED_3 (2)
#define ORDER_PP_PRED_4 (3)
#define ORDER_PP_PRED_5 (4)
#define ORDER_PP_PRED_6 (5)
#define ORDER_PP_PRED_7 (6)
#define ORDER_PP_PRED_8 (7)
#define ORDER_PP_PRED_9 (8)
#define ORDER_PP_PRED_00 (00)
#define ORDER_PP_PRED_01 (00)
#define ORDER_PP_PRED_02 (01)
#define ORDER_PP_PRED_03 (02)
#define ORDER_PP_PRED_04 (03)
#define ORDER_PP_PRED_05 (04)
#define ORDER_PP_PRED_06 (05)
#define ORDER_PP_PRED_07 (06)
#define ORDER_PP_PRED_08 (07)
#define ORDER_PP_PRED_09 (08)
#define ORDER_PP_PRED_A(d) ORDER_PP_PRED_A_##d
#define ORDER_PP_PRED_A_0 (9)ORDER_PP_PRED_B
#define ORDER_PP_PRED_A_1 (9)(0)
#define ORDER_PP_PRED_A_2 (9)(1)
#define ORDER_PP_PRED_A_3 (9)(2)
#define ORDER_PP_PRED_A_4 (9)(3)
#define ORDER_PP_PRED_A_5 (9)(4)
#define ORDER_PP_PRED_A_6 (9)(5)
#define ORDER_PP_PRED_A_7 (9)(6)
#define ORDER_PP_PRED_A_8 (9)(7)
#define ORDER_PP_PRED_A_9 (9)(8)
#define ORDER_PP_PRED_A_01 (09)
#define ORDER_PP_PRED_A_02 (9)(01)
#define ORDER_PP_PRED_A_03 (9)(02)
#define ORDER_PP_PRED_A_04 (9)(03)
#define ORDER_PP_PRED_A_05 (9)(04)
#define ORDER_PP_PRED_A_06 (9)(05)
#define ORDER_PP_PRED_A_07 (9)(06)
#define ORDER_PP_PRED_A_08 (9)(07)
#define ORDER_PP_PRED_A_09 (9)(08)
#define ORDER_PP_PRED_B(d) ORDER_PP_PRED_B_##d
#define ORDER_PP_PRED_B_0 (9)ORDER_PP_PRED_A
#define ORDER_PP_PRED_B_1 (9)(0)
#define ORDER_PP_PRED_B_2 (9)(1)
#define ORDER_PP_PRED_B_3 (9)(2)
#define ORDER_PP_PRED_B_4 (9)(3)
#define ORDER_PP_PRED_B_5 (9)(4)
#define ORDER_PP_PRED_B_6 (9)(5)
#define ORDER_PP_PRED_B_7 (9)(6)
#define ORDER_PP_PRED_B_8 (9)(7)
#define ORDER_PP_PRED_B_9 (9)(8)
#define ORDER_PP_PRED_B_01 (09)
#define ORDER_PP_PRED_B_02 (9)(01)
#define ORDER_PP_PRED_B_03 (9)(02)
#define ORDER_PP_PRED_B_04 (9)(03)
#define ORDER_PP_PRED_B_05 (9)(04)
#define ORDER_PP_PRED_B_06 (9)(05)
#define ORDER_PP_PRED_B_07 (9)(06)
#define ORDER_PP_PRED_B_08 (9)(07)
#define ORDER_PP_PRED_B_09 (9)(08)

#define ORDER_PP_DEF_8succ ORDER_PP_FN_CM(1,8SUCC)
#define ORDER_PP_CM_8SUCC(P,n,...) (,ORDER_PP_SUCC n##P,P##__VA_ARGS__)
#define ORDER_PP_SUCC(d) ORDER_PP_SUCC_##d
#define ORDER_PP_SUCC_0 (1)
#define ORDER_PP_SUCC_1 (2)
#define ORDER_PP_SUCC_2 (3)
#define ORDER_PP_SUCC_3 (4)
#define ORDER_PP_SUCC_4 (5)
#define ORDER_PP_SUCC_5 (6)
#define ORDER_PP_SUCC_6 (7)
#define ORDER_PP_SUCC_7 (8)
#define ORDER_PP_SUCC_8 (9)
#define ORDER_PP_SUCC_9 (0)ORDER_PP_SUCC_B
#define ORDER_PP_SUCC_00 (01)
#define ORDER_PP_SUCC_01 (02)
#define ORDER_PP_SUCC_02 (03)
#define ORDER_PP_SUCC_03 (04)
#define ORDER_PP_SUCC_04 (05)
#define ORDER_PP_SUCC_05 (06)
#define ORDER_PP_SUCC_06 (07)
#define ORDER_PP_SUCC_07 (08)
#define ORDER_PP_SUCC_08 (09)
#define ORDER_PP_SUCC_09 (0)(01)
#define ORDER_PP_SUCC_B(d) ORDER_PP_SUCC_B_##d
#define ORDER_PP_SUCC_B_0 (1)
#define ORDER_PP_SUCC_B_1 (2)
#define ORDER_PP_SUCC_B_2 (3)
#define ORDER_PP_SUCC_B_3 (4)
#define ORDER_PP_SUCC_B_4 (5)
#define ORDER_PP_SUCC_B_5 (6)
#define ORDER_PP_SUCC_B_6 (7)
#define ORDER_PP_SUCC_B_7 (8)
#define ORDER_PP_SUCC_B_8 (9)
#define ORDER_PP_SUCC_B_9 (0)ORDER_PP_SUCC
#define ORDER_PP_SUCC_B_00 (01)
#define ORDER_PP_SUCC_B_01 (02)
#define ORDER_PP_SUCC_B_02 (03)
#define ORDER_PP_SUCC_B_03 (04)
#define ORDER_PP_SUCC_B_04 (05)
#define ORDER_PP_SUCC_B_05 (06)
#define ORDER_PP_SUCC_B_06 (07)
#define ORDER_PP_SUCC_B_07 (08)
#define ORDER_PP_SUCC_B_08 (09)
#define ORDER_PP_SUCC_B_09 (0)(01)

// Details

#define ORDER_PP_DIGIT_0 0
#define ORDER_PP_DIGIT_1 1
#define ORDER_PP_DIGIT_2 2
#define ORDER_PP_DIGIT_3 3
#define ORDER_PP_DIGIT_4 4
#define ORDER_PP_DIGIT_5 5
#define ORDER_PP_DIGIT_6 6
#define ORDER_PP_DIGIT_7 7
#define ORDER_PP_DIGIT_8 8
#define ORDER_PP_DIGIT_9 9
#define ORDER_PP_DIGIT_00 0
#define ORDER_PP_DIGIT_01 1
#define ORDER_PP_DIGIT_02 2
#define ORDER_PP_DIGIT_03 3
#define ORDER_PP_DIGIT_04 4
#define ORDER_PP_DIGIT_05 5
#define ORDER_PP_DIGIT_06 6
#define ORDER_PP_DIGIT_07 7
#define ORDER_PP_DIGIT_08 8
#define ORDER_PP_DIGIT_09 9

#define ORDER_PP_IS_SENTINEL_0(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_1(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_2(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_3(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_4(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_5(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_6(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_7(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_8(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_9(P,t,...) P##__VA_ARGS__
#define ORDER_PP_IS_SENTINEL_00(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_01(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_02(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_03(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_04(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_05(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_06(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_07(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_08(P,t,...) P##t
#define ORDER_PP_IS_SENTINEL_09(P,t,...) P##t

#endif
