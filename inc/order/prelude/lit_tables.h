// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

/*
(let ((n 100))
   (defun natural (x)
     (if (<  x 10)
       (concat "(0" (number-to-string x) ")")
       (concat "(" (number-to-string (% x 10)) ")" (natural (/ x 10)))))
   (defun literal (x)
     (cond
       ((< x 0) (concat "()" (literal (- x))))
       ((> x n) (natural x))
       (t (number-to-string x))))
   (insert "\n\n")
   (loop for i from 0 to n do
     (if (= i 8)
       (insert "// See \"quote.h\"\n")
       (insert "#define ORDER_PP_DEF_" (literal i) " 8DEF_CONST," (literal i) ",\n")))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_SYM_" (literal i) "_" (literal i) "(P,v) ,P##v,\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_TO_NAT_" (literal i) " " (natural i) "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_INC_" (literal i) " " (literal (+ i 1)) "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_DEC_" (literal i) " " (literal (- i 1)) "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_PLUS_" (literal i) " ")
     (loop for j from 0 to i do
       (unless (= 0 j) (insert ","))
       (insert (literal (+ i j))))
     (insert "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_MINUS_" (literal i) " ")
     (loop for j from 0 to i do
       (unless (= 0 j) (insert ","))
       (insert (literal (- i j))))
     (insert "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_TIMES_" (literal i) " ")
     (loop for j from 0 to i do
       (unless (= 0 j) (insert ","))
       (insert (literal (* i j))))
     (insert "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_QUOTIENT_" (literal i) " ")
     (loop for j from 0 to i do
       (unless (= 0 j) (insert ","))
       (insert (if (= 0 j) "ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!)" (literal (/ i j)))))
     (insert "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_REMAINDER_" (literal i) " ")
     (loop for j from 0 to i do
       (unless (= 0 j) (insert ","))
       (insert (if (= 0 j) "ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!)" (literal (% i j)))))
     (insert "\n"))
   (insert "\n")
   (loop for i from 0 to n do
     (insert "#define ORDER_PP_LIT_LESS_" (literal i) " ")
     (loop for j from 0 to n do
       (unless (= 0 j) (insert ","))
       (insert (if (< i j) "" "0")))
     (insert "\n")))
*/

#define ORDER_PP_DEF_0 8DEF_CONST,0,
#define ORDER_PP_DEF_1 8DEF_CONST,1,
#define ORDER_PP_DEF_2 8DEF_CONST,2,
#define ORDER_PP_DEF_3 8DEF_CONST,3,
#define ORDER_PP_DEF_4 8DEF_CONST,4,
#define ORDER_PP_DEF_5 8DEF_CONST,5,
#define ORDER_PP_DEF_6 8DEF_CONST,6,
#define ORDER_PP_DEF_7 8DEF_CONST,7,
// See "quote.h"
#define ORDER_PP_DEF_9 8DEF_CONST,9,
#define ORDER_PP_DEF_10 8DEF_CONST,10,
#define ORDER_PP_DEF_11 8DEF_CONST,11,
#define ORDER_PP_DEF_12 8DEF_CONST,12,
#define ORDER_PP_DEF_13 8DEF_CONST,13,
#define ORDER_PP_DEF_14 8DEF_CONST,14,
#define ORDER_PP_DEF_15 8DEF_CONST,15,
#define ORDER_PP_DEF_16 8DEF_CONST,16,
#define ORDER_PP_DEF_17 8DEF_CONST,17,
#define ORDER_PP_DEF_18 8DEF_CONST,18,
#define ORDER_PP_DEF_19 8DEF_CONST,19,
#define ORDER_PP_DEF_20 8DEF_CONST,20,
#define ORDER_PP_DEF_21 8DEF_CONST,21,
#define ORDER_PP_DEF_22 8DEF_CONST,22,
#define ORDER_PP_DEF_23 8DEF_CONST,23,
#define ORDER_PP_DEF_24 8DEF_CONST,24,
#define ORDER_PP_DEF_25 8DEF_CONST,25,
#define ORDER_PP_DEF_26 8DEF_CONST,26,
#define ORDER_PP_DEF_27 8DEF_CONST,27,
#define ORDER_PP_DEF_28 8DEF_CONST,28,
#define ORDER_PP_DEF_29 8DEF_CONST,29,
#define ORDER_PP_DEF_30 8DEF_CONST,30,
#define ORDER_PP_DEF_31 8DEF_CONST,31,
#define ORDER_PP_DEF_32 8DEF_CONST,32,
#define ORDER_PP_DEF_33 8DEF_CONST,33,
#define ORDER_PP_DEF_34 8DEF_CONST,34,
#define ORDER_PP_DEF_35 8DEF_CONST,35,
#define ORDER_PP_DEF_36 8DEF_CONST,36,
#define ORDER_PP_DEF_37 8DEF_CONST,37,
#define ORDER_PP_DEF_38 8DEF_CONST,38,
#define ORDER_PP_DEF_39 8DEF_CONST,39,
#define ORDER_PP_DEF_40 8DEF_CONST,40,
#define ORDER_PP_DEF_41 8DEF_CONST,41,
#define ORDER_PP_DEF_42 8DEF_CONST,42,
#define ORDER_PP_DEF_43 8DEF_CONST,43,
#define ORDER_PP_DEF_44 8DEF_CONST,44,
#define ORDER_PP_DEF_45 8DEF_CONST,45,
#define ORDER_PP_DEF_46 8DEF_CONST,46,
#define ORDER_PP_DEF_47 8DEF_CONST,47,
#define ORDER_PP_DEF_48 8DEF_CONST,48,
#define ORDER_PP_DEF_49 8DEF_CONST,49,
#define ORDER_PP_DEF_50 8DEF_CONST,50,
#define ORDER_PP_DEF_51 8DEF_CONST,51,
#define ORDER_PP_DEF_52 8DEF_CONST,52,
#define ORDER_PP_DEF_53 8DEF_CONST,53,
#define ORDER_PP_DEF_54 8DEF_CONST,54,
#define ORDER_PP_DEF_55 8DEF_CONST,55,
#define ORDER_PP_DEF_56 8DEF_CONST,56,
#define ORDER_PP_DEF_57 8DEF_CONST,57,
#define ORDER_PP_DEF_58 8DEF_CONST,58,
#define ORDER_PP_DEF_59 8DEF_CONST,59,
#define ORDER_PP_DEF_60 8DEF_CONST,60,
#define ORDER_PP_DEF_61 8DEF_CONST,61,
#define ORDER_PP_DEF_62 8DEF_CONST,62,
#define ORDER_PP_DEF_63 8DEF_CONST,63,
#define ORDER_PP_DEF_64 8DEF_CONST,64,
#define ORDER_PP_DEF_65 8DEF_CONST,65,
#define ORDER_PP_DEF_66 8DEF_CONST,66,
#define ORDER_PP_DEF_67 8DEF_CONST,67,
#define ORDER_PP_DEF_68 8DEF_CONST,68,
#define ORDER_PP_DEF_69 8DEF_CONST,69,
#define ORDER_PP_DEF_70 8DEF_CONST,70,
#define ORDER_PP_DEF_71 8DEF_CONST,71,
#define ORDER_PP_DEF_72 8DEF_CONST,72,
#define ORDER_PP_DEF_73 8DEF_CONST,73,
#define ORDER_PP_DEF_74 8DEF_CONST,74,
#define ORDER_PP_DEF_75 8DEF_CONST,75,
#define ORDER_PP_DEF_76 8DEF_CONST,76,
#define ORDER_PP_DEF_77 8DEF_CONST,77,
#define ORDER_PP_DEF_78 8DEF_CONST,78,
#define ORDER_PP_DEF_79 8DEF_CONST,79,
#define ORDER_PP_DEF_80 8DEF_CONST,80,
#define ORDER_PP_DEF_81 8DEF_CONST,81,
#define ORDER_PP_DEF_82 8DEF_CONST,82,
#define ORDER_PP_DEF_83 8DEF_CONST,83,
#define ORDER_PP_DEF_84 8DEF_CONST,84,
#define ORDER_PP_DEF_85 8DEF_CONST,85,
#define ORDER_PP_DEF_86 8DEF_CONST,86,
#define ORDER_PP_DEF_87 8DEF_CONST,87,
#define ORDER_PP_DEF_88 8DEF_CONST,88,
#define ORDER_PP_DEF_89 8DEF_CONST,89,
#define ORDER_PP_DEF_90 8DEF_CONST,90,
#define ORDER_PP_DEF_91 8DEF_CONST,91,
#define ORDER_PP_DEF_92 8DEF_CONST,92,
#define ORDER_PP_DEF_93 8DEF_CONST,93,
#define ORDER_PP_DEF_94 8DEF_CONST,94,
#define ORDER_PP_DEF_95 8DEF_CONST,95,
#define ORDER_PP_DEF_96 8DEF_CONST,96,
#define ORDER_PP_DEF_97 8DEF_CONST,97,
#define ORDER_PP_DEF_98 8DEF_CONST,98,
#define ORDER_PP_DEF_99 8DEF_CONST,99,
#define ORDER_PP_DEF_100 8DEF_CONST,100,

#define ORDER_PP_SYM_0_0(P,v) ,P##v,
#define ORDER_PP_SYM_1_1(P,v) ,P##v,
#define ORDER_PP_SYM_2_2(P,v) ,P##v,
#define ORDER_PP_SYM_3_3(P,v) ,P##v,
#define ORDER_PP_SYM_4_4(P,v) ,P##v,
#define ORDER_PP_SYM_5_5(P,v) ,P##v,
#define ORDER_PP_SYM_6_6(P,v) ,P##v,
#define ORDER_PP_SYM_7_7(P,v) ,P##v,
#define ORDER_PP_SYM_8_8(P,v) ,P##v,
#define ORDER_PP_SYM_9_9(P,v) ,P##v,
#define ORDER_PP_SYM_10_10(P,v) ,P##v,
#define ORDER_PP_SYM_11_11(P,v) ,P##v,
#define ORDER_PP_SYM_12_12(P,v) ,P##v,
#define ORDER_PP_SYM_13_13(P,v) ,P##v,
#define ORDER_PP_SYM_14_14(P,v) ,P##v,
#define ORDER_PP_SYM_15_15(P,v) ,P##v,
#define ORDER_PP_SYM_16_16(P,v) ,P##v,
#define ORDER_PP_SYM_17_17(P,v) ,P##v,
#define ORDER_PP_SYM_18_18(P,v) ,P##v,
#define ORDER_PP_SYM_19_19(P,v) ,P##v,
#define ORDER_PP_SYM_20_20(P,v) ,P##v,
#define ORDER_PP_SYM_21_21(P,v) ,P##v,
#define ORDER_PP_SYM_22_22(P,v) ,P##v,
#define ORDER_PP_SYM_23_23(P,v) ,P##v,
#define ORDER_PP_SYM_24_24(P,v) ,P##v,
#define ORDER_PP_SYM_25_25(P,v) ,P##v,
#define ORDER_PP_SYM_26_26(P,v) ,P##v,
#define ORDER_PP_SYM_27_27(P,v) ,P##v,
#define ORDER_PP_SYM_28_28(P,v) ,P##v,
#define ORDER_PP_SYM_29_29(P,v) ,P##v,
#define ORDER_PP_SYM_30_30(P,v) ,P##v,
#define ORDER_PP_SYM_31_31(P,v) ,P##v,
#define ORDER_PP_SYM_32_32(P,v) ,P##v,
#define ORDER_PP_SYM_33_33(P,v) ,P##v,
#define ORDER_PP_SYM_34_34(P,v) ,P##v,
#define ORDER_PP_SYM_35_35(P,v) ,P##v,
#define ORDER_PP_SYM_36_36(P,v) ,P##v,
#define ORDER_PP_SYM_37_37(P,v) ,P##v,
#define ORDER_PP_SYM_38_38(P,v) ,P##v,
#define ORDER_PP_SYM_39_39(P,v) ,P##v,
#define ORDER_PP_SYM_40_40(P,v) ,P##v,
#define ORDER_PP_SYM_41_41(P,v) ,P##v,
#define ORDER_PP_SYM_42_42(P,v) ,P##v,
#define ORDER_PP_SYM_43_43(P,v) ,P##v,
#define ORDER_PP_SYM_44_44(P,v) ,P##v,
#define ORDER_PP_SYM_45_45(P,v) ,P##v,
#define ORDER_PP_SYM_46_46(P,v) ,P##v,
#define ORDER_PP_SYM_47_47(P,v) ,P##v,
#define ORDER_PP_SYM_48_48(P,v) ,P##v,
#define ORDER_PP_SYM_49_49(P,v) ,P##v,
#define ORDER_PP_SYM_50_50(P,v) ,P##v,
#define ORDER_PP_SYM_51_51(P,v) ,P##v,
#define ORDER_PP_SYM_52_52(P,v) ,P##v,
#define ORDER_PP_SYM_53_53(P,v) ,P##v,
#define ORDER_PP_SYM_54_54(P,v) ,P##v,
#define ORDER_PP_SYM_55_55(P,v) ,P##v,
#define ORDER_PP_SYM_56_56(P,v) ,P##v,
#define ORDER_PP_SYM_57_57(P,v) ,P##v,
#define ORDER_PP_SYM_58_58(P,v) ,P##v,
#define ORDER_PP_SYM_59_59(P,v) ,P##v,
#define ORDER_PP_SYM_60_60(P,v) ,P##v,
#define ORDER_PP_SYM_61_61(P,v) ,P##v,
#define ORDER_PP_SYM_62_62(P,v) ,P##v,
#define ORDER_PP_SYM_63_63(P,v) ,P##v,
#define ORDER_PP_SYM_64_64(P,v) ,P##v,
#define ORDER_PP_SYM_65_65(P,v) ,P##v,
#define ORDER_PP_SYM_66_66(P,v) ,P##v,
#define ORDER_PP_SYM_67_67(P,v) ,P##v,
#define ORDER_PP_SYM_68_68(P,v) ,P##v,
#define ORDER_PP_SYM_69_69(P,v) ,P##v,
#define ORDER_PP_SYM_70_70(P,v) ,P##v,
#define ORDER_PP_SYM_71_71(P,v) ,P##v,
#define ORDER_PP_SYM_72_72(P,v) ,P##v,
#define ORDER_PP_SYM_73_73(P,v) ,P##v,
#define ORDER_PP_SYM_74_74(P,v) ,P##v,
#define ORDER_PP_SYM_75_75(P,v) ,P##v,
#define ORDER_PP_SYM_76_76(P,v) ,P##v,
#define ORDER_PP_SYM_77_77(P,v) ,P##v,
#define ORDER_PP_SYM_78_78(P,v) ,P##v,
#define ORDER_PP_SYM_79_79(P,v) ,P##v,
#define ORDER_PP_SYM_80_80(P,v) ,P##v,
#define ORDER_PP_SYM_81_81(P,v) ,P##v,
#define ORDER_PP_SYM_82_82(P,v) ,P##v,
#define ORDER_PP_SYM_83_83(P,v) ,P##v,
#define ORDER_PP_SYM_84_84(P,v) ,P##v,
#define ORDER_PP_SYM_85_85(P,v) ,P##v,
#define ORDER_PP_SYM_86_86(P,v) ,P##v,
#define ORDER_PP_SYM_87_87(P,v) ,P##v,
#define ORDER_PP_SYM_88_88(P,v) ,P##v,
#define ORDER_PP_SYM_89_89(P,v) ,P##v,
#define ORDER_PP_SYM_90_90(P,v) ,P##v,
#define ORDER_PP_SYM_91_91(P,v) ,P##v,
#define ORDER_PP_SYM_92_92(P,v) ,P##v,
#define ORDER_PP_SYM_93_93(P,v) ,P##v,
#define ORDER_PP_SYM_94_94(P,v) ,P##v,
#define ORDER_PP_SYM_95_95(P,v) ,P##v,
#define ORDER_PP_SYM_96_96(P,v) ,P##v,
#define ORDER_PP_SYM_97_97(P,v) ,P##v,
#define ORDER_PP_SYM_98_98(P,v) ,P##v,
#define ORDER_PP_SYM_99_99(P,v) ,P##v,
#define ORDER_PP_SYM_100_100(P,v) ,P##v,

#define ORDER_PP_LIT_TO_NAT_0 (00)
#define ORDER_PP_LIT_TO_NAT_1 (01)
#define ORDER_PP_LIT_TO_NAT_2 (02)
#define ORDER_PP_LIT_TO_NAT_3 (03)
#define ORDER_PP_LIT_TO_NAT_4 (04)
#define ORDER_PP_LIT_TO_NAT_5 (05)
#define ORDER_PP_LIT_TO_NAT_6 (06)
#define ORDER_PP_LIT_TO_NAT_7 (07)
#define ORDER_PP_LIT_TO_NAT_8 (08)
#define ORDER_PP_LIT_TO_NAT_9 (09)
#define ORDER_PP_LIT_TO_NAT_10 (0)(01)
#define ORDER_PP_LIT_TO_NAT_11 (1)(01)
#define ORDER_PP_LIT_TO_NAT_12 (2)(01)
#define ORDER_PP_LIT_TO_NAT_13 (3)(01)
#define ORDER_PP_LIT_TO_NAT_14 (4)(01)
#define ORDER_PP_LIT_TO_NAT_15 (5)(01)
#define ORDER_PP_LIT_TO_NAT_16 (6)(01)
#define ORDER_PP_LIT_TO_NAT_17 (7)(01)
#define ORDER_PP_LIT_TO_NAT_18 (8)(01)
#define ORDER_PP_LIT_TO_NAT_19 (9)(01)
#define ORDER_PP_LIT_TO_NAT_20 (0)(02)
#define ORDER_PP_LIT_TO_NAT_21 (1)(02)
#define ORDER_PP_LIT_TO_NAT_22 (2)(02)
#define ORDER_PP_LIT_TO_NAT_23 (3)(02)
#define ORDER_PP_LIT_TO_NAT_24 (4)(02)
#define ORDER_PP_LIT_TO_NAT_25 (5)(02)
#define ORDER_PP_LIT_TO_NAT_26 (6)(02)
#define ORDER_PP_LIT_TO_NAT_27 (7)(02)
#define ORDER_PP_LIT_TO_NAT_28 (8)(02)
#define ORDER_PP_LIT_TO_NAT_29 (9)(02)
#define ORDER_PP_LIT_TO_NAT_30 (0)(03)
#define ORDER_PP_LIT_TO_NAT_31 (1)(03)
#define ORDER_PP_LIT_TO_NAT_32 (2)(03)
#define ORDER_PP_LIT_TO_NAT_33 (3)(03)
#define ORDER_PP_LIT_TO_NAT_34 (4)(03)
#define ORDER_PP_LIT_TO_NAT_35 (5)(03)
#define ORDER_PP_LIT_TO_NAT_36 (6)(03)
#define ORDER_PP_LIT_TO_NAT_37 (7)(03)
#define ORDER_PP_LIT_TO_NAT_38 (8)(03)
#define ORDER_PP_LIT_TO_NAT_39 (9)(03)
#define ORDER_PP_LIT_TO_NAT_40 (0)(04)
#define ORDER_PP_LIT_TO_NAT_41 (1)(04)
#define ORDER_PP_LIT_TO_NAT_42 (2)(04)
#define ORDER_PP_LIT_TO_NAT_43 (3)(04)
#define ORDER_PP_LIT_TO_NAT_44 (4)(04)
#define ORDER_PP_LIT_TO_NAT_45 (5)(04)
#define ORDER_PP_LIT_TO_NAT_46 (6)(04)
#define ORDER_PP_LIT_TO_NAT_47 (7)(04)
#define ORDER_PP_LIT_TO_NAT_48 (8)(04)
#define ORDER_PP_LIT_TO_NAT_49 (9)(04)
#define ORDER_PP_LIT_TO_NAT_50 (0)(05)
#define ORDER_PP_LIT_TO_NAT_51 (1)(05)
#define ORDER_PP_LIT_TO_NAT_52 (2)(05)
#define ORDER_PP_LIT_TO_NAT_53 (3)(05)
#define ORDER_PP_LIT_TO_NAT_54 (4)(05)
#define ORDER_PP_LIT_TO_NAT_55 (5)(05)
#define ORDER_PP_LIT_TO_NAT_56 (6)(05)
#define ORDER_PP_LIT_TO_NAT_57 (7)(05)
#define ORDER_PP_LIT_TO_NAT_58 (8)(05)
#define ORDER_PP_LIT_TO_NAT_59 (9)(05)
#define ORDER_PP_LIT_TO_NAT_60 (0)(06)
#define ORDER_PP_LIT_TO_NAT_61 (1)(06)
#define ORDER_PP_LIT_TO_NAT_62 (2)(06)
#define ORDER_PP_LIT_TO_NAT_63 (3)(06)
#define ORDER_PP_LIT_TO_NAT_64 (4)(06)
#define ORDER_PP_LIT_TO_NAT_65 (5)(06)
#define ORDER_PP_LIT_TO_NAT_66 (6)(06)
#define ORDER_PP_LIT_TO_NAT_67 (7)(06)
#define ORDER_PP_LIT_TO_NAT_68 (8)(06)
#define ORDER_PP_LIT_TO_NAT_69 (9)(06)
#define ORDER_PP_LIT_TO_NAT_70 (0)(07)
#define ORDER_PP_LIT_TO_NAT_71 (1)(07)
#define ORDER_PP_LIT_TO_NAT_72 (2)(07)
#define ORDER_PP_LIT_TO_NAT_73 (3)(07)
#define ORDER_PP_LIT_TO_NAT_74 (4)(07)
#define ORDER_PP_LIT_TO_NAT_75 (5)(07)
#define ORDER_PP_LIT_TO_NAT_76 (6)(07)
#define ORDER_PP_LIT_TO_NAT_77 (7)(07)
#define ORDER_PP_LIT_TO_NAT_78 (8)(07)
#define ORDER_PP_LIT_TO_NAT_79 (9)(07)
#define ORDER_PP_LIT_TO_NAT_80 (0)(08)
#define ORDER_PP_LIT_TO_NAT_81 (1)(08)
#define ORDER_PP_LIT_TO_NAT_82 (2)(08)
#define ORDER_PP_LIT_TO_NAT_83 (3)(08)
#define ORDER_PP_LIT_TO_NAT_84 (4)(08)
#define ORDER_PP_LIT_TO_NAT_85 (5)(08)
#define ORDER_PP_LIT_TO_NAT_86 (6)(08)
#define ORDER_PP_LIT_TO_NAT_87 (7)(08)
#define ORDER_PP_LIT_TO_NAT_88 (8)(08)
#define ORDER_PP_LIT_TO_NAT_89 (9)(08)
#define ORDER_PP_LIT_TO_NAT_90 (0)(09)
#define ORDER_PP_LIT_TO_NAT_91 (1)(09)
#define ORDER_PP_LIT_TO_NAT_92 (2)(09)
#define ORDER_PP_LIT_TO_NAT_93 (3)(09)
#define ORDER_PP_LIT_TO_NAT_94 (4)(09)
#define ORDER_PP_LIT_TO_NAT_95 (5)(09)
#define ORDER_PP_LIT_TO_NAT_96 (6)(09)
#define ORDER_PP_LIT_TO_NAT_97 (7)(09)
#define ORDER_PP_LIT_TO_NAT_98 (8)(09)
#define ORDER_PP_LIT_TO_NAT_99 (9)(09)
#define ORDER_PP_LIT_TO_NAT_100 (0)(0)(01)

#define ORDER_PP_LIT_INC_0 1
#define ORDER_PP_LIT_INC_1 2
#define ORDER_PP_LIT_INC_2 3
#define ORDER_PP_LIT_INC_3 4
#define ORDER_PP_LIT_INC_4 5
#define ORDER_PP_LIT_INC_5 6
#define ORDER_PP_LIT_INC_6 7
#define ORDER_PP_LIT_INC_7 8
#define ORDER_PP_LIT_INC_8 9
#define ORDER_PP_LIT_INC_9 10
#define ORDER_PP_LIT_INC_10 11
#define ORDER_PP_LIT_INC_11 12
#define ORDER_PP_LIT_INC_12 13
#define ORDER_PP_LIT_INC_13 14
#define ORDER_PP_LIT_INC_14 15
#define ORDER_PP_LIT_INC_15 16
#define ORDER_PP_LIT_INC_16 17
#define ORDER_PP_LIT_INC_17 18
#define ORDER_PP_LIT_INC_18 19
#define ORDER_PP_LIT_INC_19 20
#define ORDER_PP_LIT_INC_20 21
#define ORDER_PP_LIT_INC_21 22
#define ORDER_PP_LIT_INC_22 23
#define ORDER_PP_LIT_INC_23 24
#define ORDER_PP_LIT_INC_24 25
#define ORDER_PP_LIT_INC_25 26
#define ORDER_PP_LIT_INC_26 27
#define ORDER_PP_LIT_INC_27 28
#define ORDER_PP_LIT_INC_28 29
#define ORDER_PP_LIT_INC_29 30
#define ORDER_PP_LIT_INC_30 31
#define ORDER_PP_LIT_INC_31 32
#define ORDER_PP_LIT_INC_32 33
#define ORDER_PP_LIT_INC_33 34
#define ORDER_PP_LIT_INC_34 35
#define ORDER_PP_LIT_INC_35 36
#define ORDER_PP_LIT_INC_36 37
#define ORDER_PP_LIT_INC_37 38
#define ORDER_PP_LIT_INC_38 39
#define ORDER_PP_LIT_INC_39 40
#define ORDER_PP_LIT_INC_40 41
#define ORDER_PP_LIT_INC_41 42
#define ORDER_PP_LIT_INC_42 43
#define ORDER_PP_LIT_INC_43 44
#define ORDER_PP_LIT_INC_44 45
#define ORDER_PP_LIT_INC_45 46
#define ORDER_PP_LIT_INC_46 47
#define ORDER_PP_LIT_INC_47 48
#define ORDER_PP_LIT_INC_48 49
#define ORDER_PP_LIT_INC_49 50
#define ORDER_PP_LIT_INC_50 51
#define ORDER_PP_LIT_INC_51 52
#define ORDER_PP_LIT_INC_52 53
#define ORDER_PP_LIT_INC_53 54
#define ORDER_PP_LIT_INC_54 55
#define ORDER_PP_LIT_INC_55 56
#define ORDER_PP_LIT_INC_56 57
#define ORDER_PP_LIT_INC_57 58
#define ORDER_PP_LIT_INC_58 59
#define ORDER_PP_LIT_INC_59 60
#define ORDER_PP_LIT_INC_60 61
#define ORDER_PP_LIT_INC_61 62
#define ORDER_PP_LIT_INC_62 63
#define ORDER_PP_LIT_INC_63 64
#define ORDER_PP_LIT_INC_64 65
#define ORDER_PP_LIT_INC_65 66
#define ORDER_PP_LIT_INC_66 67
#define ORDER_PP_LIT_INC_67 68
#define ORDER_PP_LIT_INC_68 69
#define ORDER_PP_LIT_INC_69 70
#define ORDER_PP_LIT_INC_70 71
#define ORDER_PP_LIT_INC_71 72
#define ORDER_PP_LIT_INC_72 73
#define ORDER_PP_LIT_INC_73 74
#define ORDER_PP_LIT_INC_74 75
#define ORDER_PP_LIT_INC_75 76
#define ORDER_PP_LIT_INC_76 77
#define ORDER_PP_LIT_INC_77 78
#define ORDER_PP_LIT_INC_78 79
#define ORDER_PP_LIT_INC_79 80
#define ORDER_PP_LIT_INC_80 81
#define ORDER_PP_LIT_INC_81 82
#define ORDER_PP_LIT_INC_82 83
#define ORDER_PP_LIT_INC_83 84
#define ORDER_PP_LIT_INC_84 85
#define ORDER_PP_LIT_INC_85 86
#define ORDER_PP_LIT_INC_86 87
#define ORDER_PP_LIT_INC_87 88
#define ORDER_PP_LIT_INC_88 89
#define ORDER_PP_LIT_INC_89 90
#define ORDER_PP_LIT_INC_90 91
#define ORDER_PP_LIT_INC_91 92
#define ORDER_PP_LIT_INC_92 93
#define ORDER_PP_LIT_INC_93 94
#define ORDER_PP_LIT_INC_94 95
#define ORDER_PP_LIT_INC_95 96
#define ORDER_PP_LIT_INC_96 97
#define ORDER_PP_LIT_INC_97 98
#define ORDER_PP_LIT_INC_98 99
#define ORDER_PP_LIT_INC_99 100
#define ORDER_PP_LIT_INC_100 (1)(0)(01)

#define ORDER_PP_LIT_DEC_0 ()1
#define ORDER_PP_LIT_DEC_1 0
#define ORDER_PP_LIT_DEC_2 1
#define ORDER_PP_LIT_DEC_3 2
#define ORDER_PP_LIT_DEC_4 3
#define ORDER_PP_LIT_DEC_5 4
#define ORDER_PP_LIT_DEC_6 5
#define ORDER_PP_LIT_DEC_7 6
#define ORDER_PP_LIT_DEC_8 7
#define ORDER_PP_LIT_DEC_9 8
#define ORDER_PP_LIT_DEC_10 9
#define ORDER_PP_LIT_DEC_11 10
#define ORDER_PP_LIT_DEC_12 11
#define ORDER_PP_LIT_DEC_13 12
#define ORDER_PP_LIT_DEC_14 13
#define ORDER_PP_LIT_DEC_15 14
#define ORDER_PP_LIT_DEC_16 15
#define ORDER_PP_LIT_DEC_17 16
#define ORDER_PP_LIT_DEC_18 17
#define ORDER_PP_LIT_DEC_19 18
#define ORDER_PP_LIT_DEC_20 19
#define ORDER_PP_LIT_DEC_21 20
#define ORDER_PP_LIT_DEC_22 21
#define ORDER_PP_LIT_DEC_23 22
#define ORDER_PP_LIT_DEC_24 23
#define ORDER_PP_LIT_DEC_25 24
#define ORDER_PP_LIT_DEC_26 25
#define ORDER_PP_LIT_DEC_27 26
#define ORDER_PP_LIT_DEC_28 27
#define ORDER_PP_LIT_DEC_29 28
#define ORDER_PP_LIT_DEC_30 29
#define ORDER_PP_LIT_DEC_31 30
#define ORDER_PP_LIT_DEC_32 31
#define ORDER_PP_LIT_DEC_33 32
#define ORDER_PP_LIT_DEC_34 33
#define ORDER_PP_LIT_DEC_35 34
#define ORDER_PP_LIT_DEC_36 35
#define ORDER_PP_LIT_DEC_37 36
#define ORDER_PP_LIT_DEC_38 37
#define ORDER_PP_LIT_DEC_39 38
#define ORDER_PP_LIT_DEC_40 39
#define ORDER_PP_LIT_DEC_41 40
#define ORDER_PP_LIT_DEC_42 41
#define ORDER_PP_LIT_DEC_43 42
#define ORDER_PP_LIT_DEC_44 43
#define ORDER_PP_LIT_DEC_45 44
#define ORDER_PP_LIT_DEC_46 45
#define ORDER_PP_LIT_DEC_47 46
#define ORDER_PP_LIT_DEC_48 47
#define ORDER_PP_LIT_DEC_49 48
#define ORDER_PP_LIT_DEC_50 49
#define ORDER_PP_LIT_DEC_51 50
#define ORDER_PP_LIT_DEC_52 51
#define ORDER_PP_LIT_DEC_53 52
#define ORDER_PP_LIT_DEC_54 53
#define ORDER_PP_LIT_DEC_55 54
#define ORDER_PP_LIT_DEC_56 55
#define ORDER_PP_LIT_DEC_57 56
#define ORDER_PP_LIT_DEC_58 57
#define ORDER_PP_LIT_DEC_59 58
#define ORDER_PP_LIT_DEC_60 59
#define ORDER_PP_LIT_DEC_61 60
#define ORDER_PP_LIT_DEC_62 61
#define ORDER_PP_LIT_DEC_63 62
#define ORDER_PP_LIT_DEC_64 63
#define ORDER_PP_LIT_DEC_65 64
#define ORDER_PP_LIT_DEC_66 65
#define ORDER_PP_LIT_DEC_67 66
#define ORDER_PP_LIT_DEC_68 67
#define ORDER_PP_LIT_DEC_69 68
#define ORDER_PP_LIT_DEC_70 69
#define ORDER_PP_LIT_DEC_71 70
#define ORDER_PP_LIT_DEC_72 71
#define ORDER_PP_LIT_DEC_73 72
#define ORDER_PP_LIT_DEC_74 73
#define ORDER_PP_LIT_DEC_75 74
#define ORDER_PP_LIT_DEC_76 75
#define ORDER_PP_LIT_DEC_77 76
#define ORDER_PP_LIT_DEC_78 77
#define ORDER_PP_LIT_DEC_79 78
#define ORDER_PP_LIT_DEC_80 79
#define ORDER_PP_LIT_DEC_81 80
#define ORDER_PP_LIT_DEC_82 81
#define ORDER_PP_LIT_DEC_83 82
#define ORDER_PP_LIT_DEC_84 83
#define ORDER_PP_LIT_DEC_85 84
#define ORDER_PP_LIT_DEC_86 85
#define ORDER_PP_LIT_DEC_87 86
#define ORDER_PP_LIT_DEC_88 87
#define ORDER_PP_LIT_DEC_89 88
#define ORDER_PP_LIT_DEC_90 89
#define ORDER_PP_LIT_DEC_91 90
#define ORDER_PP_LIT_DEC_92 91
#define ORDER_PP_LIT_DEC_93 92
#define ORDER_PP_LIT_DEC_94 93
#define ORDER_PP_LIT_DEC_95 94
#define ORDER_PP_LIT_DEC_96 95
#define ORDER_PP_LIT_DEC_97 96
#define ORDER_PP_LIT_DEC_98 97
#define ORDER_PP_LIT_DEC_99 98
#define ORDER_PP_LIT_DEC_100 99

#define ORDER_PP_LIT_PLUS_0 0
#define ORDER_PP_LIT_PLUS_1 1,2
#define ORDER_PP_LIT_PLUS_2 2,3,4
#define ORDER_PP_LIT_PLUS_3 3,4,5,6
#define ORDER_PP_LIT_PLUS_4 4,5,6,7,8
#define ORDER_PP_LIT_PLUS_5 5,6,7,8,9,10
#define ORDER_PP_LIT_PLUS_6 6,7,8,9,10,11,12
#define ORDER_PP_LIT_PLUS_7 7,8,9,10,11,12,13,14
#define ORDER_PP_LIT_PLUS_8 8,9,10,11,12,13,14,15,16
#define ORDER_PP_LIT_PLUS_9 9,10,11,12,13,14,15,16,17,18
#define ORDER_PP_LIT_PLUS_10 10,11,12,13,14,15,16,17,18,19,20
#define ORDER_PP_LIT_PLUS_11 11,12,13,14,15,16,17,18,19,20,21,22
#define ORDER_PP_LIT_PLUS_12 12,13,14,15,16,17,18,19,20,21,22,23,24
#define ORDER_PP_LIT_PLUS_13 13,14,15,16,17,18,19,20,21,22,23,24,25,26
#define ORDER_PP_LIT_PLUS_14 14,15,16,17,18,19,20,21,22,23,24,25,26,27,28
#define ORDER_PP_LIT_PLUS_15 15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
#define ORDER_PP_LIT_PLUS_16 16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32
#define ORDER_PP_LIT_PLUS_17 17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34
#define ORDER_PP_LIT_PLUS_18 18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36
#define ORDER_PP_LIT_PLUS_19 19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38
#define ORDER_PP_LIT_PLUS_20 20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40
#define ORDER_PP_LIT_PLUS_21 21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42
#define ORDER_PP_LIT_PLUS_22 22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44
#define ORDER_PP_LIT_PLUS_23 23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46
#define ORDER_PP_LIT_PLUS_24 24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48
#define ORDER_PP_LIT_PLUS_25 25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50
#define ORDER_PP_LIT_PLUS_26 26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52
#define ORDER_PP_LIT_PLUS_27 27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54
#define ORDER_PP_LIT_PLUS_28 28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56
#define ORDER_PP_LIT_PLUS_29 29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58
#define ORDER_PP_LIT_PLUS_30 30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60
#define ORDER_PP_LIT_PLUS_31 31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62
#define ORDER_PP_LIT_PLUS_32 32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64
#define ORDER_PP_LIT_PLUS_33 33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66
#define ORDER_PP_LIT_PLUS_34 34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68
#define ORDER_PP_LIT_PLUS_35 35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70
#define ORDER_PP_LIT_PLUS_36 36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72
#define ORDER_PP_LIT_PLUS_37 37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74
#define ORDER_PP_LIT_PLUS_38 38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76
#define ORDER_PP_LIT_PLUS_39 39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78
#define ORDER_PP_LIT_PLUS_40 40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80
#define ORDER_PP_LIT_PLUS_41 41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82
#define ORDER_PP_LIT_PLUS_42 42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84
#define ORDER_PP_LIT_PLUS_43 43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86
#define ORDER_PP_LIT_PLUS_44 44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88
#define ORDER_PP_LIT_PLUS_45 45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90
#define ORDER_PP_LIT_PLUS_46 46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92
#define ORDER_PP_LIT_PLUS_47 47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94
#define ORDER_PP_LIT_PLUS_48 48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96
#define ORDER_PP_LIT_PLUS_49 49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98
#define ORDER_PP_LIT_PLUS_50 50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100
#define ORDER_PP_LIT_PLUS_51 51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01)
#define ORDER_PP_LIT_PLUS_52 52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01)
#define ORDER_PP_LIT_PLUS_53 53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01)
#define ORDER_PP_LIT_PLUS_54 54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01)
#define ORDER_PP_LIT_PLUS_55 55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01)
#define ORDER_PP_LIT_PLUS_56 56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01)
#define ORDER_PP_LIT_PLUS_57 57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01)
#define ORDER_PP_LIT_PLUS_58 58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01)
#define ORDER_PP_LIT_PLUS_59 59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01)
#define ORDER_PP_LIT_PLUS_60 60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01)
#define ORDER_PP_LIT_PLUS_61 61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01)
#define ORDER_PP_LIT_PLUS_62 62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01)
#define ORDER_PP_LIT_PLUS_63 63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01)
#define ORDER_PP_LIT_PLUS_64 64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01)
#define ORDER_PP_LIT_PLUS_65 65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01)
#define ORDER_PP_LIT_PLUS_66 66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01)
#define ORDER_PP_LIT_PLUS_67 67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01)
#define ORDER_PP_LIT_PLUS_68 68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01)
#define ORDER_PP_LIT_PLUS_69 69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01)
#define ORDER_PP_LIT_PLUS_70 70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01)
#define ORDER_PP_LIT_PLUS_71 71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01)
#define ORDER_PP_LIT_PLUS_72 72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01)
#define ORDER_PP_LIT_PLUS_73 73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01)
#define ORDER_PP_LIT_PLUS_74 74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01)
#define ORDER_PP_LIT_PLUS_75 75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01)
#define ORDER_PP_LIT_PLUS_76 76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01)
#define ORDER_PP_LIT_PLUS_77 77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01)
#define ORDER_PP_LIT_PLUS_78 78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01)
#define ORDER_PP_LIT_PLUS_79 79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01)
#define ORDER_PP_LIT_PLUS_80 80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01)
#define ORDER_PP_LIT_PLUS_81 81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01)
#define ORDER_PP_LIT_PLUS_82 82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01)
#define ORDER_PP_LIT_PLUS_83 83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01)
#define ORDER_PP_LIT_PLUS_84 84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01)
#define ORDER_PP_LIT_PLUS_85 85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01)
#define ORDER_PP_LIT_PLUS_86 86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01)
#define ORDER_PP_LIT_PLUS_87 87,88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01)
#define ORDER_PP_LIT_PLUS_88 88,89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01)
#define ORDER_PP_LIT_PLUS_89 89,90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01)
#define ORDER_PP_LIT_PLUS_90 90,91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01)
#define ORDER_PP_LIT_PLUS_91 91,92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01)
#define ORDER_PP_LIT_PLUS_92 92,93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01)
#define ORDER_PP_LIT_PLUS_93 93,94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01)
#define ORDER_PP_LIT_PLUS_94 94,95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01)
#define ORDER_PP_LIT_PLUS_95 95,96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01)
#define ORDER_PP_LIT_PLUS_96 96,97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01),(1)(9)(01),(2)(9)(01)
#define ORDER_PP_LIT_PLUS_97 97,98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01),(1)(9)(01),(2)(9)(01),(3)(9)(01),(4)(9)(01)
#define ORDER_PP_LIT_PLUS_98 98,99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01),(1)(9)(01),(2)(9)(01),(3)(9)(01),(4)(9)(01),(5)(9)(01),(6)(9)(01)
#define ORDER_PP_LIT_PLUS_99 99,100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01),(1)(9)(01),(2)(9)(01),(3)(9)(01),(4)(9)(01),(5)(9)(01),(6)(9)(01),(7)(9)(01),(8)(9)(01)
#define ORDER_PP_LIT_PLUS_100 100,(1)(0)(01),(2)(0)(01),(3)(0)(01),(4)(0)(01),(5)(0)(01),(6)(0)(01),(7)(0)(01),(8)(0)(01),(9)(0)(01),(0)(1)(01),(1)(1)(01),(2)(1)(01),(3)(1)(01),(4)(1)(01),(5)(1)(01),(6)(1)(01),(7)(1)(01),(8)(1)(01),(9)(1)(01),(0)(2)(01),(1)(2)(01),(2)(2)(01),(3)(2)(01),(4)(2)(01),(5)(2)(01),(6)(2)(01),(7)(2)(01),(8)(2)(01),(9)(2)(01),(0)(3)(01),(1)(3)(01),(2)(3)(01),(3)(3)(01),(4)(3)(01),(5)(3)(01),(6)(3)(01),(7)(3)(01),(8)(3)(01),(9)(3)(01),(0)(4)(01),(1)(4)(01),(2)(4)(01),(3)(4)(01),(4)(4)(01),(5)(4)(01),(6)(4)(01),(7)(4)(01),(8)(4)(01),(9)(4)(01),(0)(5)(01),(1)(5)(01),(2)(5)(01),(3)(5)(01),(4)(5)(01),(5)(5)(01),(6)(5)(01),(7)(5)(01),(8)(5)(01),(9)(5)(01),(0)(6)(01),(1)(6)(01),(2)(6)(01),(3)(6)(01),(4)(6)(01),(5)(6)(01),(6)(6)(01),(7)(6)(01),(8)(6)(01),(9)(6)(01),(0)(7)(01),(1)(7)(01),(2)(7)(01),(3)(7)(01),(4)(7)(01),(5)(7)(01),(6)(7)(01),(7)(7)(01),(8)(7)(01),(9)(7)(01),(0)(8)(01),(1)(8)(01),(2)(8)(01),(3)(8)(01),(4)(8)(01),(5)(8)(01),(6)(8)(01),(7)(8)(01),(8)(8)(01),(9)(8)(01),(0)(9)(01),(1)(9)(01),(2)(9)(01),(3)(9)(01),(4)(9)(01),(5)(9)(01),(6)(9)(01),(7)(9)(01),(8)(9)(01),(9)(9)(01),(0)(0)(02)

#define ORDER_PP_LIT_MINUS_0 0
#define ORDER_PP_LIT_MINUS_1 1,0
#define ORDER_PP_LIT_MINUS_2 2,1,0
#define ORDER_PP_LIT_MINUS_3 3,2,1,0
#define ORDER_PP_LIT_MINUS_4 4,3,2,1,0
#define ORDER_PP_LIT_MINUS_5 5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_6 6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_7 7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_8 8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_9 9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_10 10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_11 11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_12 12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_13 13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_14 14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_15 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_16 16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_17 17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_18 18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_19 19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_20 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_21 21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_22 22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_23 23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_24 24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_25 25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_26 26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_27 27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_28 28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_29 29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_30 30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_31 31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_32 32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_33 33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_34 34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_35 35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_36 36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_37 37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_38 38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_39 39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_40 40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_41 41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_42 42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_43 43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_44 44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_45 45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_46 46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_47 47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_48 48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_49 49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_50 50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_51 51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_52 52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_53 53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_54 54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_55 55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_56 56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_57 57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_58 58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_59 59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_60 60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_61 61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_62 62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_63 63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_64 64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_65 65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_66 66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_67 67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_68 68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_69 69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_70 70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_71 71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_72 72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_73 73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_74 74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_75 75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_76 76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_77 77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_78 78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_79 79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_80 80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_81 81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_82 82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_83 83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_84 84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_85 85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_86 86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_87 87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_88 88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_89 89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_90 90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_91 91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_92 92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_93 93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_94 94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_95 95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_96 96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_97 97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_98 98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_99 99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_MINUS_100 100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0

#define ORDER_PP_LIT_TIMES_0 0
#define ORDER_PP_LIT_TIMES_1 0,1
#define ORDER_PP_LIT_TIMES_2 0,2,4
#define ORDER_PP_LIT_TIMES_3 0,3,6,9
#define ORDER_PP_LIT_TIMES_4 0,4,8,12,16
#define ORDER_PP_LIT_TIMES_5 0,5,10,15,20,25
#define ORDER_PP_LIT_TIMES_6 0,6,12,18,24,30,36
#define ORDER_PP_LIT_TIMES_7 0,7,14,21,28,35,42,49
#define ORDER_PP_LIT_TIMES_8 0,8,16,24,32,40,48,56,64
#define ORDER_PP_LIT_TIMES_9 0,9,18,27,36,45,54,63,72,81
#define ORDER_PP_LIT_TIMES_10 0,10,20,30,40,50,60,70,80,90,100
#define ORDER_PP_LIT_TIMES_11 0,11,22,33,44,55,66,77,88,99,(0)(1)(01),(1)(2)(01)
#define ORDER_PP_LIT_TIMES_12 0,12,24,36,48,60,72,84,96,(8)(0)(01),(0)(2)(01),(2)(3)(01),(4)(4)(01)
#define ORDER_PP_LIT_TIMES_13 0,13,26,39,52,65,78,91,(4)(0)(01),(7)(1)(01),(0)(3)(01),(3)(4)(01),(6)(5)(01),(9)(6)(01)
#define ORDER_PP_LIT_TIMES_14 0,14,28,42,56,70,84,98,(2)(1)(01),(6)(2)(01),(0)(4)(01),(4)(5)(01),(8)(6)(01),(2)(8)(01),(6)(9)(01)
#define ORDER_PP_LIT_TIMES_15 0,15,30,45,60,75,90,(5)(0)(01),(0)(2)(01),(5)(3)(01),(0)(5)(01),(5)(6)(01),(0)(8)(01),(5)(9)(01),(0)(1)(02),(5)(2)(02)
#define ORDER_PP_LIT_TIMES_16 0,16,32,48,64,80,96,(2)(1)(01),(8)(2)(01),(4)(4)(01),(0)(6)(01),(6)(7)(01),(2)(9)(01),(8)(0)(02),(4)(2)(02),(0)(4)(02),(6)(5)(02)
#define ORDER_PP_LIT_TIMES_17 0,17,34,51,68,85,(2)(0)(01),(9)(1)(01),(6)(3)(01),(3)(5)(01),(0)(7)(01),(7)(8)(01),(4)(0)(02),(1)(2)(02),(8)(3)(02),(5)(5)(02),(2)(7)(02),(9)(8)(02)
#define ORDER_PP_LIT_TIMES_18 0,18,36,54,72,90,(8)(0)(01),(6)(2)(01),(4)(4)(01),(2)(6)(01),(0)(8)(01),(8)(9)(01),(6)(1)(02),(4)(3)(02),(2)(5)(02),(0)(7)(02),(8)(8)(02),(6)(0)(03),(4)(2)(03)
#define ORDER_PP_LIT_TIMES_19 0,19,38,57,76,95,(4)(1)(01),(3)(3)(01),(2)(5)(01),(1)(7)(01),(0)(9)(01),(9)(0)(02),(8)(2)(02),(7)(4)(02),(6)(6)(02),(5)(8)(02),(4)(0)(03),(3)(2)(03),(2)(4)(03),(1)(6)(03)
#define ORDER_PP_LIT_TIMES_20 0,20,40,60,80,100,(0)(2)(01),(0)(4)(01),(0)(6)(01),(0)(8)(01),(0)(0)(02),(0)(2)(02),(0)(4)(02),(0)(6)(02),(0)(8)(02),(0)(0)(03),(0)(2)(03),(0)(4)(03),(0)(6)(03),(0)(8)(03),(0)(0)(04)
#define ORDER_PP_LIT_TIMES_21 0,21,42,63,84,(5)(0)(01),(6)(2)(01),(7)(4)(01),(8)(6)(01),(9)(8)(01),(0)(1)(02),(1)(3)(02),(2)(5)(02),(3)(7)(02),(4)(9)(02),(5)(1)(03),(6)(3)(03),(7)(5)(03),(8)(7)(03),(9)(9)(03),(0)(2)(04),(1)(4)(04)
#define ORDER_PP_LIT_TIMES_22 0,22,44,66,88,(0)(1)(01),(2)(3)(01),(4)(5)(01),(6)(7)(01),(8)(9)(01),(0)(2)(02),(2)(4)(02),(4)(6)(02),(6)(8)(02),(8)(0)(03),(0)(3)(03),(2)(5)(03),(4)(7)(03),(6)(9)(03),(8)(1)(04),(0)(4)(04),(2)(6)(04),(4)(8)(04)
#define ORDER_PP_LIT_TIMES_23 0,23,46,69,92,(5)(1)(01),(8)(3)(01),(1)(6)(01),(4)(8)(01),(7)(0)(02),(0)(3)(02),(3)(5)(02),(6)(7)(02),(9)(9)(02),(2)(2)(03),(5)(4)(03),(8)(6)(03),(1)(9)(03),(4)(1)(04),(7)(3)(04),(0)(6)(04),(3)(8)(04),(6)(0)(05),(9)(2)(05)
#define ORDER_PP_LIT_TIMES_24 0,24,48,72,96,(0)(2)(01),(4)(4)(01),(8)(6)(01),(2)(9)(01),(6)(1)(02),(0)(4)(02),(4)(6)(02),(8)(8)(02),(2)(1)(03),(6)(3)(03),(0)(6)(03),(4)(8)(03),(8)(0)(04),(2)(3)(04),(6)(5)(04),(0)(8)(04),(4)(0)(05),(8)(2)(05),(2)(5)(05),(6)(7)(05)
#define ORDER_PP_LIT_TIMES_25 0,25,50,75,100,(5)(2)(01),(0)(5)(01),(5)(7)(01),(0)(0)(02),(5)(2)(02),(0)(5)(02),(5)(7)(02),(0)(0)(03),(5)(2)(03),(0)(5)(03),(5)(7)(03),(0)(0)(04),(5)(2)(04),(0)(5)(04),(5)(7)(04),(0)(0)(05),(5)(2)(05),(0)(5)(05),(5)(7)(05),(0)(0)(06),(5)(2)(06)
#define ORDER_PP_LIT_TIMES_26 0,26,52,78,(4)(0)(01),(0)(3)(01),(6)(5)(01),(2)(8)(01),(8)(0)(02),(4)(3)(02),(0)(6)(02),(6)(8)(02),(2)(1)(03),(8)(3)(03),(4)(6)(03),(0)(9)(03),(6)(1)(04),(2)(4)(04),(8)(6)(04),(4)(9)(04),(0)(2)(05),(6)(4)(05),(2)(7)(05),(8)(9)(05),(4)(2)(06),(0)(5)(06),(6)(7)(06)
#define ORDER_PP_LIT_TIMES_27 0,27,54,81,(8)(0)(01),(5)(3)(01),(2)(6)(01),(9)(8)(01),(6)(1)(02),(3)(4)(02),(0)(7)(02),(7)(9)(02),(4)(2)(03),(1)(5)(03),(8)(7)(03),(5)(0)(04),(2)(3)(04),(9)(5)(04),(6)(8)(04),(3)(1)(05),(0)(4)(05),(7)(6)(05),(4)(9)(05),(1)(2)(06),(8)(4)(06),(5)(7)(06),(2)(0)(07),(9)(2)(07)
#define ORDER_PP_LIT_TIMES_28 0,28,56,84,(2)(1)(01),(0)(4)(01),(8)(6)(01),(6)(9)(01),(4)(2)(02),(2)(5)(02),(0)(8)(02),(8)(0)(03),(6)(3)(03),(4)(6)(03),(2)(9)(03),(0)(2)(04),(8)(4)(04),(6)(7)(04),(4)(0)(05),(2)(3)(05),(0)(6)(05),(8)(8)(05),(6)(1)(06),(4)(4)(06),(2)(7)(06),(0)(0)(07),(8)(2)(07),(6)(5)(07),(4)(8)(07)
#define ORDER_PP_LIT_TIMES_29 0,29,58,87,(6)(1)(01),(5)(4)(01),(4)(7)(01),(3)(0)(02),(2)(3)(02),(1)(6)(02),(0)(9)(02),(9)(1)(03),(8)(4)(03),(7)(7)(03),(6)(0)(04),(5)(3)(04),(4)(6)(04),(3)(9)(04),(2)(2)(05),(1)(5)(05),(0)(8)(05),(9)(0)(06),(8)(3)(06),(7)(6)(06),(6)(9)(06),(5)(2)(07),(4)(5)(07),(3)(8)(07),(2)(1)(08),(1)(4)(08)
#define ORDER_PP_LIT_TIMES_30 0,30,60,90,(0)(2)(01),(0)(5)(01),(0)(8)(01),(0)(1)(02),(0)(4)(02),(0)(7)(02),(0)(0)(03),(0)(3)(03),(0)(6)(03),(0)(9)(03),(0)(2)(04),(0)(5)(04),(0)(8)(04),(0)(1)(05),(0)(4)(05),(0)(7)(05),(0)(0)(06),(0)(3)(06),(0)(6)(06),(0)(9)(06),(0)(2)(07),(0)(5)(07),(0)(8)(07),(0)(1)(08),(0)(4)(08),(0)(7)(08),(0)(0)(09)
#define ORDER_PP_LIT_TIMES_31 0,31,62,93,(4)(2)(01),(5)(5)(01),(6)(8)(01),(7)(1)(02),(8)(4)(02),(9)(7)(02),(0)(1)(03),(1)(4)(03),(2)(7)(03),(3)(0)(04),(4)(3)(04),(5)(6)(04),(6)(9)(04),(7)(2)(05),(8)(5)(05),(9)(8)(05),(0)(2)(06),(1)(5)(06),(2)(8)(06),(3)(1)(07),(4)(4)(07),(5)(7)(07),(6)(0)(08),(7)(3)(08),(8)(6)(08),(9)(9)(08),(0)(3)(09),(1)(6)(09)
#define ORDER_PP_LIT_TIMES_32 0,32,64,96,(8)(2)(01),(0)(6)(01),(2)(9)(01),(4)(2)(02),(6)(5)(02),(8)(8)(02),(0)(2)(03),(2)(5)(03),(4)(8)(03),(6)(1)(04),(8)(4)(04),(0)(8)(04),(2)(1)(05),(4)(4)(05),(6)(7)(05),(8)(0)(06),(0)(4)(06),(2)(7)(06),(4)(0)(07),(6)(3)(07),(8)(6)(07),(0)(0)(08),(2)(3)(08),(4)(6)(08),(6)(9)(08),(8)(2)(09),(0)(6)(09),(2)(9)(09),(4)(2)(0)(01)
#define ORDER_PP_LIT_TIMES_33 0,33,66,99,(2)(3)(01),(5)(6)(01),(8)(9)(01),(1)(3)(02),(4)(6)(02),(7)(9)(02),(0)(3)(03),(3)(6)(03),(6)(9)(03),(9)(2)(04),(2)(6)(04),(5)(9)(04),(8)(2)(05),(1)(6)(05),(4)(9)(05),(7)(2)(06),(0)(6)(06),(3)(9)(06),(6)(2)(07),(9)(5)(07),(2)(9)(07),(5)(2)(08),(8)(5)(08),(1)(9)(08),(4)(2)(09),(7)(5)(09),(0)(9)(09),(3)(2)(0)(01),(6)(5)(0)(01),(9)(8)(0)(01)
#define ORDER_PP_LIT_TIMES_34 0,34,68,(2)(0)(01),(6)(3)(01),(0)(7)(01),(4)(0)(02),(8)(3)(02),(2)(7)(02),(6)(0)(03),(0)(4)(03),(4)(7)(03),(8)(0)(04),(2)(4)(04),(6)(7)(04),(0)(1)(05),(4)(4)(05),(8)(7)(05),(2)(1)(06),(6)(4)(06),(0)(8)(06),(4)(1)(07),(8)(4)(07),(2)(8)(07),(6)(1)(08),(0)(5)(08),(4)(8)(08),(8)(1)(09),(2)(5)(09),(6)(8)(09),(0)(2)(0)(01),(4)(5)(0)(01),(8)(8)(0)(01),(2)(2)(1)(01),(6)(5)(1)(01)
#define ORDER_PP_LIT_TIMES_35 0,35,70,(5)(0)(01),(0)(4)(01),(5)(7)(01),(0)(1)(02),(5)(4)(02),(0)(8)(02),(5)(1)(03),(0)(5)(03),(5)(8)(03),(0)(2)(04),(5)(5)(04),(0)(9)(04),(5)(2)(05),(0)(6)(05),(5)(9)(05),(0)(3)(06),(5)(6)(06),(0)(0)(07),(5)(3)(07),(0)(7)(07),(5)(0)(08),(0)(4)(08),(5)(7)(08),(0)(1)(09),(5)(4)(09),(0)(8)(09),(5)(1)(0)(01),(0)(5)(0)(01),(5)(8)(0)(01),(0)(2)(1)(01),(5)(5)(1)(01),(0)(9)(1)(01),(5)(2)(2)(01)
#define ORDER_PP_LIT_TIMES_36 0,36,72,(8)(0)(01),(4)(4)(01),(0)(8)(01),(6)(1)(02),(2)(5)(02),(8)(8)(02),(4)(2)(03),(0)(6)(03),(6)(9)(03),(2)(3)(04),(8)(6)(04),(4)(0)(05),(0)(4)(05),(6)(7)(05),(2)(1)(06),(8)(4)(06),(4)(8)(06),(0)(2)(07),(6)(5)(07),(2)(9)(07),(8)(2)(08),(4)(6)(08),(0)(0)(09),(6)(3)(09),(2)(7)(09),(8)(0)(0)(01),(4)(4)(0)(01),(0)(8)(0)(01),(6)(1)(1)(01),(2)(5)(1)(01),(8)(8)(1)(01),(4)(2)(2)(01),(0)(6)(2)(01),(6)(9)(2)(01)
#define ORDER_PP_LIT_TIMES_37 0,37,74,(1)(1)(01),(8)(4)(01),(5)(8)(01),(2)(2)(02),(9)(5)(02),(6)(9)(02),(3)(3)(03),(0)(7)(03),(7)(0)(04),(4)(4)(04),(1)(8)(04),(8)(1)(05),(5)(5)(05),(2)(9)(05),(9)(2)(06),(6)(6)(06),(3)(0)(07),(0)(4)(07),(7)(7)(07),(4)(1)(08),(1)(5)(08),(8)(8)(08),(5)(2)(09),(2)(6)(09),(9)(9)(09),(6)(3)(0)(01),(3)(7)(0)(01),(0)(1)(1)(01),(7)(4)(1)(01),(4)(8)(1)(01),(1)(2)(2)(01),(8)(5)(2)(01),(5)(9)(2)(01),(2)(3)(3)(01),(9)(6)(3)(01)
#define ORDER_PP_LIT_TIMES_38 0,38,76,(4)(1)(01),(2)(5)(01),(0)(9)(01),(8)(2)(02),(6)(6)(02),(4)(0)(03),(2)(4)(03),(0)(8)(03),(8)(1)(04),(6)(5)(04),(4)(9)(04),(2)(3)(05),(0)(7)(05),(8)(0)(06),(6)(4)(06),(4)(8)(06),(2)(2)(07),(0)(6)(07),(8)(9)(07),(6)(3)(08),(4)(7)(08),(2)(1)(09),(0)(5)(09),(8)(8)(09),(6)(2)(0)(01),(4)(6)(0)(01),(2)(0)(1)(01),(0)(4)(1)(01),(8)(7)(1)(01),(6)(1)(2)(01),(4)(5)(2)(01),(2)(9)(2)(01),(0)(3)(3)(01),(8)(6)(3)(01),(6)(0)(4)(01),(4)(4)(4)(01)
#define ORDER_PP_LIT_TIMES_39 0,39,78,(7)(1)(01),(6)(5)(01),(5)(9)(01),(4)(3)(02),(3)(7)(02),(2)(1)(03),(1)(5)(03),(0)(9)(03),(9)(2)(04),(8)(6)(04),(7)(0)(05),(6)(4)(05),(5)(8)(05),(4)(2)(06),(3)(6)(06),(2)(0)(07),(1)(4)(07),(0)(8)(07),(9)(1)(08),(8)(5)(08),(7)(9)(08),(6)(3)(09),(5)(7)(09),(4)(1)(0)(01),(3)(5)(0)(01),(2)(9)(0)(01),(1)(3)(1)(01),(0)(7)(1)(01),(9)(0)(2)(01),(8)(4)(2)(01),(7)(8)(2)(01),(6)(2)(3)(01),(5)(6)(3)(01),(4)(0)(4)(01),(3)(4)(4)(01),(2)(8)(4)(01),(1)(2)(5)(01)
#define ORDER_PP_LIT_TIMES_40 0,40,80,(0)(2)(01),(0)(6)(01),(0)(0)(02),(0)(4)(02),(0)(8)(02),(0)(2)(03),(0)(6)(03),(0)(0)(04),(0)(4)(04),(0)(8)(04),(0)(2)(05),(0)(6)(05),(0)(0)(06),(0)(4)(06),(0)(8)(06),(0)(2)(07),(0)(6)(07),(0)(0)(08),(0)(4)(08),(0)(8)(08),(0)(2)(09),(0)(6)(09),(0)(0)(0)(01),(0)(4)(0)(01),(0)(8)(0)(01),(0)(2)(1)(01),(0)(6)(1)(01),(0)(0)(2)(01),(0)(4)(2)(01),(0)(8)(2)(01),(0)(2)(3)(01),(0)(6)(3)(01),(0)(0)(4)(01),(0)(4)(4)(01),(0)(8)(4)(01),(0)(2)(5)(01),(0)(6)(5)(01),(0)(0)(6)(01)
#define ORDER_PP_LIT_TIMES_41 0,41,82,(3)(2)(01),(4)(6)(01),(5)(0)(02),(6)(4)(02),(7)(8)(02),(8)(2)(03),(9)(6)(03),(0)(1)(04),(1)(5)(04),(2)(9)(04),(3)(3)(05),(4)(7)(05),(5)(1)(06),(6)(5)(06),(7)(9)(06),(8)(3)(07),(9)(7)(07),(0)(2)(08),(1)(6)(08),(2)(0)(09),(3)(4)(09),(4)(8)(09),(5)(2)(0)(01),(6)(6)(0)(01),(7)(0)(1)(01),(8)(4)(1)(01),(9)(8)(1)(01),(0)(3)(2)(01),(1)(7)(2)(01),(2)(1)(3)(01),(3)(5)(3)(01),(4)(9)(3)(01),(5)(3)(4)(01),(6)(7)(4)(01),(7)(1)(5)(01),(8)(5)(5)(01),(9)(9)(5)(01),(0)(4)(6)(01),(1)(8)(6)(01)
#define ORDER_PP_LIT_TIMES_42 0,42,84,(6)(2)(01),(8)(6)(01),(0)(1)(02),(2)(5)(02),(4)(9)(02),(6)(3)(03),(8)(7)(03),(0)(2)(04),(2)(6)(04),(4)(0)(05),(6)(4)(05),(8)(8)(05),(0)(3)(06),(2)(7)(06),(4)(1)(07),(6)(5)(07),(8)(9)(07),(0)(4)(08),(2)(8)(08),(4)(2)(09),(6)(6)(09),(8)(0)(0)(01),(0)(5)(0)(01),(2)(9)(0)(01),(4)(3)(1)(01),(6)(7)(1)(01),(8)(1)(2)(01),(0)(6)(2)(01),(2)(0)(3)(01),(4)(4)(3)(01),(6)(8)(3)(01),(8)(2)(4)(01),(0)(7)(4)(01),(2)(1)(5)(01),(4)(5)(5)(01),(6)(9)(5)(01),(8)(3)(6)(01),(0)(8)(6)(01),(2)(2)(7)(01),(4)(6)(7)(01)
#define ORDER_PP_LIT_TIMES_43 0,43,86,(9)(2)(01),(2)(7)(01),(5)(1)(02),(8)(5)(02),(1)(0)(03),(4)(4)(03),(7)(8)(03),(0)(3)(04),(3)(7)(04),(6)(1)(05),(9)(5)(05),(2)(0)(06),(5)(4)(06),(8)(8)(06),(1)(3)(07),(4)(7)(07),(7)(1)(08),(0)(6)(08),(3)(0)(09),(6)(4)(09),(9)(8)(09),(2)(3)(0)(01),(5)(7)(0)(01),(8)(1)(1)(01),(1)(6)(1)(01),(4)(0)(2)(01),(7)(4)(2)(01),(0)(9)(2)(01),(3)(3)(3)(01),(6)(7)(3)(01),(9)(1)(4)(01),(2)(6)(4)(01),(5)(0)(5)(01),(8)(4)(5)(01),(1)(9)(5)(01),(4)(3)(6)(01),(7)(7)(6)(01),(0)(2)(7)(01),(3)(6)(7)(01),(6)(0)(8)(01),(9)(4)(8)(01)
#define ORDER_PP_LIT_TIMES_44 0,44,88,(2)(3)(01),(6)(7)(01),(0)(2)(02),(4)(6)(02),(8)(0)(03),(2)(5)(03),(6)(9)(03),(0)(4)(04),(4)(8)(04),(8)(2)(05),(2)(7)(05),(6)(1)(06),(0)(6)(06),(4)(0)(07),(8)(4)(07),(2)(9)(07),(6)(3)(08),(0)(8)(08),(4)(2)(09),(8)(6)(09),(2)(1)(0)(01),(6)(5)(0)(01),(0)(0)(1)(01),(4)(4)(1)(01),(8)(8)(1)(01),(2)(3)(2)(01),(6)(7)(2)(01),(0)(2)(3)(01),(4)(6)(3)(01),(8)(0)(4)(01),(2)(5)(4)(01),(6)(9)(4)(01),(0)(4)(5)(01),(4)(8)(5)(01),(8)(2)(6)(01),(2)(7)(6)(01),(6)(1)(7)(01),(0)(6)(7)(01),(4)(0)(8)(01),(8)(4)(8)(01),(2)(9)(8)(01),(6)(3)(9)(01)
#define ORDER_PP_LIT_TIMES_45 0,45,90,(5)(3)(01),(0)(8)(01),(5)(2)(02),(0)(7)(02),(5)(1)(03),(0)(6)(03),(5)(0)(04),(0)(5)(04),(5)(9)(04),(0)(4)(05),(5)(8)(05),(0)(3)(06),(5)(7)(06),(0)(2)(07),(5)(6)(07),(0)(1)(08),(5)(5)(08),(0)(0)(09),(5)(4)(09),(0)(9)(09),(5)(3)(0)(01),(0)(8)(0)(01),(5)(2)(1)(01),(0)(7)(1)(01),(5)(1)(2)(01),(0)(6)(2)(01),(5)(0)(3)(01),(0)(5)(3)(01),(5)(9)(3)(01),(0)(4)(4)(01),(5)(8)(4)(01),(0)(3)(5)(01),(5)(7)(5)(01),(0)(2)(6)(01),(5)(6)(6)(01),(0)(1)(7)(01),(5)(5)(7)(01),(0)(0)(8)(01),(5)(4)(8)(01),(0)(9)(8)(01),(5)(3)(9)(01),(0)(8)(9)(01),(5)(2)(0)(02)
#define ORDER_PP_LIT_TIMES_46 0,46,92,(8)(3)(01),(4)(8)(01),(0)(3)(02),(6)(7)(02),(2)(2)(03),(8)(6)(03),(4)(1)(04),(0)(6)(04),(6)(0)(05),(2)(5)(05),(8)(9)(05),(4)(4)(06),(0)(9)(06),(6)(3)(07),(2)(8)(07),(8)(2)(08),(4)(7)(08),(0)(2)(09),(6)(6)(09),(2)(1)(0)(01),(8)(5)(0)(01),(4)(0)(1)(01),(0)(5)(1)(01),(6)(9)(1)(01),(2)(4)(2)(01),(8)(8)(2)(01),(4)(3)(3)(01),(0)(8)(3)(01),(6)(2)(4)(01),(2)(7)(4)(01),(8)(1)(5)(01),(4)(6)(5)(01),(0)(1)(6)(01),(6)(5)(6)(01),(2)(0)(7)(01),(8)(4)(7)(01),(4)(9)(7)(01),(0)(4)(8)(01),(6)(8)(8)(01),(2)(3)(9)(01),(8)(7)(9)(01),(4)(2)(0)(02),(0)(7)(0)(02),(6)(1)(1)(02)
#define ORDER_PP_LIT_TIMES_47 0,47,94,(1)(4)(01),(8)(8)(01),(5)(3)(02),(2)(8)(02),(9)(2)(03),(6)(7)(03),(3)(2)(04),(0)(7)(04),(7)(1)(05),(4)(6)(05),(1)(1)(06),(8)(5)(06),(5)(0)(07),(2)(5)(07),(9)(9)(07),(6)(4)(08),(3)(9)(08),(0)(4)(09),(7)(8)(09),(4)(3)(0)(01),(1)(8)(0)(01),(8)(2)(1)(01),(5)(7)(1)(01),(2)(2)(2)(01),(9)(6)(2)(01),(6)(1)(3)(01),(3)(6)(3)(01),(0)(1)(4)(01),(7)(5)(4)(01),(4)(0)(5)(01),(1)(5)(5)(01),(8)(9)(5)(01),(5)(4)(6)(01),(2)(9)(6)(01),(9)(3)(7)(01),(6)(8)(7)(01),(3)(3)(8)(01),(0)(8)(8)(01),(7)(2)(9)(01),(4)(7)(9)(01),(1)(2)(0)(02),(8)(6)(0)(02),(5)(1)(1)(02),(2)(6)(1)(02),(9)(0)(2)(02)
#define ORDER_PP_LIT_TIMES_48 0,48,96,(4)(4)(01),(2)(9)(01),(0)(4)(02),(8)(8)(02),(6)(3)(03),(4)(8)(03),(2)(3)(04),(0)(8)(04),(8)(2)(05),(6)(7)(05),(4)(2)(06),(2)(7)(06),(0)(2)(07),(8)(6)(07),(6)(1)(08),(4)(6)(08),(2)(1)(09),(0)(6)(09),(8)(0)(0)(01),(6)(5)(0)(01),(4)(0)(1)(01),(2)(5)(1)(01),(0)(0)(2)(01),(8)(4)(2)(01),(6)(9)(2)(01),(4)(4)(3)(01),(2)(9)(3)(01),(0)(4)(4)(01),(8)(8)(4)(01),(6)(3)(5)(01),(4)(8)(5)(01),(2)(3)(6)(01),(0)(8)(6)(01),(8)(2)(7)(01),(6)(7)(7)(01),(4)(2)(8)(01),(2)(7)(8)(01),(0)(2)(9)(01),(8)(6)(9)(01),(6)(1)(0)(02),(4)(6)(0)(02),(2)(1)(1)(02),(0)(6)(1)(02),(8)(0)(2)(02),(6)(5)(2)(02),(4)(0)(3)(02)
#define ORDER_PP_LIT_TIMES_49 0,49,98,(7)(4)(01),(6)(9)(01),(5)(4)(02),(4)(9)(02),(3)(4)(03),(2)(9)(03),(1)(4)(04),(0)(9)(04),(9)(3)(05),(8)(8)(05),(7)(3)(06),(6)(8)(06),(5)(3)(07),(4)(8)(07),(3)(3)(08),(2)(8)(08),(1)(3)(09),(0)(8)(09),(9)(2)(0)(01),(8)(7)(0)(01),(7)(2)(1)(01),(6)(7)(1)(01),(5)(2)(2)(01),(4)(7)(2)(01),(3)(2)(3)(01),(2)(7)(3)(01),(1)(2)(4)(01),(0)(7)(4)(01),(9)(1)(5)(01),(8)(6)(5)(01),(7)(1)(6)(01),(6)(6)(6)(01),(5)(1)(7)(01),(4)(6)(7)(01),(3)(1)(8)(01),(2)(6)(8)(01),(1)(1)(9)(01),(0)(6)(9)(01),(9)(0)(0)(02),(8)(5)(0)(02),(7)(0)(1)(02),(6)(5)(1)(02),(5)(0)(2)(02),(4)(5)(2)(02),(3)(0)(3)(02),(2)(5)(3)(02),(1)(0)(4)(02)
#define ORDER_PP_LIT_TIMES_50 0,50,100,(0)(5)(01),(0)(0)(02),(0)(5)(02),(0)(0)(03),(0)(5)(03),(0)(0)(04),(0)(5)(04),(0)(0)(05),(0)(5)(05),(0)(0)(06),(0)(5)(06),(0)(0)(07),(0)(5)(07),(0)(0)(08),(0)(5)(08),(0)(0)(09),(0)(5)(09),(0)(0)(0)(01),(0)(5)(0)(01),(0)(0)(1)(01),(0)(5)(1)(01),(0)(0)(2)(01),(0)(5)(2)(01),(0)(0)(3)(01),(0)(5)(3)(01),(0)(0)(4)(01),(0)(5)(4)(01),(0)(0)(5)(01),(0)(5)(5)(01),(0)(0)(6)(01),(0)(5)(6)(01),(0)(0)(7)(01),(0)(5)(7)(01),(0)(0)(8)(01),(0)(5)(8)(01),(0)(0)(9)(01),(0)(5)(9)(01),(0)(0)(0)(02),(0)(5)(0)(02),(0)(0)(1)(02),(0)(5)(1)(02),(0)(0)(2)(02),(0)(5)(2)(02),(0)(0)(3)(02),(0)(5)(3)(02),(0)(0)(4)(02),(0)(5)(4)(02),(0)(0)(5)(02)
#define ORDER_PP_LIT_TIMES_51 0,51,(2)(0)(01),(3)(5)(01),(4)(0)(02),(5)(5)(02),(6)(0)(03),(7)(5)(03),(8)(0)(04),(9)(5)(04),(0)(1)(05),(1)(6)(05),(2)(1)(06),(3)(6)(06),(4)(1)(07),(5)(6)(07),(6)(1)(08),(7)(6)(08),(8)(1)(09),(9)(6)(09),(0)(2)(0)(01),(1)(7)(0)(01),(2)(2)(1)(01),(3)(7)(1)(01),(4)(2)(2)(01),(5)(7)(2)(01),(6)(2)(3)(01),(7)(7)(3)(01),(8)(2)(4)(01),(9)(7)(4)(01),(0)(3)(5)(01),(1)(8)(5)(01),(2)(3)(6)(01),(3)(8)(6)(01),(4)(3)(7)(01),(5)(8)(7)(01),(6)(3)(8)(01),(7)(8)(8)(01),(8)(3)(9)(01),(9)(8)(9)(01),(0)(4)(0)(02),(1)(9)(0)(02),(2)(4)(1)(02),(3)(9)(1)(02),(4)(4)(2)(02),(5)(9)(2)(02),(6)(4)(3)(02),(7)(9)(3)(02),(8)(4)(4)(02),(9)(9)(4)(02),(0)(5)(5)(02),(1)(0)(6)(02)
#define ORDER_PP_LIT_TIMES_52 0,52,(4)(0)(01),(6)(5)(01),(8)(0)(02),(0)(6)(02),(2)(1)(03),(4)(6)(03),(6)(1)(04),(8)(6)(04),(0)(2)(05),(2)(7)(05),(4)(2)(06),(6)(7)(06),(8)(2)(07),(0)(8)(07),(2)(3)(08),(4)(8)(08),(6)(3)(09),(8)(8)(09),(0)(4)(0)(01),(2)(9)(0)(01),(4)(4)(1)(01),(6)(9)(1)(01),(8)(4)(2)(01),(0)(0)(3)(01),(2)(5)(3)(01),(4)(0)(4)(01),(6)(5)(4)(01),(8)(0)(5)(01),(0)(6)(5)(01),(2)(1)(6)(01),(4)(6)(6)(01),(6)(1)(7)(01),(8)(6)(7)(01),(0)(2)(8)(01),(2)(7)(8)(01),(4)(2)(9)(01),(6)(7)(9)(01),(8)(2)(0)(02),(0)(8)(0)(02),(2)(3)(1)(02),(4)(8)(1)(02),(6)(3)(2)(02),(8)(8)(2)(02),(0)(4)(3)(02),(2)(9)(3)(02),(4)(4)(4)(02),(6)(9)(4)(02),(8)(4)(5)(02),(0)(0)(6)(02),(2)(5)(6)(02),(4)(0)(7)(02)
#define ORDER_PP_LIT_TIMES_53 0,53,(6)(0)(01),(9)(5)(01),(2)(1)(02),(5)(6)(02),(8)(1)(03),(1)(7)(03),(4)(2)(04),(7)(7)(04),(0)(3)(05),(3)(8)(05),(6)(3)(06),(9)(8)(06),(2)(4)(07),(5)(9)(07),(8)(4)(08),(1)(0)(09),(4)(5)(09),(7)(0)(0)(01),(0)(6)(0)(01),(3)(1)(1)(01),(6)(6)(1)(01),(9)(1)(2)(01),(2)(7)(2)(01),(5)(2)(3)(01),(8)(7)(3)(01),(1)(3)(4)(01),(4)(8)(4)(01),(7)(3)(5)(01),(0)(9)(5)(01),(3)(4)(6)(01),(6)(9)(6)(01),(9)(4)(7)(01),(2)(0)(8)(01),(5)(5)(8)(01),(8)(0)(9)(01),(1)(6)(9)(01),(4)(1)(0)(02),(7)(6)(0)(02),(0)(2)(1)(02),(3)(7)(1)(02),(6)(2)(2)(02),(9)(7)(2)(02),(2)(3)(3)(02),(5)(8)(3)(02),(8)(3)(4)(02),(1)(9)(4)(02),(4)(4)(5)(02),(7)(9)(5)(02),(0)(5)(6)(02),(3)(0)(7)(02),(6)(5)(7)(02),(9)(0)(8)(02)
#define ORDER_PP_LIT_TIMES_54 0,54,(8)(0)(01),(2)(6)(01),(6)(1)(02),(0)(7)(02),(4)(2)(03),(8)(7)(03),(2)(3)(04),(6)(8)(04),(0)(4)(05),(4)(9)(05),(8)(4)(06),(2)(0)(07),(6)(5)(07),(0)(1)(08),(4)(6)(08),(8)(1)(09),(2)(7)(09),(6)(2)(0)(01),(0)(8)(0)(01),(4)(3)(1)(01),(8)(8)(1)(01),(2)(4)(2)(01),(6)(9)(2)(01),(0)(5)(3)(01),(4)(0)(4)(01),(8)(5)(4)(01),(2)(1)(5)(01),(6)(6)(5)(01),(0)(2)(6)(01),(4)(7)(6)(01),(8)(2)(7)(01),(2)(8)(7)(01),(6)(3)(8)(01),(0)(9)(8)(01),(4)(4)(9)(01),(8)(9)(9)(01),(2)(5)(0)(02),(6)(0)(1)(02),(0)(6)(1)(02),(4)(1)(2)(02),(8)(6)(2)(02),(2)(2)(3)(02),(6)(7)(3)(02),(0)(3)(4)(02),(4)(8)(4)(02),(8)(3)(5)(02),(2)(9)(5)(02),(6)(4)(6)(02),(0)(0)(7)(02),(4)(5)(7)(02),(8)(0)(8)(02),(2)(6)(8)(02),(6)(1)(9)(02)
#define ORDER_PP_LIT_TIMES_55 0,55,(0)(1)(01),(5)(6)(01),(0)(2)(02),(5)(7)(02),(0)(3)(03),(5)(8)(03),(0)(4)(04),(5)(9)(04),(0)(5)(05),(5)(0)(06),(0)(6)(06),(5)(1)(07),(0)(7)(07),(5)(2)(08),(0)(8)(08),(5)(3)(09),(0)(9)(09),(5)(4)(0)(01),(0)(0)(1)(01),(5)(5)(1)(01),(0)(1)(2)(01),(5)(6)(2)(01),(0)(2)(3)(01),(5)(7)(3)(01),(0)(3)(4)(01),(5)(8)(4)(01),(0)(4)(5)(01),(5)(9)(5)(01),(0)(5)(6)(01),(5)(0)(7)(01),(0)(6)(7)(01),(5)(1)(8)(01),(0)(7)(8)(01),(5)(2)(9)(01),(0)(8)(9)(01),(5)(3)(0)(02),(0)(9)(0)(02),(5)(4)(1)(02),(0)(0)(2)(02),(5)(5)(2)(02),(0)(1)(3)(02),(5)(6)(3)(02),(0)(2)(4)(02),(5)(7)(4)(02),(0)(3)(5)(02),(5)(8)(5)(02),(0)(4)(6)(02),(5)(9)(6)(02),(0)(5)(7)(02),(5)(0)(8)(02),(0)(6)(8)(02),(5)(1)(9)(02),(0)(7)(9)(02),(5)(2)(0)(03)
#define ORDER_PP_LIT_TIMES_56 0,56,(2)(1)(01),(8)(6)(01),(4)(2)(02),(0)(8)(02),(6)(3)(03),(2)(9)(03),(8)(4)(04),(4)(0)(05),(0)(6)(05),(6)(1)(06),(2)(7)(06),(8)(2)(07),(4)(8)(07),(0)(4)(08),(6)(9)(08),(2)(5)(09),(8)(0)(0)(01),(4)(6)(0)(01),(0)(2)(1)(01),(6)(7)(1)(01),(2)(3)(2)(01),(8)(8)(2)(01),(4)(4)(3)(01),(0)(0)(4)(01),(6)(5)(4)(01),(2)(1)(5)(01),(8)(6)(5)(01),(4)(2)(6)(01),(0)(8)(6)(01),(6)(3)(7)(01),(2)(9)(7)(01),(8)(4)(8)(01),(4)(0)(9)(01),(0)(6)(9)(01),(6)(1)(0)(02),(2)(7)(0)(02),(8)(2)(1)(02),(4)(8)(1)(02),(0)(4)(2)(02),(6)(9)(2)(02),(2)(5)(3)(02),(8)(0)(4)(02),(4)(6)(4)(02),(0)(2)(5)(02),(6)(7)(5)(02),(2)(3)(6)(02),(8)(8)(6)(02),(4)(4)(7)(02),(0)(0)(8)(02),(6)(5)(8)(02),(2)(1)(9)(02),(8)(6)(9)(02),(4)(2)(0)(03),(0)(8)(0)(03),(6)(3)(1)(03)
#define ORDER_PP_LIT_TIMES_57 0,57,(4)(1)(01),(1)(7)(01),(8)(2)(02),(5)(8)(02),(2)(4)(03),(9)(9)(03),(6)(5)(04),(3)(1)(05),(0)(7)(05),(7)(2)(06),(4)(8)(06),(1)(4)(07),(8)(9)(07),(5)(5)(08),(2)(1)(09),(9)(6)(09),(6)(2)(0)(01),(3)(8)(0)(01),(0)(4)(1)(01),(7)(9)(1)(01),(4)(5)(2)(01),(1)(1)(3)(01),(8)(6)(3)(01),(5)(2)(4)(01),(2)(8)(4)(01),(9)(3)(5)(01),(6)(9)(5)(01),(3)(5)(6)(01),(0)(1)(7)(01),(7)(6)(7)(01),(4)(2)(8)(01),(1)(8)(8)(01),(8)(3)(9)(01),(5)(9)(9)(01),(2)(5)(0)(02),(9)(0)(1)(02),(6)(6)(1)(02),(3)(2)(2)(02),(0)(8)(2)(02),(7)(3)(3)(02),(4)(9)(3)(02),(1)(5)(4)(02),(8)(0)(5)(02),(5)(6)(5)(02),(2)(2)(6)(02),(9)(7)(6)(02),(6)(3)(7)(02),(3)(9)(7)(02),(0)(5)(8)(02),(7)(0)(9)(02),(4)(6)(9)(02),(1)(2)(0)(03),(8)(7)(0)(03),(5)(3)(1)(03),(2)(9)(1)(03),(9)(4)(2)(03)
#define ORDER_PP_LIT_TIMES_58 0,58,(6)(1)(01),(4)(7)(01),(2)(3)(02),(0)(9)(02),(8)(4)(03),(6)(0)(04),(4)(6)(04),(2)(2)(05),(0)(8)(05),(8)(3)(06),(6)(9)(06),(4)(5)(07),(2)(1)(08),(0)(7)(08),(8)(2)(09),(6)(8)(09),(4)(4)(0)(01),(2)(0)(1)(01),(0)(6)(1)(01),(8)(1)(2)(01),(6)(7)(2)(01),(4)(3)(3)(01),(2)(9)(3)(01),(0)(5)(4)(01),(8)(0)(5)(01),(6)(6)(5)(01),(4)(2)(6)(01),(2)(8)(6)(01),(0)(4)(7)(01),(8)(9)(7)(01),(6)(5)(8)(01),(4)(1)(9)(01),(2)(7)(9)(01),(0)(3)(0)(02),(8)(8)(0)(02),(6)(4)(1)(02),(4)(0)(2)(02),(2)(6)(2)(02),(0)(2)(3)(02),(8)(7)(3)(02),(6)(3)(4)(02),(4)(9)(4)(02),(2)(5)(5)(02),(0)(1)(6)(02),(8)(6)(6)(02),(6)(2)(7)(02),(4)(8)(7)(02),(2)(4)(8)(02),(0)(0)(9)(02),(8)(5)(9)(02),(6)(1)(0)(03),(4)(7)(0)(03),(2)(3)(1)(03),(0)(9)(1)(03),(8)(4)(2)(03),(6)(0)(3)(03),(4)(6)(3)(03)
#define ORDER_PP_LIT_TIMES_59 0,59,(8)(1)(01),(7)(7)(01),(6)(3)(02),(5)(9)(02),(4)(5)(03),(3)(1)(04),(2)(7)(04),(1)(3)(05),(0)(9)(05),(9)(4)(06),(8)(0)(07),(7)(6)(07),(6)(2)(08),(5)(8)(08),(4)(4)(09),(3)(0)(0)(01),(2)(6)(0)(01),(1)(2)(1)(01),(0)(8)(1)(01),(9)(3)(2)(01),(8)(9)(2)(01),(7)(5)(3)(01),(6)(1)(4)(01),(5)(7)(4)(01),(4)(3)(5)(01),(3)(9)(5)(01),(2)(5)(6)(01),(1)(1)(7)(01),(0)(7)(7)(01),(9)(2)(8)(01),(8)(8)(8)(01),(7)(4)(9)(01),(6)(0)(0)(02),(5)(6)(0)(02),(4)(2)(1)(02),(3)(8)(1)(02),(2)(4)(2)(02),(1)(0)(3)(02),(0)(6)(3)(02),(9)(1)(4)(02),(8)(7)(4)(02),(7)(3)(5)(02),(6)(9)(5)(02),(5)(5)(6)(02),(4)(1)(7)(02),(3)(7)(7)(02),(2)(3)(8)(02),(1)(9)(8)(02),(0)(5)(9)(02),(9)(0)(0)(03),(8)(6)(0)(03),(7)(2)(1)(03),(6)(8)(1)(03),(5)(4)(2)(03),(4)(0)(3)(03),(3)(6)(3)(03),(2)(2)(4)(03),(1)(8)(4)(03)
#define ORDER_PP_LIT_TIMES_60 0,60,(0)(2)(01),(0)(8)(01),(0)(4)(02),(0)(0)(03),(0)(6)(03),(0)(2)(04),(0)(8)(04),(0)(4)(05),(0)(0)(06),(0)(6)(06),(0)(2)(07),(0)(8)(07),(0)(4)(08),(0)(0)(09),(0)(6)(09),(0)(2)(0)(01),(0)(8)(0)(01),(0)(4)(1)(01),(0)(0)(2)(01),(0)(6)(2)(01),(0)(2)(3)(01),(0)(8)(3)(01),(0)(4)(4)(01),(0)(0)(5)(01),(0)(6)(5)(01),(0)(2)(6)(01),(0)(8)(6)(01),(0)(4)(7)(01),(0)(0)(8)(01),(0)(6)(8)(01),(0)(2)(9)(01),(0)(8)(9)(01),(0)(4)(0)(02),(0)(0)(1)(02),(0)(6)(1)(02),(0)(2)(2)(02),(0)(8)(2)(02),(0)(4)(3)(02),(0)(0)(4)(02),(0)(6)(4)(02),(0)(2)(5)(02),(0)(8)(5)(02),(0)(4)(6)(02),(0)(0)(7)(02),(0)(6)(7)(02),(0)(2)(8)(02),(0)(8)(8)(02),(0)(4)(9)(02),(0)(0)(0)(03),(0)(6)(0)(03),(0)(2)(1)(03),(0)(8)(1)(03),(0)(4)(2)(03),(0)(0)(3)(03),(0)(6)(3)(03),(0)(2)(4)(03),(0)(8)(4)(03),(0)(4)(5)(03),(0)(0)(6)(03)
#define ORDER_PP_LIT_TIMES_61 0,61,(2)(2)(01),(3)(8)(01),(4)(4)(02),(5)(0)(03),(6)(6)(03),(7)(2)(04),(8)(8)(04),(9)(4)(05),(0)(1)(06),(1)(7)(06),(2)(3)(07),(3)(9)(07),(4)(5)(08),(5)(1)(09),(6)(7)(09),(7)(3)(0)(01),(8)(9)(0)(01),(9)(5)(1)(01),(0)(2)(2)(01),(1)(8)(2)(01),(2)(4)(3)(01),(3)(0)(4)(01),(4)(6)(4)(01),(5)(2)(5)(01),(6)(8)(5)(01),(7)(4)(6)(01),(8)(0)(7)(01),(9)(6)(7)(01),(0)(3)(8)(01),(1)(9)(8)(01),(2)(5)(9)(01),(3)(1)(0)(02),(4)(7)(0)(02),(5)(3)(1)(02),(6)(9)(1)(02),(7)(5)(2)(02),(8)(1)(3)(02),(9)(7)(3)(02),(0)(4)(4)(02),(1)(0)(5)(02),(2)(6)(5)(02),(3)(2)(6)(02),(4)(8)(6)(02),(5)(4)(7)(02),(6)(0)(8)(02),(7)(6)(8)(02),(8)(2)(9)(02),(9)(8)(9)(02),(0)(5)(0)(03),(1)(1)(1)(03),(2)(7)(1)(03),(3)(3)(2)(03),(4)(9)(2)(03),(5)(5)(3)(03),(6)(1)(4)(03),(7)(7)(4)(03),(8)(3)(5)(03),(9)(9)(5)(03),(0)(6)(6)(03),(1)(2)(7)(03)
#define ORDER_PP_LIT_TIMES_62 0,62,(4)(2)(01),(6)(8)(01),(8)(4)(02),(0)(1)(03),(2)(7)(03),(4)(3)(04),(6)(9)(04),(8)(5)(05),(0)(2)(06),(2)(8)(06),(4)(4)(07),(6)(0)(08),(8)(6)(08),(0)(3)(09),(2)(9)(09),(4)(5)(0)(01),(6)(1)(1)(01),(8)(7)(1)(01),(0)(4)(2)(01),(2)(0)(3)(01),(4)(6)(3)(01),(6)(2)(4)(01),(8)(8)(4)(01),(0)(5)(5)(01),(2)(1)(6)(01),(4)(7)(6)(01),(6)(3)(7)(01),(8)(9)(7)(01),(0)(6)(8)(01),(2)(2)(9)(01),(4)(8)(9)(01),(6)(4)(0)(02),(8)(0)(1)(02),(0)(7)(1)(02),(2)(3)(2)(02),(4)(9)(2)(02),(6)(5)(3)(02),(8)(1)(4)(02),(0)(8)(4)(02),(2)(4)(5)(02),(4)(0)(6)(02),(6)(6)(6)(02),(8)(2)(7)(02),(0)(9)(7)(02),(2)(5)(8)(02),(4)(1)(9)(02),(6)(7)(9)(02),(8)(3)(0)(03),(0)(0)(1)(03),(2)(6)(1)(03),(4)(2)(2)(03),(6)(8)(2)(03),(8)(4)(3)(03),(0)(1)(4)(03),(2)(7)(4)(03),(4)(3)(5)(03),(6)(9)(5)(03),(8)(5)(6)(03),(0)(2)(7)(03),(2)(8)(7)(03),(4)(4)(8)(03)
#define ORDER_PP_LIT_TIMES_63 0,63,(6)(2)(01),(9)(8)(01),(2)(5)(02),(5)(1)(03),(8)(7)(03),(1)(4)(04),(4)(0)(05),(7)(6)(05),(0)(3)(06),(3)(9)(06),(6)(5)(07),(9)(1)(08),(2)(8)(08),(5)(4)(09),(8)(0)(0)(01),(1)(7)(0)(01),(4)(3)(1)(01),(7)(9)(1)(01),(0)(6)(2)(01),(3)(2)(3)(01),(6)(8)(3)(01),(9)(4)(4)(01),(2)(1)(5)(01),(5)(7)(5)(01),(8)(3)(6)(01),(1)(0)(7)(01),(4)(6)(7)(01),(7)(2)(8)(01),(0)(9)(8)(01),(3)(5)(9)(01),(6)(1)(0)(02),(9)(7)(0)(02),(2)(4)(1)(02),(5)(0)(2)(02),(8)(6)(2)(02),(1)(3)(3)(02),(4)(9)(3)(02),(7)(5)(4)(02),(0)(2)(5)(02),(3)(8)(5)(02),(6)(4)(6)(02),(9)(0)(7)(02),(2)(7)(7)(02),(5)(3)(8)(02),(8)(9)(8)(02),(1)(6)(9)(02),(4)(2)(0)(03),(7)(8)(0)(03),(0)(5)(1)(03),(3)(1)(2)(03),(6)(7)(2)(03),(9)(3)(3)(03),(2)(0)(4)(03),(5)(6)(4)(03),(8)(2)(5)(03),(1)(9)(5)(03),(4)(5)(6)(03),(7)(1)(7)(03),(0)(8)(7)(03),(3)(4)(8)(03),(6)(0)(9)(03),(9)(6)(9)(03)
#define ORDER_PP_LIT_TIMES_64 0,64,(8)(2)(01),(2)(9)(01),(6)(5)(02),(0)(2)(03),(4)(8)(03),(8)(4)(04),(2)(1)(05),(6)(7)(05),(0)(4)(06),(4)(0)(07),(8)(6)(07),(2)(3)(08),(6)(9)(08),(0)(6)(09),(4)(2)(0)(01),(8)(8)(0)(01),(2)(5)(1)(01),(6)(1)(2)(01),(0)(8)(2)(01),(4)(4)(3)(01),(8)(0)(4)(01),(2)(7)(4)(01),(6)(3)(5)(01),(0)(0)(6)(01),(4)(6)(6)(01),(8)(2)(7)(01),(2)(9)(7)(01),(6)(5)(8)(01),(0)(2)(9)(01),(4)(8)(9)(01),(8)(4)(0)(02),(2)(1)(1)(02),(6)(7)(1)(02),(0)(4)(2)(02),(4)(0)(3)(02),(8)(6)(3)(02),(2)(3)(4)(02),(6)(9)(4)(02),(0)(6)(5)(02),(4)(2)(6)(02),(8)(8)(6)(02),(2)(5)(7)(02),(6)(1)(8)(02),(0)(8)(8)(02),(4)(4)(9)(02),(8)(0)(0)(03),(2)(7)(0)(03),(6)(3)(1)(03),(0)(0)(2)(03),(4)(6)(2)(03),(8)(2)(3)(03),(2)(9)(3)(03),(6)(5)(4)(03),(0)(2)(5)(03),(4)(8)(5)(03),(8)(4)(6)(03),(2)(1)(7)(03),(6)(7)(7)(03),(0)(4)(8)(03),(4)(0)(9)(03),(8)(6)(9)(03),(2)(3)(0)(04),(6)(9)(0)(04)
#define ORDER_PP_LIT_TIMES_65 0,65,(0)(3)(01),(5)(9)(01),(0)(6)(02),(5)(2)(03),(0)(9)(03),(5)(5)(04),(0)(2)(05),(5)(8)(05),(0)(5)(06),(5)(1)(07),(0)(8)(07),(5)(4)(08),(0)(1)(09),(5)(7)(09),(0)(4)(0)(01),(5)(0)(1)(01),(0)(7)(1)(01),(5)(3)(2)(01),(0)(0)(3)(01),(5)(6)(3)(01),(0)(3)(4)(01),(5)(9)(4)(01),(0)(6)(5)(01),(5)(2)(6)(01),(0)(9)(6)(01),(5)(5)(7)(01),(0)(2)(8)(01),(5)(8)(8)(01),(0)(5)(9)(01),(5)(1)(0)(02),(0)(8)(0)(02),(5)(4)(1)(02),(0)(1)(2)(02),(5)(7)(2)(02),(0)(4)(3)(02),(5)(0)(4)(02),(0)(7)(4)(02),(5)(3)(5)(02),(0)(0)(6)(02),(5)(6)(6)(02),(0)(3)(7)(02),(5)(9)(7)(02),(0)(6)(8)(02),(5)(2)(9)(02),(0)(9)(9)(02),(5)(5)(0)(03),(0)(2)(1)(03),(5)(8)(1)(03),(0)(5)(2)(03),(5)(1)(3)(03),(0)(8)(3)(03),(5)(4)(4)(03),(0)(1)(5)(03),(5)(7)(5)(03),(0)(4)(6)(03),(5)(0)(7)(03),(0)(7)(7)(03),(5)(3)(8)(03),(0)(0)(9)(03),(5)(6)(9)(03),(0)(3)(0)(04),(5)(9)(0)(04),(0)(6)(1)(04),(5)(2)(2)(04)
#define ORDER_PP_LIT_TIMES_66 0,66,(2)(3)(01),(8)(9)(01),(4)(6)(02),(0)(3)(03),(6)(9)(03),(2)(6)(04),(8)(2)(05),(4)(9)(05),(0)(6)(06),(6)(2)(07),(2)(9)(07),(8)(5)(08),(4)(2)(09),(0)(9)(09),(6)(5)(0)(01),(2)(2)(1)(01),(8)(8)(1)(01),(4)(5)(2)(01),(0)(2)(3)(01),(6)(8)(3)(01),(2)(5)(4)(01),(8)(1)(5)(01),(4)(8)(5)(01),(0)(5)(6)(01),(6)(1)(7)(01),(2)(8)(7)(01),(8)(4)(8)(01),(4)(1)(9)(01),(0)(8)(9)(01),(6)(4)(0)(02),(2)(1)(1)(02),(8)(7)(1)(02),(4)(4)(2)(02),(0)(1)(3)(02),(6)(7)(3)(02),(2)(4)(4)(02),(8)(0)(5)(02),(4)(7)(5)(02),(0)(4)(6)(02),(6)(0)(7)(02),(2)(7)(7)(02),(8)(3)(8)(02),(4)(0)(9)(02),(0)(7)(9)(02),(6)(3)(0)(03),(2)(0)(1)(03),(8)(6)(1)(03),(4)(3)(2)(03),(0)(0)(3)(03),(6)(6)(3)(03),(2)(3)(4)(03),(8)(9)(4)(03),(4)(6)(5)(03),(0)(3)(6)(03),(6)(9)(6)(03),(2)(6)(7)(03),(8)(2)(8)(03),(4)(9)(8)(03),(0)(6)(9)(03),(6)(2)(0)(04),(2)(9)(0)(04),(8)(5)(1)(04),(4)(2)(2)(04),(0)(9)(2)(04),(6)(5)(3)(04)
#define ORDER_PP_LIT_TIMES_67 0,67,(4)(3)(01),(1)(0)(02),(8)(6)(02),(5)(3)(03),(2)(0)(04),(9)(6)(04),(6)(3)(05),(3)(0)(06),(0)(7)(06),(7)(3)(07),(4)(0)(08),(1)(7)(08),(8)(3)(09),(5)(0)(0)(01),(2)(7)(0)(01),(9)(3)(1)(01),(6)(0)(2)(01),(3)(7)(2)(01),(0)(4)(3)(01),(7)(0)(4)(01),(4)(7)(4)(01),(1)(4)(5)(01),(8)(0)(6)(01),(5)(7)(6)(01),(2)(4)(7)(01),(9)(0)(8)(01),(6)(7)(8)(01),(3)(4)(9)(01),(0)(1)(0)(02),(7)(7)(0)(02),(4)(4)(1)(02),(1)(1)(2)(02),(8)(7)(2)(02),(5)(4)(3)(02),(2)(1)(4)(02),(9)(7)(4)(02),(6)(4)(5)(02),(3)(1)(6)(02),(0)(8)(6)(02),(7)(4)(7)(02),(4)(1)(8)(02),(1)(8)(8)(02),(8)(4)(9)(02),(5)(1)(0)(03),(2)(8)(0)(03),(9)(4)(1)(03),(6)(1)(2)(03),(3)(8)(2)(03),(0)(5)(3)(03),(7)(1)(4)(03),(4)(8)(4)(03),(1)(5)(5)(03),(8)(1)(6)(03),(5)(8)(6)(03),(2)(5)(7)(03),(9)(1)(8)(03),(6)(8)(8)(03),(3)(5)(9)(03),(0)(2)(0)(04),(7)(8)(0)(04),(4)(5)(1)(04),(1)(2)(2)(04),(8)(8)(2)(04),(5)(5)(3)(04),(2)(2)(4)(04),(9)(8)(4)(04)
#define ORDER_PP_LIT_TIMES_68 0,68,(6)(3)(01),(4)(0)(02),(2)(7)(02),(0)(4)(03),(8)(0)(04),(6)(7)(04),(4)(4)(05),(2)(1)(06),(0)(8)(06),(8)(4)(07),(6)(1)(08),(4)(8)(08),(2)(5)(09),(0)(2)(0)(01),(8)(8)(0)(01),(6)(5)(1)(01),(4)(2)(2)(01),(2)(9)(2)(01),(0)(6)(3)(01),(8)(2)(4)(01),(6)(9)(4)(01),(4)(6)(5)(01),(2)(3)(6)(01),(0)(0)(7)(01),(8)(6)(7)(01),(6)(3)(8)(01),(4)(0)(9)(01),(2)(7)(9)(01),(0)(4)(0)(02),(8)(0)(1)(02),(6)(7)(1)(02),(4)(4)(2)(02),(2)(1)(3)(02),(0)(8)(3)(02),(8)(4)(4)(02),(6)(1)(5)(02),(4)(8)(5)(02),(2)(5)(6)(02),(0)(2)(7)(02),(8)(8)(7)(02),(6)(5)(8)(02),(4)(2)(9)(02),(2)(9)(9)(02),(0)(6)(0)(03),(8)(2)(1)(03),(6)(9)(1)(03),(4)(6)(2)(03),(2)(3)(3)(03),(0)(0)(4)(03),(8)(6)(4)(03),(6)(3)(5)(03),(4)(0)(6)(03),(2)(7)(6)(03),(0)(4)(7)(03),(8)(0)(8)(03),(6)(7)(8)(03),(4)(4)(9)(03),(2)(1)(0)(04),(0)(8)(0)(04),(8)(4)(1)(04),(6)(1)(2)(04),(4)(8)(2)(04),(2)(5)(3)(04),(0)(2)(4)(04),(8)(8)(4)(04),(6)(5)(5)(04),(4)(2)(6)(04)
#define ORDER_PP_LIT_TIMES_69 0,69,(8)(3)(01),(7)(0)(02),(6)(7)(02),(5)(4)(03),(4)(1)(04),(3)(8)(04),(2)(5)(05),(1)(2)(06),(0)(9)(06),(9)(5)(07),(8)(2)(08),(7)(9)(08),(6)(6)(09),(5)(3)(0)(01),(4)(0)(1)(01),(3)(7)(1)(01),(2)(4)(2)(01),(1)(1)(3)(01),(0)(8)(3)(01),(9)(4)(4)(01),(8)(1)(5)(01),(7)(8)(5)(01),(6)(5)(6)(01),(5)(2)(7)(01),(4)(9)(7)(01),(3)(6)(8)(01),(2)(3)(9)(01),(1)(0)(0)(02),(0)(7)(0)(02),(9)(3)(1)(02),(8)(0)(2)(02),(7)(7)(2)(02),(6)(4)(3)(02),(5)(1)(4)(02),(4)(8)(4)(02),(3)(5)(5)(02),(2)(2)(6)(02),(1)(9)(6)(02),(0)(6)(7)(02),(9)(2)(8)(02),(8)(9)(8)(02),(7)(6)(9)(02),(6)(3)(0)(03),(5)(0)(1)(03),(4)(7)(1)(03),(3)(4)(2)(03),(2)(1)(3)(03),(1)(8)(3)(03),(0)(5)(4)(03),(9)(1)(5)(03),(8)(8)(5)(03),(7)(5)(6)(03),(6)(2)(7)(03),(5)(9)(7)(03),(4)(6)(8)(03),(3)(3)(9)(03),(2)(0)(0)(04),(1)(7)(0)(04),(0)(4)(1)(04),(9)(0)(2)(04),(8)(7)(2)(04),(7)(4)(3)(04),(6)(1)(4)(04),(5)(8)(4)(04),(4)(5)(5)(04),(3)(2)(6)(04),(2)(9)(6)(04),(1)(6)(7)(04)
#define ORDER_PP_LIT_TIMES_70 0,70,(0)(4)(01),(0)(1)(02),(0)(8)(02),(0)(5)(03),(0)(2)(04),(0)(9)(04),(0)(6)(05),(0)(3)(06),(0)(0)(07),(0)(7)(07),(0)(4)(08),(0)(1)(09),(0)(8)(09),(0)(5)(0)(01),(0)(2)(1)(01),(0)(9)(1)(01),(0)(6)(2)(01),(0)(3)(3)(01),(0)(0)(4)(01),(0)(7)(4)(01),(0)(4)(5)(01),(0)(1)(6)(01),(0)(8)(6)(01),(0)(5)(7)(01),(0)(2)(8)(01),(0)(9)(8)(01),(0)(6)(9)(01),(0)(3)(0)(02),(0)(0)(1)(02),(0)(7)(1)(02),(0)(4)(2)(02),(0)(1)(3)(02),(0)(8)(3)(02),(0)(5)(4)(02),(0)(2)(5)(02),(0)(9)(5)(02),(0)(6)(6)(02),(0)(3)(7)(02),(0)(0)(8)(02),(0)(7)(8)(02),(0)(4)(9)(02),(0)(1)(0)(03),(0)(8)(0)(03),(0)(5)(1)(03),(0)(2)(2)(03),(0)(9)(2)(03),(0)(6)(3)(03),(0)(3)(4)(03),(0)(0)(5)(03),(0)(7)(5)(03),(0)(4)(6)(03),(0)(1)(7)(03),(0)(8)(7)(03),(0)(5)(8)(03),(0)(2)(9)(03),(0)(9)(9)(03),(0)(6)(0)(04),(0)(3)(1)(04),(0)(0)(2)(04),(0)(7)(2)(04),(0)(4)(3)(04),(0)(1)(4)(04),(0)(8)(4)(04),(0)(5)(5)(04),(0)(2)(6)(04),(0)(9)(6)(04),(0)(6)(7)(04),(0)(3)(8)(04),(0)(0)(9)(04)
#define ORDER_PP_LIT_TIMES_71 0,71,(2)(4)(01),(3)(1)(02),(4)(8)(02),(5)(5)(03),(6)(2)(04),(7)(9)(04),(8)(6)(05),(9)(3)(06),(0)(1)(07),(1)(8)(07),(2)(5)(08),(3)(2)(09),(4)(9)(09),(5)(6)(0)(01),(6)(3)(1)(01),(7)(0)(2)(01),(8)(7)(2)(01),(9)(4)(3)(01),(0)(2)(4)(01),(1)(9)(4)(01),(2)(6)(5)(01),(3)(3)(6)(01),(4)(0)(7)(01),(5)(7)(7)(01),(6)(4)(8)(01),(7)(1)(9)(01),(8)(8)(9)(01),(9)(5)(0)(02),(0)(3)(1)(02),(1)(0)(2)(02),(2)(7)(2)(02),(3)(4)(3)(02),(4)(1)(4)(02),(5)(8)(4)(02),(6)(5)(5)(02),(7)(2)(6)(02),(8)(9)(6)(02),(9)(6)(7)(02),(0)(4)(8)(02),(1)(1)(9)(02),(2)(8)(9)(02),(3)(5)(0)(03),(4)(2)(1)(03),(5)(9)(1)(03),(6)(6)(2)(03),(7)(3)(3)(03),(8)(0)(4)(03),(9)(7)(4)(03),(0)(5)(5)(03),(1)(2)(6)(03),(2)(9)(6)(03),(3)(6)(7)(03),(4)(3)(8)(03),(5)(0)(9)(03),(6)(7)(9)(03),(7)(4)(0)(04),(8)(1)(1)(04),(9)(8)(1)(04),(0)(6)(2)(04),(1)(3)(3)(04),(2)(0)(4)(04),(3)(7)(4)(04),(4)(4)(5)(04),(5)(1)(6)(04),(6)(8)(6)(04),(7)(5)(7)(04),(8)(2)(8)(04),(9)(9)(8)(04),(0)(7)(9)(04),(1)(4)(0)(05)
#define ORDER_PP_LIT_TIMES_72 0,72,(4)(4)(01),(6)(1)(02),(8)(8)(02),(0)(6)(03),(2)(3)(04),(4)(0)(05),(6)(7)(05),(8)(4)(06),(0)(2)(07),(2)(9)(07),(4)(6)(08),(6)(3)(09),(8)(0)(0)(01),(0)(8)(0)(01),(2)(5)(1)(01),(4)(2)(2)(01),(6)(9)(2)(01),(8)(6)(3)(01),(0)(4)(4)(01),(2)(1)(5)(01),(4)(8)(5)(01),(6)(5)(6)(01),(8)(2)(7)(01),(0)(0)(8)(01),(2)(7)(8)(01),(4)(4)(9)(01),(6)(1)(0)(02),(8)(8)(0)(02),(0)(6)(1)(02),(2)(3)(2)(02),(4)(0)(3)(02),(6)(7)(3)(02),(8)(4)(4)(02),(0)(2)(5)(02),(2)(9)(5)(02),(4)(6)(6)(02),(6)(3)(7)(02),(8)(0)(8)(02),(0)(8)(8)(02),(2)(5)(9)(02),(4)(2)(0)(03),(6)(9)(0)(03),(8)(6)(1)(03),(0)(4)(2)(03),(2)(1)(3)(03),(4)(8)(3)(03),(6)(5)(4)(03),(8)(2)(5)(03),(0)(0)(6)(03),(2)(7)(6)(03),(4)(4)(7)(03),(6)(1)(8)(03),(8)(8)(8)(03),(0)(6)(9)(03),(2)(3)(0)(04),(4)(0)(1)(04),(6)(7)(1)(04),(8)(4)(2)(04),(0)(2)(3)(04),(2)(9)(3)(04),(4)(6)(4)(04),(6)(3)(5)(04),(8)(0)(6)(04),(0)(8)(6)(04),(2)(5)(7)(04),(4)(2)(8)(04),(6)(9)(8)(04),(8)(6)(9)(04),(0)(4)(0)(05),(2)(1)(1)(05),(4)(8)(1)(05)
#define ORDER_PP_LIT_TIMES_73 0,73,(6)(4)(01),(9)(1)(02),(2)(9)(02),(5)(6)(03),(8)(3)(04),(1)(1)(05),(4)(8)(05),(7)(5)(06),(0)(3)(07),(3)(0)(08),(6)(7)(08),(9)(4)(09),(2)(2)(0)(01),(5)(9)(0)(01),(8)(6)(1)(01),(1)(4)(2)(01),(4)(1)(3)(01),(7)(8)(3)(01),(0)(6)(4)(01),(3)(3)(5)(01),(6)(0)(6)(01),(9)(7)(6)(01),(2)(5)(7)(01),(5)(2)(8)(01),(8)(9)(8)(01),(1)(7)(9)(01),(4)(4)(0)(02),(7)(1)(1)(02),(0)(9)(1)(02),(3)(6)(2)(02),(6)(3)(3)(02),(9)(0)(4)(02),(2)(8)(4)(02),(5)(5)(5)(02),(8)(2)(6)(02),(1)(0)(7)(02),(4)(7)(7)(02),(7)(4)(8)(02),(0)(2)(9)(02),(3)(9)(9)(02),(6)(6)(0)(03),(9)(3)(1)(03),(2)(1)(2)(03),(5)(8)(2)(03),(8)(5)(3)(03),(1)(3)(4)(03),(4)(0)(5)(03),(7)(7)(5)(03),(0)(5)(6)(03),(3)(2)(7)(03),(6)(9)(7)(03),(9)(6)(8)(03),(2)(4)(9)(03),(5)(1)(0)(04),(8)(8)(0)(04),(1)(6)(1)(04),(4)(3)(2)(04),(7)(0)(3)(04),(0)(8)(3)(04),(3)(5)(4)(04),(6)(2)(5)(04),(9)(9)(5)(04),(2)(7)(6)(04),(5)(4)(7)(04),(8)(1)(8)(04),(1)(9)(8)(04),(4)(6)(9)(04),(7)(3)(0)(05),(0)(1)(1)(05),(3)(8)(1)(05),(6)(5)(2)(05),(9)(2)(3)(05)
#define ORDER_PP_LIT_TIMES_74 0,74,(8)(4)(01),(2)(2)(02),(6)(9)(02),(0)(7)(03),(4)(4)(04),(8)(1)(05),(2)(9)(05),(6)(6)(06),(0)(4)(07),(4)(1)(08),(8)(8)(08),(2)(6)(09),(6)(3)(0)(01),(0)(1)(1)(01),(4)(8)(1)(01),(8)(5)(2)(01),(2)(3)(3)(01),(6)(0)(4)(01),(0)(8)(4)(01),(4)(5)(5)(01),(8)(2)(6)(01),(2)(0)(7)(01),(6)(7)(7)(01),(0)(5)(8)(01),(4)(2)(9)(01),(8)(9)(9)(01),(2)(7)(0)(02),(6)(4)(1)(02),(0)(2)(2)(02),(4)(9)(2)(02),(8)(6)(3)(02),(2)(4)(4)(02),(6)(1)(5)(02),(0)(9)(5)(02),(4)(6)(6)(02),(8)(3)(7)(02),(2)(1)(8)(02),(6)(8)(8)(02),(0)(6)(9)(02),(4)(3)(0)(03),(8)(0)(1)(03),(2)(8)(1)(03),(6)(5)(2)(03),(0)(3)(3)(03),(4)(0)(4)(03),(8)(7)(4)(03),(2)(5)(5)(03),(6)(2)(6)(03),(0)(0)(7)(03),(4)(7)(7)(03),(8)(4)(8)(03),(2)(2)(9)(03),(6)(9)(9)(03),(0)(7)(0)(04),(4)(4)(1)(04),(8)(1)(2)(04),(2)(9)(2)(04),(6)(6)(3)(04),(0)(4)(4)(04),(4)(1)(5)(04),(8)(8)(5)(04),(2)(6)(6)(04),(6)(3)(7)(04),(0)(1)(8)(04),(4)(8)(8)(04),(8)(5)(9)(04),(2)(3)(0)(05),(6)(0)(1)(05),(0)(8)(1)(05),(4)(5)(2)(05),(8)(2)(3)(05),(2)(0)(4)(05),(6)(7)(4)(05)
#define ORDER_PP_LIT_TIMES_75 0,75,(0)(5)(01),(5)(2)(02),(0)(0)(03),(5)(7)(03),(0)(5)(04),(5)(2)(05),(0)(0)(06),(5)(7)(06),(0)(5)(07),(5)(2)(08),(0)(0)(09),(5)(7)(09),(0)(5)(0)(01),(5)(2)(1)(01),(0)(0)(2)(01),(5)(7)(2)(01),(0)(5)(3)(01),(5)(2)(4)(01),(0)(0)(5)(01),(5)(7)(5)(01),(0)(5)(6)(01),(5)(2)(7)(01),(0)(0)(8)(01),(5)(7)(8)(01),(0)(5)(9)(01),(5)(2)(0)(02),(0)(0)(1)(02),(5)(7)(1)(02),(0)(5)(2)(02),(5)(2)(3)(02),(0)(0)(4)(02),(5)(7)(4)(02),(0)(5)(5)(02),(5)(2)(6)(02),(0)(0)(7)(02),(5)(7)(7)(02),(0)(5)(8)(02),(5)(2)(9)(02),(0)(0)(0)(03),(5)(7)(0)(03),(0)(5)(1)(03),(5)(2)(2)(03),(0)(0)(3)(03),(5)(7)(3)(03),(0)(5)(4)(03),(5)(2)(5)(03),(0)(0)(6)(03),(5)(7)(6)(03),(0)(5)(7)(03),(5)(2)(8)(03),(0)(0)(9)(03),(5)(7)(9)(03),(0)(5)(0)(04),(5)(2)(1)(04),(0)(0)(2)(04),(5)(7)(2)(04),(0)(5)(3)(04),(5)(2)(4)(04),(0)(0)(5)(04),(5)(7)(5)(04),(0)(5)(6)(04),(5)(2)(7)(04),(0)(0)(8)(04),(5)(7)(8)(04),(0)(5)(9)(04),(5)(2)(0)(05),(0)(0)(1)(05),(5)(7)(1)(05),(0)(5)(2)(05),(5)(2)(3)(05),(0)(0)(4)(05),(5)(7)(4)(05),(0)(5)(5)(05),(5)(2)(6)(05)
#define ORDER_PP_LIT_TIMES_76 0,76,(2)(5)(01),(8)(2)(02),(4)(0)(03),(0)(8)(03),(6)(5)(04),(2)(3)(05),(8)(0)(06),(4)(8)(06),(0)(6)(07),(6)(3)(08),(2)(1)(09),(8)(8)(09),(4)(6)(0)(01),(0)(4)(1)(01),(6)(1)(2)(01),(2)(9)(2)(01),(8)(6)(3)(01),(4)(4)(4)(01),(0)(2)(5)(01),(6)(9)(5)(01),(2)(7)(6)(01),(8)(4)(7)(01),(4)(2)(8)(01),(0)(0)(9)(01),(6)(7)(9)(01),(2)(5)(0)(02),(8)(2)(1)(02),(4)(0)(2)(02),(0)(8)(2)(02),(6)(5)(3)(02),(2)(3)(4)(02),(8)(0)(5)(02),(4)(8)(5)(02),(0)(6)(6)(02),(6)(3)(7)(02),(2)(1)(8)(02),(8)(8)(8)(02),(4)(6)(9)(02),(0)(4)(0)(03),(6)(1)(1)(03),(2)(9)(1)(03),(8)(6)(2)(03),(4)(4)(3)(03),(0)(2)(4)(03),(6)(9)(4)(03),(2)(7)(5)(03),(8)(4)(6)(03),(4)(2)(7)(03),(0)(0)(8)(03),(6)(7)(8)(03),(2)(5)(9)(03),(8)(2)(0)(04),(4)(0)(1)(04),(0)(8)(1)(04),(6)(5)(2)(04),(2)(3)(3)(04),(8)(0)(4)(04),(4)(8)(4)(04),(0)(6)(5)(04),(6)(3)(6)(04),(2)(1)(7)(04),(8)(8)(7)(04),(4)(6)(8)(04),(0)(4)(9)(04),(6)(1)(0)(05),(2)(9)(0)(05),(8)(6)(1)(05),(4)(4)(2)(05),(0)(2)(3)(05),(6)(9)(3)(05),(2)(7)(4)(05),(8)(4)(5)(05),(4)(2)(6)(05),(0)(0)(7)(05),(6)(7)(7)(05)
#define ORDER_PP_LIT_TIMES_77 0,77,(4)(5)(01),(1)(3)(02),(8)(0)(03),(5)(8)(03),(2)(6)(04),(9)(3)(05),(6)(1)(06),(3)(9)(06),(0)(7)(07),(7)(4)(08),(4)(2)(09),(1)(0)(0)(01),(8)(7)(0)(01),(5)(5)(1)(01),(2)(3)(2)(01),(9)(0)(3)(01),(6)(8)(3)(01),(3)(6)(4)(01),(0)(4)(5)(01),(7)(1)(6)(01),(4)(9)(6)(01),(1)(7)(7)(01),(8)(4)(8)(01),(5)(2)(9)(01),(2)(0)(0)(02),(9)(7)(0)(02),(6)(5)(1)(02),(3)(3)(2)(02),(0)(1)(3)(02),(7)(8)(3)(02),(4)(6)(4)(02),(1)(4)(5)(02),(8)(1)(6)(02),(5)(9)(6)(02),(2)(7)(7)(02),(9)(4)(8)(02),(6)(2)(9)(02),(3)(0)(0)(03),(0)(8)(0)(03),(7)(5)(1)(03),(4)(3)(2)(03),(1)(1)(3)(03),(8)(8)(3)(03),(5)(6)(4)(03),(2)(4)(5)(03),(9)(1)(6)(03),(6)(9)(6)(03),(3)(7)(7)(03),(0)(5)(8)(03),(7)(2)(9)(03),(4)(0)(0)(04),(1)(8)(0)(04),(8)(5)(1)(04),(5)(3)(2)(04),(2)(1)(3)(04),(9)(8)(3)(04),(6)(6)(4)(04),(3)(4)(5)(04),(0)(2)(6)(04),(7)(9)(6)(04),(4)(7)(7)(04),(1)(5)(8)(04),(8)(2)(9)(04),(5)(0)(0)(05),(2)(8)(0)(05),(9)(5)(1)(05),(6)(3)(2)(05),(3)(1)(3)(05),(0)(9)(3)(05),(7)(6)(4)(05),(4)(4)(5)(05),(1)(2)(6)(05),(8)(9)(6)(05),(5)(7)(7)(05),(2)(5)(8)(05),(9)(2)(9)(05)
#define ORDER_PP_LIT_TIMES_78 0,78,(6)(5)(01),(4)(3)(02),(2)(1)(03),(0)(9)(03),(8)(6)(04),(6)(4)(05),(4)(2)(06),(2)(0)(07),(0)(8)(07),(8)(5)(08),(6)(3)(09),(4)(1)(0)(01),(2)(9)(0)(01),(0)(7)(1)(01),(8)(4)(2)(01),(6)(2)(3)(01),(4)(0)(4)(01),(2)(8)(4)(01),(0)(6)(5)(01),(8)(3)(6)(01),(6)(1)(7)(01),(4)(9)(7)(01),(2)(7)(8)(01),(0)(5)(9)(01),(8)(2)(0)(02),(6)(0)(1)(02),(4)(8)(1)(02),(2)(6)(2)(02),(0)(4)(3)(02),(8)(1)(4)(02),(6)(9)(4)(02),(4)(7)(5)(02),(2)(5)(6)(02),(0)(3)(7)(02),(8)(0)(8)(02),(6)(8)(8)(02),(4)(6)(9)(02),(2)(4)(0)(03),(0)(2)(1)(03),(8)(9)(1)(03),(6)(7)(2)(03),(4)(5)(3)(03),(2)(3)(4)(03),(0)(1)(5)(03),(8)(8)(5)(03),(6)(6)(6)(03),(4)(4)(7)(03),(2)(2)(8)(03),(0)(0)(9)(03),(8)(7)(9)(03),(6)(5)(0)(04),(4)(3)(1)(04),(2)(1)(2)(04),(0)(9)(2)(04),(8)(6)(3)(04),(6)(4)(4)(04),(4)(2)(5)(04),(2)(0)(6)(04),(0)(8)(6)(04),(8)(5)(7)(04),(6)(3)(8)(04),(4)(1)(9)(04),(2)(9)(9)(04),(0)(7)(0)(05),(8)(4)(1)(05),(6)(2)(2)(05),(4)(0)(3)(05),(2)(8)(3)(05),(0)(6)(4)(05),(8)(3)(5)(05),(6)(1)(6)(05),(4)(9)(6)(05),(2)(7)(7)(05),(0)(5)(8)(05),(8)(2)(9)(05),(6)(0)(0)(06),(4)(8)(0)(06)
#define ORDER_PP_LIT_TIMES_79 0,79,(8)(5)(01),(7)(3)(02),(6)(1)(03),(5)(9)(03),(4)(7)(04),(3)(5)(05),(2)(3)(06),(1)(1)(07),(0)(9)(07),(9)(6)(08),(8)(4)(09),(7)(2)(0)(01),(6)(0)(1)(01),(5)(8)(1)(01),(4)(6)(2)(01),(3)(4)(3)(01),(2)(2)(4)(01),(1)(0)(5)(01),(0)(8)(5)(01),(9)(5)(6)(01),(8)(3)(7)(01),(7)(1)(8)(01),(6)(9)(8)(01),(5)(7)(9)(01),(4)(5)(0)(02),(3)(3)(1)(02),(2)(1)(2)(02),(1)(9)(2)(02),(0)(7)(3)(02),(9)(4)(4)(02),(8)(2)(5)(02),(7)(0)(6)(02),(6)(8)(6)(02),(5)(6)(7)(02),(4)(4)(8)(02),(3)(2)(9)(02),(2)(0)(0)(03),(1)(8)(0)(03),(0)(6)(1)(03),(9)(3)(2)(03),(8)(1)(3)(03),(7)(9)(3)(03),(6)(7)(4)(03),(5)(5)(5)(03),(4)(3)(6)(03),(3)(1)(7)(03),(2)(9)(7)(03),(1)(7)(8)(03),(0)(5)(9)(03),(9)(2)(0)(04),(8)(0)(1)(04),(7)(8)(1)(04),(6)(6)(2)(04),(5)(4)(3)(04),(4)(2)(4)(04),(3)(0)(5)(04),(2)(8)(5)(04),(1)(6)(6)(04),(0)(4)(7)(04),(9)(1)(8)(04),(8)(9)(8)(04),(7)(7)(9)(04),(6)(5)(0)(05),(5)(3)(1)(05),(4)(1)(2)(05),(3)(9)(2)(05),(2)(7)(3)(05),(1)(5)(4)(05),(0)(3)(5)(05),(9)(0)(6)(05),(8)(8)(6)(05),(7)(6)(7)(05),(6)(4)(8)(05),(5)(2)(9)(05),(4)(0)(0)(06),(3)(8)(0)(06),(2)(6)(1)(06),(1)(4)(2)(06)
#define ORDER_PP_LIT_TIMES_80 0,80,(0)(6)(01),(0)(4)(02),(0)(2)(03),(0)(0)(04),(0)(8)(04),(0)(6)(05),(0)(4)(06),(0)(2)(07),(0)(0)(08),(0)(8)(08),(0)(6)(09),(0)(4)(0)(01),(0)(2)(1)(01),(0)(0)(2)(01),(0)(8)(2)(01),(0)(6)(3)(01),(0)(4)(4)(01),(0)(2)(5)(01),(0)(0)(6)(01),(0)(8)(6)(01),(0)(6)(7)(01),(0)(4)(8)(01),(0)(2)(9)(01),(0)(0)(0)(02),(0)(8)(0)(02),(0)(6)(1)(02),(0)(4)(2)(02),(0)(2)(3)(02),(0)(0)(4)(02),(0)(8)(4)(02),(0)(6)(5)(02),(0)(4)(6)(02),(0)(2)(7)(02),(0)(0)(8)(02),(0)(8)(8)(02),(0)(6)(9)(02),(0)(4)(0)(03),(0)(2)(1)(03),(0)(0)(2)(03),(0)(8)(2)(03),(0)(6)(3)(03),(0)(4)(4)(03),(0)(2)(5)(03),(0)(0)(6)(03),(0)(8)(6)(03),(0)(6)(7)(03),(0)(4)(8)(03),(0)(2)(9)(03),(0)(0)(0)(04),(0)(8)(0)(04),(0)(6)(1)(04),(0)(4)(2)(04),(0)(2)(3)(04),(0)(0)(4)(04),(0)(8)(4)(04),(0)(6)(5)(04),(0)(4)(6)(04),(0)(2)(7)(04),(0)(0)(8)(04),(0)(8)(8)(04),(0)(6)(9)(04),(0)(4)(0)(05),(0)(2)(1)(05),(0)(0)(2)(05),(0)(8)(2)(05),(0)(6)(3)(05),(0)(4)(4)(05),(0)(2)(5)(05),(0)(0)(6)(05),(0)(8)(6)(05),(0)(6)(7)(05),(0)(4)(8)(05),(0)(2)(9)(05),(0)(0)(0)(06),(0)(8)(0)(06),(0)(6)(1)(06),(0)(4)(2)(06),(0)(2)(3)(06),(0)(0)(4)(06)
#define ORDER_PP_LIT_TIMES_81 0,81,(2)(6)(01),(3)(4)(02),(4)(2)(03),(5)(0)(04),(6)(8)(04),(7)(6)(05),(8)(4)(06),(9)(2)(07),(0)(1)(08),(1)(9)(08),(2)(7)(09),(3)(5)(0)(01),(4)(3)(1)(01),(5)(1)(2)(01),(6)(9)(2)(01),(7)(7)(3)(01),(8)(5)(4)(01),(9)(3)(5)(01),(0)(2)(6)(01),(1)(0)(7)(01),(2)(8)(7)(01),(3)(6)(8)(01),(4)(4)(9)(01),(5)(2)(0)(02),(6)(0)(1)(02),(7)(8)(1)(02),(8)(6)(2)(02),(9)(4)(3)(02),(0)(3)(4)(02),(1)(1)(5)(02),(2)(9)(5)(02),(3)(7)(6)(02),(4)(5)(7)(02),(5)(3)(8)(02),(6)(1)(9)(02),(7)(9)(9)(02),(8)(7)(0)(03),(9)(5)(1)(03),(0)(4)(2)(03),(1)(2)(3)(03),(2)(0)(4)(03),(3)(8)(4)(03),(4)(6)(5)(03),(5)(4)(6)(03),(6)(2)(7)(03),(7)(0)(8)(03),(8)(8)(8)(03),(9)(6)(9)(03),(0)(5)(0)(04),(1)(3)(1)(04),(2)(1)(2)(04),(3)(9)(2)(04),(4)(7)(3)(04),(5)(5)(4)(04),(6)(3)(5)(04),(7)(1)(6)(04),(8)(9)(6)(04),(9)(7)(7)(04),(0)(6)(8)(04),(1)(4)(9)(04),(2)(2)(0)(05),(3)(0)(1)(05),(4)(8)(1)(05),(5)(6)(2)(05),(6)(4)(3)(05),(7)(2)(4)(05),(8)(0)(5)(05),(9)(8)(5)(05),(0)(7)(6)(05),(1)(5)(7)(05),(2)(3)(8)(05),(3)(1)(9)(05),(4)(9)(9)(05),(5)(7)(0)(06),(6)(5)(1)(06),(7)(3)(2)(06),(8)(1)(3)(06),(9)(9)(3)(06),(0)(8)(4)(06),(1)(6)(5)(06)
#define ORDER_PP_LIT_TIMES_82 0,82,(4)(6)(01),(6)(4)(02),(8)(2)(03),(0)(1)(04),(2)(9)(04),(4)(7)(05),(6)(5)(06),(8)(3)(07),(0)(2)(08),(2)(0)(09),(4)(8)(09),(6)(6)(0)(01),(8)(4)(1)(01),(0)(3)(2)(01),(2)(1)(3)(01),(4)(9)(3)(01),(6)(7)(4)(01),(8)(5)(5)(01),(0)(4)(6)(01),(2)(2)(7)(01),(4)(0)(8)(01),(6)(8)(8)(01),(8)(6)(9)(01),(0)(5)(0)(02),(2)(3)(1)(02),(4)(1)(2)(02),(6)(9)(2)(02),(8)(7)(3)(02),(0)(6)(4)(02),(2)(4)(5)(02),(4)(2)(6)(02),(6)(0)(7)(02),(8)(8)(7)(02),(0)(7)(8)(02),(2)(5)(9)(02),(4)(3)(0)(03),(6)(1)(1)(03),(8)(9)(1)(03),(0)(8)(2)(03),(2)(6)(3)(03),(4)(4)(4)(03),(6)(2)(5)(03),(8)(0)(6)(03),(0)(9)(6)(03),(2)(7)(7)(03),(4)(5)(8)(03),(6)(3)(9)(03),(8)(1)(0)(04),(0)(0)(1)(04),(2)(8)(1)(04),(4)(6)(2)(04),(6)(4)(3)(04),(8)(2)(4)(04),(0)(1)(5)(04),(2)(9)(5)(04),(4)(7)(6)(04),(6)(5)(7)(04),(8)(3)(8)(04),(0)(2)(9)(04),(2)(0)(0)(05),(4)(8)(0)(05),(6)(6)(1)(05),(8)(4)(2)(05),(0)(3)(3)(05),(2)(1)(4)(05),(4)(9)(4)(05),(6)(7)(5)(05),(8)(5)(6)(05),(0)(4)(7)(05),(2)(2)(8)(05),(4)(0)(9)(05),(6)(8)(9)(05),(8)(6)(0)(06),(0)(5)(1)(06),(2)(3)(2)(06),(4)(1)(3)(06),(6)(9)(3)(06),(8)(7)(4)(06),(0)(6)(5)(06),(2)(4)(6)(06),(4)(2)(7)(06)
#define ORDER_PP_LIT_TIMES_83 0,83,(6)(6)(01),(9)(4)(02),(2)(3)(03),(5)(1)(04),(8)(9)(04),(1)(8)(05),(4)(6)(06),(7)(4)(07),(0)(3)(08),(3)(1)(09),(6)(9)(09),(9)(7)(0)(01),(2)(6)(1)(01),(5)(4)(2)(01),(8)(2)(3)(01),(1)(1)(4)(01),(4)(9)(4)(01),(7)(7)(5)(01),(0)(6)(6)(01),(3)(4)(7)(01),(6)(2)(8)(01),(9)(0)(9)(01),(2)(9)(9)(01),(5)(7)(0)(02),(8)(5)(1)(02),(1)(4)(2)(02),(4)(2)(3)(02),(7)(0)(4)(02),(0)(9)(4)(02),(3)(7)(5)(02),(6)(5)(6)(02),(9)(3)(7)(02),(2)(2)(8)(02),(5)(0)(9)(02),(8)(8)(9)(02),(1)(7)(0)(03),(4)(5)(1)(03),(7)(3)(2)(03),(0)(2)(3)(03),(3)(0)(4)(03),(6)(8)(4)(03),(9)(6)(5)(03),(2)(5)(6)(03),(5)(3)(7)(03),(8)(1)(8)(03),(1)(0)(9)(03),(4)(8)(9)(03),(7)(6)(0)(04),(0)(5)(1)(04),(3)(3)(2)(04),(6)(1)(3)(04),(9)(9)(3)(04),(2)(8)(4)(04),(5)(6)(5)(04),(8)(4)(6)(04),(1)(3)(7)(04),(4)(1)(8)(04),(7)(9)(8)(04),(0)(8)(9)(04),(3)(6)(0)(05),(6)(4)(1)(05),(9)(2)(2)(05),(2)(1)(3)(05),(5)(9)(3)(05),(8)(7)(4)(05),(1)(6)(5)(05),(4)(4)(6)(05),(7)(2)(7)(05),(0)(1)(8)(05),(3)(9)(8)(05),(6)(7)(9)(05),(9)(5)(0)(06),(2)(4)(1)(06),(5)(2)(2)(06),(8)(0)(3)(06),(1)(9)(3)(06),(4)(7)(4)(06),(7)(5)(5)(06),(0)(4)(6)(06),(3)(2)(7)(06),(6)(0)(8)(06),(9)(8)(8)(06)
#define ORDER_PP_LIT_TIMES_84 0,84,(8)(6)(01),(2)(5)(02),(6)(3)(03),(0)(2)(04),(4)(0)(05),(8)(8)(05),(2)(7)(06),(6)(5)(07),(0)(4)(08),(4)(2)(09),(8)(0)(0)(01),(2)(9)(0)(01),(6)(7)(1)(01),(0)(6)(2)(01),(4)(4)(3)(01),(8)(2)(4)(01),(2)(1)(5)(01),(6)(9)(5)(01),(0)(8)(6)(01),(4)(6)(7)(01),(8)(4)(8)(01),(2)(3)(9)(01),(6)(1)(0)(02),(0)(0)(1)(02),(4)(8)(1)(02),(8)(6)(2)(02),(2)(5)(3)(02),(6)(3)(4)(02),(0)(2)(5)(02),(4)(0)(6)(02),(8)(8)(6)(02),(2)(7)(7)(02),(6)(5)(8)(02),(0)(4)(9)(02),(4)(2)(0)(03),(8)(0)(1)(03),(2)(9)(1)(03),(6)(7)(2)(03),(0)(6)(3)(03),(4)(4)(4)(03),(8)(2)(5)(03),(2)(1)(6)(03),(6)(9)(6)(03),(0)(8)(7)(03),(4)(6)(8)(03),(8)(4)(9)(03),(2)(3)(0)(04),(6)(1)(1)(04),(0)(0)(2)(04),(4)(8)(2)(04),(8)(6)(3)(04),(2)(5)(4)(04),(6)(3)(5)(04),(0)(2)(6)(04),(4)(0)(7)(04),(8)(8)(7)(04),(2)(7)(8)(04),(6)(5)(9)(04),(0)(4)(0)(05),(4)(2)(1)(05),(8)(0)(2)(05),(2)(9)(2)(05),(6)(7)(3)(05),(0)(6)(4)(05),(4)(4)(5)(05),(8)(2)(6)(05),(2)(1)(7)(05),(6)(9)(7)(05),(0)(8)(8)(05),(4)(6)(9)(05),(8)(4)(0)(06),(2)(3)(1)(06),(6)(1)(2)(06),(0)(0)(3)(06),(4)(8)(3)(06),(8)(6)(4)(06),(2)(5)(5)(06),(6)(3)(6)(06),(0)(2)(7)(06),(4)(0)(8)(06),(8)(8)(8)(06),(2)(7)(9)(06),(6)(5)(0)(07)
#define ORDER_PP_LIT_TIMES_85 0,85,(0)(7)(01),(5)(5)(02),(0)(4)(03),(5)(2)(04),(0)(1)(05),(5)(9)(05),(0)(8)(06),(5)(6)(07),(0)(5)(08),(5)(3)(09),(0)(2)(0)(01),(5)(0)(1)(01),(0)(9)(1)(01),(5)(7)(2)(01),(0)(6)(3)(01),(5)(4)(4)(01),(0)(3)(5)(01),(5)(1)(6)(01),(0)(0)(7)(01),(5)(8)(7)(01),(0)(7)(8)(01),(5)(5)(9)(01),(0)(4)(0)(02),(5)(2)(1)(02),(0)(1)(2)(02),(5)(9)(2)(02),(0)(8)(3)(02),(5)(6)(4)(02),(0)(5)(5)(02),(5)(3)(6)(02),(0)(2)(7)(02),(5)(0)(8)(02),(0)(9)(8)(02),(5)(7)(9)(02),(0)(6)(0)(03),(5)(4)(1)(03),(0)(3)(2)(03),(5)(1)(3)(03),(0)(0)(4)(03),(5)(8)(4)(03),(0)(7)(5)(03),(5)(5)(6)(03),(0)(4)(7)(03),(5)(2)(8)(03),(0)(1)(9)(03),(5)(9)(9)(03),(0)(8)(0)(04),(5)(6)(1)(04),(0)(5)(2)(04),(5)(3)(3)(04),(0)(2)(4)(04),(5)(0)(5)(04),(0)(9)(5)(04),(5)(7)(6)(04),(0)(6)(7)(04),(5)(4)(8)(04),(0)(3)(9)(04),(5)(1)(0)(05),(0)(0)(1)(05),(5)(8)(1)(05),(0)(7)(2)(05),(5)(5)(3)(05),(0)(4)(4)(05),(5)(2)(5)(05),(0)(1)(6)(05),(5)(9)(6)(05),(0)(8)(7)(05),(5)(6)(8)(05),(0)(5)(9)(05),(5)(3)(0)(06),(0)(2)(1)(06),(5)(0)(2)(06),(0)(9)(2)(06),(5)(7)(3)(06),(0)(6)(4)(06),(5)(4)(5)(06),(0)(3)(6)(06),(5)(1)(7)(06),(0)(0)(8)(06),(5)(8)(8)(06),(0)(7)(9)(06),(5)(5)(0)(07),(0)(4)(1)(07),(5)(2)(2)(07)
#define ORDER_PP_LIT_TIMES_86 0,86,(2)(7)(01),(8)(5)(02),(4)(4)(03),(0)(3)(04),(6)(1)(05),(2)(0)(06),(8)(8)(06),(4)(7)(07),(0)(6)(08),(6)(4)(09),(2)(3)(0)(01),(8)(1)(1)(01),(4)(0)(2)(01),(0)(9)(2)(01),(6)(7)(3)(01),(2)(6)(4)(01),(8)(4)(5)(01),(4)(3)(6)(01),(0)(2)(7)(01),(6)(0)(8)(01),(2)(9)(8)(01),(8)(7)(9)(01),(4)(6)(0)(02),(0)(5)(1)(02),(6)(3)(2)(02),(2)(2)(3)(02),(8)(0)(4)(02),(4)(9)(4)(02),(0)(8)(5)(02),(6)(6)(6)(02),(2)(5)(7)(02),(8)(3)(8)(02),(4)(2)(9)(02),(0)(1)(0)(03),(6)(9)(0)(03),(2)(8)(1)(03),(8)(6)(2)(03),(4)(5)(3)(03),(0)(4)(4)(03),(6)(2)(5)(03),(2)(1)(6)(03),(8)(9)(6)(03),(4)(8)(7)(03),(0)(7)(8)(03),(6)(5)(9)(03),(2)(4)(0)(04),(8)(2)(1)(04),(4)(1)(2)(04),(0)(0)(3)(04),(6)(8)(3)(04),(2)(7)(4)(04),(8)(5)(5)(04),(4)(4)(6)(04),(0)(3)(7)(04),(6)(1)(8)(04),(2)(0)(9)(04),(8)(8)(9)(04),(4)(7)(0)(05),(0)(6)(1)(05),(6)(4)(2)(05),(2)(3)(3)(05),(8)(1)(4)(05),(4)(0)(5)(05),(0)(9)(5)(05),(6)(7)(6)(05),(2)(6)(7)(05),(8)(4)(8)(05),(4)(3)(9)(05),(0)(2)(0)(06),(6)(0)(1)(06),(2)(9)(1)(06),(8)(7)(2)(06),(4)(6)(3)(06),(0)(5)(4)(06),(6)(3)(5)(06),(2)(2)(6)(06),(8)(0)(7)(06),(4)(9)(7)(06),(0)(8)(8)(06),(6)(6)(9)(06),(2)(5)(0)(07),(8)(3)(1)(07),(4)(2)(2)(07),(0)(1)(3)(07),(6)(9)(3)(07)
#define ORDER_PP_LIT_TIMES_87 0,87,(4)(7)(01),(1)(6)(02),(8)(4)(03),(5)(3)(04),(2)(2)(05),(9)(0)(06),(6)(9)(06),(3)(8)(07),(0)(7)(08),(7)(5)(09),(4)(4)(0)(01),(1)(3)(1)(01),(8)(1)(2)(01),(5)(0)(3)(01),(2)(9)(3)(01),(9)(7)(4)(01),(6)(6)(5)(01),(3)(5)(6)(01),(0)(4)(7)(01),(7)(2)(8)(01),(4)(1)(9)(01),(1)(0)(0)(02),(8)(8)(0)(02),(5)(7)(1)(02),(2)(6)(2)(02),(9)(4)(3)(02),(6)(3)(4)(02),(3)(2)(5)(02),(0)(1)(6)(02),(7)(9)(6)(02),(4)(8)(7)(02),(1)(7)(8)(02),(8)(5)(9)(02),(5)(4)(0)(03),(2)(3)(1)(03),(9)(1)(2)(03),(6)(0)(3)(03),(3)(9)(3)(03),(0)(8)(4)(03),(7)(6)(5)(03),(4)(5)(6)(03),(1)(4)(7)(03),(8)(2)(8)(03),(5)(1)(9)(03),(2)(0)(0)(04),(9)(8)(0)(04),(6)(7)(1)(04),(3)(6)(2)(04),(0)(5)(3)(04),(7)(3)(4)(04),(4)(2)(5)(04),(1)(1)(6)(04),(8)(9)(6)(04),(5)(8)(7)(04),(2)(7)(8)(04),(9)(5)(9)(04),(6)(4)(0)(05),(3)(3)(1)(05),(0)(2)(2)(05),(7)(0)(3)(05),(4)(9)(3)(05),(1)(8)(4)(05),(8)(6)(5)(05),(5)(5)(6)(05),(2)(4)(7)(05),(9)(2)(8)(05),(6)(1)(9)(05),(3)(0)(0)(06),(0)(9)(0)(06),(7)(7)(1)(06),(4)(6)(2)(06),(1)(5)(3)(06),(8)(3)(4)(06),(5)(2)(5)(06),(2)(1)(6)(06),(9)(9)(6)(06),(6)(8)(7)(06),(3)(7)(8)(06),(0)(6)(9)(06),(7)(4)(0)(07),(4)(3)(1)(07),(1)(2)(2)(07),(8)(0)(3)(07),(5)(9)(3)(07),(2)(8)(4)(07),(9)(6)(5)(07)
#define ORDER_PP_LIT_TIMES_88 0,88,(6)(7)(01),(4)(6)(02),(2)(5)(03),(0)(4)(04),(8)(2)(05),(6)(1)(06),(4)(0)(07),(2)(9)(07),(0)(8)(08),(8)(6)(09),(6)(5)(0)(01),(4)(4)(1)(01),(2)(3)(2)(01),(0)(2)(3)(01),(8)(0)(4)(01),(6)(9)(4)(01),(4)(8)(5)(01),(2)(7)(6)(01),(0)(6)(7)(01),(8)(4)(8)(01),(6)(3)(9)(01),(4)(2)(0)(02),(2)(1)(1)(02),(0)(0)(2)(02),(8)(8)(2)(02),(6)(7)(3)(02),(4)(6)(4)(02),(2)(5)(5)(02),(0)(4)(6)(02),(8)(2)(7)(02),(6)(1)(8)(02),(4)(0)(9)(02),(2)(9)(9)(02),(0)(8)(0)(03),(8)(6)(1)(03),(6)(5)(2)(03),(4)(4)(3)(03),(2)(3)(4)(03),(0)(2)(5)(03),(8)(0)(6)(03),(6)(9)(6)(03),(4)(8)(7)(03),(2)(7)(8)(03),(0)(6)(9)(03),(8)(4)(0)(04),(6)(3)(1)(04),(4)(2)(2)(04),(2)(1)(3)(04),(0)(0)(4)(04),(8)(8)(4)(04),(6)(7)(5)(04),(4)(6)(6)(04),(2)(5)(7)(04),(0)(4)(8)(04),(8)(2)(9)(04),(6)(1)(0)(05),(4)(0)(1)(05),(2)(9)(1)(05),(0)(8)(2)(05),(8)(6)(3)(05),(6)(5)(4)(05),(4)(4)(5)(05),(2)(3)(6)(05),(0)(2)(7)(05),(8)(0)(8)(05),(6)(9)(8)(05),(4)(8)(9)(05),(2)(7)(0)(06),(0)(6)(1)(06),(8)(4)(2)(06),(6)(3)(3)(06),(4)(2)(4)(06),(2)(1)(5)(06),(0)(0)(6)(06),(8)(8)(6)(06),(6)(7)(7)(06),(4)(6)(8)(06),(2)(5)(9)(06),(0)(4)(0)(07),(8)(2)(1)(07),(6)(1)(2)(07),(4)(0)(3)(07),(2)(9)(3)(07),(0)(8)(4)(07),(8)(6)(5)(07),(6)(5)(6)(07),(4)(4)(7)(07)
#define ORDER_PP_LIT_TIMES_89 0,89,(8)(7)(01),(7)(6)(02),(6)(5)(03),(5)(4)(04),(4)(3)(05),(3)(2)(06),(2)(1)(07),(1)(0)(08),(0)(9)(08),(9)(7)(09),(8)(6)(0)(01),(7)(5)(1)(01),(6)(4)(2)(01),(5)(3)(3)(01),(4)(2)(4)(01),(3)(1)(5)(01),(2)(0)(6)(01),(1)(9)(6)(01),(0)(8)(7)(01),(9)(6)(8)(01),(8)(5)(9)(01),(7)(4)(0)(02),(6)(3)(1)(02),(5)(2)(2)(02),(4)(1)(3)(02),(3)(0)(4)(02),(2)(9)(4)(02),(1)(8)(5)(02),(0)(7)(6)(02),(9)(5)(7)(02),(8)(4)(8)(02),(7)(3)(9)(02),(6)(2)(0)(03),(5)(1)(1)(03),(4)(0)(2)(03),(3)(9)(2)(03),(2)(8)(3)(03),(1)(7)(4)(03),(0)(6)(5)(03),(9)(4)(6)(03),(8)(3)(7)(03),(7)(2)(8)(03),(6)(1)(9)(03),(5)(0)(0)(04),(4)(9)(0)(04),(3)(8)(1)(04),(2)(7)(2)(04),(1)(6)(3)(04),(0)(5)(4)(04),(9)(3)(5)(04),(8)(2)(6)(04),(7)(1)(7)(04),(6)(0)(8)(04),(5)(9)(8)(04),(4)(8)(9)(04),(3)(7)(0)(05),(2)(6)(1)(05),(1)(5)(2)(05),(0)(4)(3)(05),(9)(2)(4)(05),(8)(1)(5)(05),(7)(0)(6)(05),(6)(9)(6)(05),(5)(8)(7)(05),(4)(7)(8)(05),(3)(6)(9)(05),(2)(5)(0)(06),(1)(4)(1)(06),(0)(3)(2)(06),(9)(1)(3)(06),(8)(0)(4)(06),(7)(9)(4)(06),(6)(8)(5)(06),(5)(7)(6)(06),(4)(6)(7)(06),(3)(5)(8)(06),(2)(4)(9)(06),(1)(3)(0)(07),(0)(2)(1)(07),(9)(0)(2)(07),(8)(9)(2)(07),(7)(8)(3)(07),(6)(7)(4)(07),(5)(6)(5)(07),(4)(5)(6)(07),(3)(4)(7)(07),(2)(3)(8)(07),(1)(2)(9)(07)
#define ORDER_PP_LIT_TIMES_90 0,90,(0)(8)(01),(0)(7)(02),(0)(6)(03),(0)(5)(04),(0)(4)(05),(0)(3)(06),(0)(2)(07),(0)(1)(08),(0)(0)(09),(0)(9)(09),(0)(8)(0)(01),(0)(7)(1)(01),(0)(6)(2)(01),(0)(5)(3)(01),(0)(4)(4)(01),(0)(3)(5)(01),(0)(2)(6)(01),(0)(1)(7)(01),(0)(0)(8)(01),(0)(9)(8)(01),(0)(8)(9)(01),(0)(7)(0)(02),(0)(6)(1)(02),(0)(5)(2)(02),(0)(4)(3)(02),(0)(3)(4)(02),(0)(2)(5)(02),(0)(1)(6)(02),(0)(0)(7)(02),(0)(9)(7)(02),(0)(8)(8)(02),(0)(7)(9)(02),(0)(6)(0)(03),(0)(5)(1)(03),(0)(4)(2)(03),(0)(3)(3)(03),(0)(2)(4)(03),(0)(1)(5)(03),(0)(0)(6)(03),(0)(9)(6)(03),(0)(8)(7)(03),(0)(7)(8)(03),(0)(6)(9)(03),(0)(5)(0)(04),(0)(4)(1)(04),(0)(3)(2)(04),(0)(2)(3)(04),(0)(1)(4)(04),(0)(0)(5)(04),(0)(9)(5)(04),(0)(8)(6)(04),(0)(7)(7)(04),(0)(6)(8)(04),(0)(5)(9)(04),(0)(4)(0)(05),(0)(3)(1)(05),(0)(2)(2)(05),(0)(1)(3)(05),(0)(0)(4)(05),(0)(9)(4)(05),(0)(8)(5)(05),(0)(7)(6)(05),(0)(6)(7)(05),(0)(5)(8)(05),(0)(4)(9)(05),(0)(3)(0)(06),(0)(2)(1)(06),(0)(1)(2)(06),(0)(0)(3)(06),(0)(9)(3)(06),(0)(8)(4)(06),(0)(7)(5)(06),(0)(6)(6)(06),(0)(5)(7)(06),(0)(4)(8)(06),(0)(3)(9)(06),(0)(2)(0)(07),(0)(1)(1)(07),(0)(0)(2)(07),(0)(9)(2)(07),(0)(8)(3)(07),(0)(7)(4)(07),(0)(6)(5)(07),(0)(5)(6)(07),(0)(4)(7)(07),(0)(3)(8)(07),(0)(2)(9)(07),(0)(1)(0)(08),(0)(0)(1)(08)
#define ORDER_PP_LIT_TIMES_91 0,91,(2)(8)(01),(3)(7)(02),(4)(6)(03),(5)(5)(04),(6)(4)(05),(7)(3)(06),(8)(2)(07),(9)(1)(08),(0)(1)(09),(1)(0)(0)(01),(2)(9)(0)(01),(3)(8)(1)(01),(4)(7)(2)(01),(5)(6)(3)(01),(6)(5)(4)(01),(7)(4)(5)(01),(8)(3)(6)(01),(9)(2)(7)(01),(0)(2)(8)(01),(1)(1)(9)(01),(2)(0)(0)(02),(3)(9)(0)(02),(4)(8)(1)(02),(5)(7)(2)(02),(6)(6)(3)(02),(7)(5)(4)(02),(8)(4)(5)(02),(9)(3)(6)(02),(0)(3)(7)(02),(1)(2)(8)(02),(2)(1)(9)(02),(3)(0)(0)(03),(4)(9)(0)(03),(5)(8)(1)(03),(6)(7)(2)(03),(7)(6)(3)(03),(8)(5)(4)(03),(9)(4)(5)(03),(0)(4)(6)(03),(1)(3)(7)(03),(2)(2)(8)(03),(3)(1)(9)(03),(4)(0)(0)(04),(5)(9)(0)(04),(6)(8)(1)(04),(7)(7)(2)(04),(8)(6)(3)(04),(9)(5)(4)(04),(0)(5)(5)(04),(1)(4)(6)(04),(2)(3)(7)(04),(3)(2)(8)(04),(4)(1)(9)(04),(5)(0)(0)(05),(6)(9)(0)(05),(7)(8)(1)(05),(8)(7)(2)(05),(9)(6)(3)(05),(0)(6)(4)(05),(1)(5)(5)(05),(2)(4)(6)(05),(3)(3)(7)(05),(4)(2)(8)(05),(5)(1)(9)(05),(6)(0)(0)(06),(7)(9)(0)(06),(8)(8)(1)(06),(9)(7)(2)(06),(0)(7)(3)(06),(1)(6)(4)(06),(2)(5)(5)(06),(3)(4)(6)(06),(4)(3)(7)(06),(5)(2)(8)(06),(6)(1)(9)(06),(7)(0)(0)(07),(8)(9)(0)(07),(9)(8)(1)(07),(0)(8)(2)(07),(1)(7)(3)(07),(2)(6)(4)(07),(3)(5)(5)(07),(4)(4)(6)(07),(5)(3)(7)(07),(6)(2)(8)(07),(7)(1)(9)(07),(8)(0)(0)(08),(9)(9)(0)(08),(0)(9)(1)(08),(1)(8)(2)(08)
#define ORDER_PP_LIT_TIMES_92 0,92,(4)(8)(01),(6)(7)(02),(8)(6)(03),(0)(6)(04),(2)(5)(05),(4)(4)(06),(6)(3)(07),(8)(2)(08),(0)(2)(09),(2)(1)(0)(01),(4)(0)(1)(01),(6)(9)(1)(01),(8)(8)(2)(01),(0)(8)(3)(01),(2)(7)(4)(01),(4)(6)(5)(01),(6)(5)(6)(01),(8)(4)(7)(01),(0)(4)(8)(01),(2)(3)(9)(01),(4)(2)(0)(02),(6)(1)(1)(02),(8)(0)(2)(02),(0)(0)(3)(02),(2)(9)(3)(02),(4)(8)(4)(02),(6)(7)(5)(02),(8)(6)(6)(02),(0)(6)(7)(02),(2)(5)(8)(02),(4)(4)(9)(02),(6)(3)(0)(03),(8)(2)(1)(03),(0)(2)(2)(03),(2)(1)(3)(03),(4)(0)(4)(03),(6)(9)(4)(03),(8)(8)(5)(03),(0)(8)(6)(03),(2)(7)(7)(03),(4)(6)(8)(03),(6)(5)(9)(03),(8)(4)(0)(04),(0)(4)(1)(04),(2)(3)(2)(04),(4)(2)(3)(04),(6)(1)(4)(04),(8)(0)(5)(04),(0)(0)(6)(04),(2)(9)(6)(04),(4)(8)(7)(04),(6)(7)(8)(04),(8)(6)(9)(04),(0)(6)(0)(05),(2)(5)(1)(05),(4)(4)(2)(05),(6)(3)(3)(05),(8)(2)(4)(05),(0)(2)(5)(05),(2)(1)(6)(05),(4)(0)(7)(05),(6)(9)(7)(05),(8)(8)(8)(05),(0)(8)(9)(05),(2)(7)(0)(06),(4)(6)(1)(06),(6)(5)(2)(06),(8)(4)(3)(06),(0)(4)(4)(06),(2)(3)(5)(06),(4)(2)(6)(06),(6)(1)(7)(06),(8)(0)(8)(06),(0)(0)(9)(06),(2)(9)(9)(06),(4)(8)(0)(07),(6)(7)(1)(07),(8)(6)(2)(07),(0)(6)(3)(07),(2)(5)(4)(07),(4)(4)(5)(07),(6)(3)(6)(07),(8)(2)(7)(07),(0)(2)(8)(07),(2)(1)(9)(07),(4)(0)(0)(08),(6)(9)(0)(08),(8)(8)(1)(08),(0)(8)(2)(08),(2)(7)(3)(08),(4)(6)(4)(08)
#define ORDER_PP_LIT_TIMES_93 0,93,(6)(8)(01),(9)(7)(02),(2)(7)(03),(5)(6)(04),(8)(5)(05),(1)(5)(06),(4)(4)(07),(7)(3)(08),(0)(3)(09),(3)(2)(0)(01),(6)(1)(1)(01),(9)(0)(2)(01),(2)(0)(3)(01),(5)(9)(3)(01),(8)(8)(4)(01),(1)(8)(5)(01),(4)(7)(6)(01),(7)(6)(7)(01),(0)(6)(8)(01),(3)(5)(9)(01),(6)(4)(0)(02),(9)(3)(1)(02),(2)(3)(2)(02),(5)(2)(3)(02),(8)(1)(4)(02),(1)(1)(5)(02),(4)(0)(6)(02),(7)(9)(6)(02),(0)(9)(7)(02),(3)(8)(8)(02),(6)(7)(9)(02),(9)(6)(0)(03),(2)(6)(1)(03),(5)(5)(2)(03),(8)(4)(3)(03),(1)(4)(4)(03),(4)(3)(5)(03),(7)(2)(6)(03),(0)(2)(7)(03),(3)(1)(8)(03),(6)(0)(9)(03),(9)(9)(9)(03),(2)(9)(0)(04),(5)(8)(1)(04),(8)(7)(2)(04),(1)(7)(3)(04),(4)(6)(4)(04),(7)(5)(5)(04),(0)(5)(6)(04),(3)(4)(7)(04),(6)(3)(8)(04),(9)(2)(9)(04),(2)(2)(0)(05),(5)(1)(1)(05),(8)(0)(2)(05),(1)(0)(3)(05),(4)(9)(3)(05),(7)(8)(4)(05),(0)(8)(5)(05),(3)(7)(6)(05),(6)(6)(7)(05),(9)(5)(8)(05),(2)(5)(9)(05),(5)(4)(0)(06),(8)(3)(1)(06),(1)(3)(2)(06),(4)(2)(3)(06),(7)(1)(4)(06),(0)(1)(5)(06),(3)(0)(6)(06),(6)(9)(6)(06),(9)(8)(7)(06),(2)(8)(8)(06),(5)(7)(9)(06),(8)(6)(0)(07),(1)(6)(1)(07),(4)(5)(2)(07),(7)(4)(3)(07),(0)(4)(4)(07),(3)(3)(5)(07),(6)(2)(6)(07),(9)(1)(7)(07),(2)(1)(8)(07),(5)(0)(9)(07),(8)(9)(9)(07),(1)(9)(0)(08),(4)(8)(1)(08),(7)(7)(2)(08),(0)(7)(3)(08),(3)(6)(4)(08),(6)(5)(5)(08),(9)(4)(6)(08)
#define ORDER_PP_LIT_TIMES_94 0,94,(8)(8)(01),(2)(8)(02),(6)(7)(03),(0)(7)(04),(4)(6)(05),(8)(5)(06),(2)(5)(07),(6)(4)(08),(0)(4)(09),(4)(3)(0)(01),(8)(2)(1)(01),(2)(2)(2)(01),(6)(1)(3)(01),(0)(1)(4)(01),(4)(0)(5)(01),(8)(9)(5)(01),(2)(9)(6)(01),(6)(8)(7)(01),(0)(8)(8)(01),(4)(7)(9)(01),(8)(6)(0)(02),(2)(6)(1)(02),(6)(5)(2)(02),(0)(5)(3)(02),(4)(4)(4)(02),(8)(3)(5)(02),(2)(3)(6)(02),(6)(2)(7)(02),(0)(2)(8)(02),(4)(1)(9)(02),(8)(0)(0)(03),(2)(0)(1)(03),(6)(9)(1)(03),(0)(9)(2)(03),(4)(8)(3)(03),(8)(7)(4)(03),(2)(7)(5)(03),(6)(6)(6)(03),(0)(6)(7)(03),(4)(5)(8)(03),(8)(4)(9)(03),(2)(4)(0)(04),(6)(3)(1)(04),(0)(3)(2)(04),(4)(2)(3)(04),(8)(1)(4)(04),(2)(1)(5)(04),(6)(0)(6)(04),(0)(0)(7)(04),(4)(9)(7)(04),(8)(8)(8)(04),(2)(8)(9)(04),(6)(7)(0)(05),(0)(7)(1)(05),(4)(6)(2)(05),(8)(5)(3)(05),(2)(5)(4)(05),(6)(4)(5)(05),(0)(4)(6)(05),(4)(3)(7)(05),(8)(2)(8)(05),(2)(2)(9)(05),(6)(1)(0)(06),(0)(1)(1)(06),(4)(0)(2)(06),(8)(9)(2)(06),(2)(9)(3)(06),(6)(8)(4)(06),(0)(8)(5)(06),(4)(7)(6)(06),(8)(6)(7)(06),(2)(6)(8)(06),(6)(5)(9)(06),(0)(5)(0)(07),(4)(4)(1)(07),(8)(3)(2)(07),(2)(3)(3)(07),(6)(2)(4)(07),(0)(2)(5)(07),(4)(1)(6)(07),(8)(0)(7)(07),(2)(0)(8)(07),(6)(9)(8)(07),(0)(9)(9)(07),(4)(8)(0)(08),(8)(7)(1)(08),(2)(7)(2)(08),(6)(6)(3)(08),(0)(6)(4)(08),(4)(5)(5)(08),(8)(4)(6)(08),(2)(4)(7)(08),(6)(3)(8)(08)
#define ORDER_PP_LIT_TIMES_95 0,95,(0)(9)(01),(5)(8)(02),(0)(8)(03),(5)(7)(04),(0)(7)(05),(5)(6)(06),(0)(6)(07),(5)(5)(08),(0)(5)(09),(5)(4)(0)(01),(0)(4)(1)(01),(5)(3)(2)(01),(0)(3)(3)(01),(5)(2)(4)(01),(0)(2)(5)(01),(5)(1)(6)(01),(0)(1)(7)(01),(5)(0)(8)(01),(0)(0)(9)(01),(5)(9)(9)(01),(0)(9)(0)(02),(5)(8)(1)(02),(0)(8)(2)(02),(5)(7)(3)(02),(0)(7)(4)(02),(5)(6)(5)(02),(0)(6)(6)(02),(5)(5)(7)(02),(0)(5)(8)(02),(5)(4)(9)(02),(0)(4)(0)(03),(5)(3)(1)(03),(0)(3)(2)(03),(5)(2)(3)(03),(0)(2)(4)(03),(5)(1)(5)(03),(0)(1)(6)(03),(5)(0)(7)(03),(0)(0)(8)(03),(5)(9)(8)(03),(0)(9)(9)(03),(5)(8)(0)(04),(0)(8)(1)(04),(5)(7)(2)(04),(0)(7)(3)(04),(5)(6)(4)(04),(0)(6)(5)(04),(5)(5)(6)(04),(0)(5)(7)(04),(5)(4)(8)(04),(0)(4)(9)(04),(5)(3)(0)(05),(0)(3)(1)(05),(5)(2)(2)(05),(0)(2)(3)(05),(5)(1)(4)(05),(0)(1)(5)(05),(5)(0)(6)(05),(0)(0)(7)(05),(5)(9)(7)(05),(0)(9)(8)(05),(5)(8)(9)(05),(0)(8)(0)(06),(5)(7)(1)(06),(0)(7)(2)(06),(5)(6)(3)(06),(0)(6)(4)(06),(5)(5)(5)(06),(0)(5)(6)(06),(5)(4)(7)(06),(0)(4)(8)(06),(5)(3)(9)(06),(0)(3)(0)(07),(5)(2)(1)(07),(0)(2)(2)(07),(5)(1)(3)(07),(0)(1)(4)(07),(5)(0)(5)(07),(0)(0)(6)(07),(5)(9)(6)(07),(0)(9)(7)(07),(5)(8)(8)(07),(0)(8)(9)(07),(5)(7)(0)(08),(0)(7)(1)(08),(5)(6)(2)(08),(0)(6)(3)(08),(5)(5)(4)(08),(0)(5)(5)(08),(5)(4)(6)(08),(0)(4)(7)(08),(5)(3)(8)(08),(0)(3)(9)(08),(5)(2)(0)(09)
#define ORDER_PP_LIT_TIMES_96 0,96,(2)(9)(01),(8)(8)(02),(4)(8)(03),(0)(8)(04),(6)(7)(05),(2)(7)(06),(8)(6)(07),(4)(6)(08),(0)(6)(09),(6)(5)(0)(01),(2)(5)(1)(01),(8)(4)(2)(01),(4)(4)(3)(01),(0)(4)(4)(01),(6)(3)(5)(01),(2)(3)(6)(01),(8)(2)(7)(01),(4)(2)(8)(01),(0)(2)(9)(01),(6)(1)(0)(02),(2)(1)(1)(02),(8)(0)(2)(02),(4)(0)(3)(02),(0)(0)(4)(02),(6)(9)(4)(02),(2)(9)(5)(02),(8)(8)(6)(02),(4)(8)(7)(02),(0)(8)(8)(02),(6)(7)(9)(02),(2)(7)(0)(03),(8)(6)(1)(03),(4)(6)(2)(03),(0)(6)(3)(03),(6)(5)(4)(03),(2)(5)(5)(03),(8)(4)(6)(03),(4)(4)(7)(03),(0)(4)(8)(03),(6)(3)(9)(03),(2)(3)(0)(04),(8)(2)(1)(04),(4)(2)(2)(04),(0)(2)(3)(04),(6)(1)(4)(04),(2)(1)(5)(04),(8)(0)(6)(04),(4)(0)(7)(04),(0)(0)(8)(04),(6)(9)(8)(04),(2)(9)(9)(04),(8)(8)(0)(05),(4)(8)(1)(05),(0)(8)(2)(05),(6)(7)(3)(05),(2)(7)(4)(05),(8)(6)(5)(05),(4)(6)(6)(05),(0)(6)(7)(05),(6)(5)(8)(05),(2)(5)(9)(05),(8)(4)(0)(06),(4)(4)(1)(06),(0)(4)(2)(06),(6)(3)(3)(06),(2)(3)(4)(06),(8)(2)(5)(06),(4)(2)(6)(06),(0)(2)(7)(06),(6)(1)(8)(06),(2)(1)(9)(06),(8)(0)(0)(07),(4)(0)(1)(07),(0)(0)(2)(07),(6)(9)(2)(07),(2)(9)(3)(07),(8)(8)(4)(07),(4)(8)(5)(07),(0)(8)(6)(07),(6)(7)(7)(07),(2)(7)(8)(07),(8)(6)(9)(07),(4)(6)(0)(08),(0)(6)(1)(08),(6)(5)(2)(08),(2)(5)(3)(08),(8)(4)(4)(08),(4)(4)(5)(08),(0)(4)(6)(08),(6)(3)(7)(08),(2)(3)(8)(08),(8)(2)(9)(08),(4)(2)(0)(09),(0)(2)(1)(09),(6)(1)(2)(09)
#define ORDER_PP_LIT_TIMES_97 0,97,(4)(9)(01),(1)(9)(02),(8)(8)(03),(5)(8)(04),(2)(8)(05),(9)(7)(06),(6)(7)(07),(3)(7)(08),(0)(7)(09),(7)(6)(0)(01),(4)(6)(1)(01),(1)(6)(2)(01),(8)(5)(3)(01),(5)(5)(4)(01),(2)(5)(5)(01),(9)(4)(6)(01),(6)(4)(7)(01),(3)(4)(8)(01),(0)(4)(9)(01),(7)(3)(0)(02),(4)(3)(1)(02),(1)(3)(2)(02),(8)(2)(3)(02),(5)(2)(4)(02),(2)(2)(5)(02),(9)(1)(6)(02),(6)(1)(7)(02),(3)(1)(8)(02),(0)(1)(9)(02),(7)(0)(0)(03),(4)(0)(1)(03),(1)(0)(2)(03),(8)(9)(2)(03),(5)(9)(3)(03),(2)(9)(4)(03),(9)(8)(5)(03),(6)(8)(6)(03),(3)(8)(7)(03),(0)(8)(8)(03),(7)(7)(9)(03),(4)(7)(0)(04),(1)(7)(1)(04),(8)(6)(2)(04),(5)(6)(3)(04),(2)(6)(4)(04),(9)(5)(5)(04),(6)(5)(6)(04),(3)(5)(7)(04),(0)(5)(8)(04),(7)(4)(9)(04),(4)(4)(0)(05),(1)(4)(1)(05),(8)(3)(2)(05),(5)(3)(3)(05),(2)(3)(4)(05),(9)(2)(5)(05),(6)(2)(6)(05),(3)(2)(7)(05),(0)(2)(8)(05),(7)(1)(9)(05),(4)(1)(0)(06),(1)(1)(1)(06),(8)(0)(2)(06),(5)(0)(3)(06),(2)(0)(4)(06),(9)(9)(4)(06),(6)(9)(5)(06),(3)(9)(6)(06),(0)(9)(7)(06),(7)(8)(8)(06),(4)(8)(9)(06),(1)(8)(0)(07),(8)(7)(1)(07),(5)(7)(2)(07),(2)(7)(3)(07),(9)(6)(4)(07),(6)(6)(5)(07),(3)(6)(6)(07),(0)(6)(7)(07),(7)(5)(8)(07),(4)(5)(9)(07),(1)(5)(0)(08),(8)(4)(1)(08),(5)(4)(2)(08),(2)(4)(3)(08),(9)(3)(4)(08),(6)(3)(5)(08),(3)(3)(6)(08),(0)(3)(7)(08),(7)(2)(8)(08),(4)(2)(9)(08),(1)(2)(0)(09),(8)(1)(1)(09),(5)(1)(2)(09),(2)(1)(3)(09),(9)(0)(4)(09)
#define ORDER_PP_LIT_TIMES_98 0,98,(6)(9)(01),(4)(9)(02),(2)(9)(03),(0)(9)(04),(8)(8)(05),(6)(8)(06),(4)(8)(07),(2)(8)(08),(0)(8)(09),(8)(7)(0)(01),(6)(7)(1)(01),(4)(7)(2)(01),(2)(7)(3)(01),(0)(7)(4)(01),(8)(6)(5)(01),(6)(6)(6)(01),(4)(6)(7)(01),(2)(6)(8)(01),(0)(6)(9)(01),(8)(5)(0)(02),(6)(5)(1)(02),(4)(5)(2)(02),(2)(5)(3)(02),(0)(5)(4)(02),(8)(4)(5)(02),(6)(4)(6)(02),(4)(4)(7)(02),(2)(4)(8)(02),(0)(4)(9)(02),(8)(3)(0)(03),(6)(3)(1)(03),(4)(3)(2)(03),(2)(3)(3)(03),(0)(3)(4)(03),(8)(2)(5)(03),(6)(2)(6)(03),(4)(2)(7)(03),(2)(2)(8)(03),(0)(2)(9)(03),(8)(1)(0)(04),(6)(1)(1)(04),(4)(1)(2)(04),(2)(1)(3)(04),(0)(1)(4)(04),(8)(0)(5)(04),(6)(0)(6)(04),(4)(0)(7)(04),(2)(0)(8)(04),(0)(0)(9)(04),(8)(9)(9)(04),(6)(9)(0)(05),(4)(9)(1)(05),(2)(9)(2)(05),(0)(9)(3)(05),(8)(8)(4)(05),(6)(8)(5)(05),(4)(8)(6)(05),(2)(8)(7)(05),(0)(8)(8)(05),(8)(7)(9)(05),(6)(7)(0)(06),(4)(7)(1)(06),(2)(7)(2)(06),(0)(7)(3)(06),(8)(6)(4)(06),(6)(6)(5)(06),(4)(6)(6)(06),(2)(6)(7)(06),(0)(6)(8)(06),(8)(5)(9)(06),(6)(5)(0)(07),(4)(5)(1)(07),(2)(5)(2)(07),(0)(5)(3)(07),(8)(4)(4)(07),(6)(4)(5)(07),(4)(4)(6)(07),(2)(4)(7)(07),(0)(4)(8)(07),(8)(3)(9)(07),(6)(3)(0)(08),(4)(3)(1)(08),(2)(3)(2)(08),(0)(3)(3)(08),(8)(2)(4)(08),(6)(2)(5)(08),(4)(2)(6)(08),(2)(2)(7)(08),(0)(2)(8)(08),(8)(1)(9)(08),(6)(1)(0)(09),(4)(1)(1)(09),(2)(1)(2)(09),(0)(1)(3)(09),(8)(0)(4)(09),(6)(0)(5)(09),(4)(0)(6)(09)
#define ORDER_PP_LIT_TIMES_99 0,99,(8)(9)(01),(7)(9)(02),(6)(9)(03),(5)(9)(04),(4)(9)(05),(3)(9)(06),(2)(9)(07),(1)(9)(08),(0)(9)(09),(9)(8)(0)(01),(8)(8)(1)(01),(7)(8)(2)(01),(6)(8)(3)(01),(5)(8)(4)(01),(4)(8)(5)(01),(3)(8)(6)(01),(2)(8)(7)(01),(1)(8)(8)(01),(0)(8)(9)(01),(9)(7)(0)(02),(8)(7)(1)(02),(7)(7)(2)(02),(6)(7)(3)(02),(5)(7)(4)(02),(4)(7)(5)(02),(3)(7)(6)(02),(2)(7)(7)(02),(1)(7)(8)(02),(0)(7)(9)(02),(9)(6)(0)(03),(8)(6)(1)(03),(7)(6)(2)(03),(6)(6)(3)(03),(5)(6)(4)(03),(4)(6)(5)(03),(3)(6)(6)(03),(2)(6)(7)(03),(1)(6)(8)(03),(0)(6)(9)(03),(9)(5)(0)(04),(8)(5)(1)(04),(7)(5)(2)(04),(6)(5)(3)(04),(5)(5)(4)(04),(4)(5)(5)(04),(3)(5)(6)(04),(2)(5)(7)(04),(1)(5)(8)(04),(0)(5)(9)(04),(9)(4)(0)(05),(8)(4)(1)(05),(7)(4)(2)(05),(6)(4)(3)(05),(5)(4)(4)(05),(4)(4)(5)(05),(3)(4)(6)(05),(2)(4)(7)(05),(1)(4)(8)(05),(0)(4)(9)(05),(9)(3)(0)(06),(8)(3)(1)(06),(7)(3)(2)(06),(6)(3)(3)(06),(5)(3)(4)(06),(4)(3)(5)(06),(3)(3)(6)(06),(2)(3)(7)(06),(1)(3)(8)(06),(0)(3)(9)(06),(9)(2)(0)(07),(8)(2)(1)(07),(7)(2)(2)(07),(6)(2)(3)(07),(5)(2)(4)(07),(4)(2)(5)(07),(3)(2)(6)(07),(2)(2)(7)(07),(1)(2)(8)(07),(0)(2)(9)(07),(9)(1)(0)(08),(8)(1)(1)(08),(7)(1)(2)(08),(6)(1)(3)(08),(5)(1)(4)(08),(4)(1)(5)(08),(3)(1)(6)(08),(2)(1)(7)(08),(1)(1)(8)(08),(0)(1)(9)(08),(9)(0)(0)(09),(8)(0)(1)(09),(7)(0)(2)(09),(6)(0)(3)(09),(5)(0)(4)(09),(4)(0)(5)(09),(3)(0)(6)(09),(2)(0)(7)(09),(1)(0)(8)(09)
#define ORDER_PP_LIT_TIMES_100 0,100,(0)(0)(02),(0)(0)(03),(0)(0)(04),(0)(0)(05),(0)(0)(06),(0)(0)(07),(0)(0)(08),(0)(0)(09),(0)(0)(0)(01),(0)(0)(1)(01),(0)(0)(2)(01),(0)(0)(3)(01),(0)(0)(4)(01),(0)(0)(5)(01),(0)(0)(6)(01),(0)(0)(7)(01),(0)(0)(8)(01),(0)(0)(9)(01),(0)(0)(0)(02),(0)(0)(1)(02),(0)(0)(2)(02),(0)(0)(3)(02),(0)(0)(4)(02),(0)(0)(5)(02),(0)(0)(6)(02),(0)(0)(7)(02),(0)(0)(8)(02),(0)(0)(9)(02),(0)(0)(0)(03),(0)(0)(1)(03),(0)(0)(2)(03),(0)(0)(3)(03),(0)(0)(4)(03),(0)(0)(5)(03),(0)(0)(6)(03),(0)(0)(7)(03),(0)(0)(8)(03),(0)(0)(9)(03),(0)(0)(0)(04),(0)(0)(1)(04),(0)(0)(2)(04),(0)(0)(3)(04),(0)(0)(4)(04),(0)(0)(5)(04),(0)(0)(6)(04),(0)(0)(7)(04),(0)(0)(8)(04),(0)(0)(9)(04),(0)(0)(0)(05),(0)(0)(1)(05),(0)(0)(2)(05),(0)(0)(3)(05),(0)(0)(4)(05),(0)(0)(5)(05),(0)(0)(6)(05),(0)(0)(7)(05),(0)(0)(8)(05),(0)(0)(9)(05),(0)(0)(0)(06),(0)(0)(1)(06),(0)(0)(2)(06),(0)(0)(3)(06),(0)(0)(4)(06),(0)(0)(5)(06),(0)(0)(6)(06),(0)(0)(7)(06),(0)(0)(8)(06),(0)(0)(9)(06),(0)(0)(0)(07),(0)(0)(1)(07),(0)(0)(2)(07),(0)(0)(3)(07),(0)(0)(4)(07),(0)(0)(5)(07),(0)(0)(6)(07),(0)(0)(7)(07),(0)(0)(8)(07),(0)(0)(9)(07),(0)(0)(0)(08),(0)(0)(1)(08),(0)(0)(2)(08),(0)(0)(3)(08),(0)(0)(4)(08),(0)(0)(5)(08),(0)(0)(6)(08),(0)(0)(7)(08),(0)(0)(8)(08),(0)(0)(9)(08),(0)(0)(0)(09),(0)(0)(1)(09),(0)(0)(2)(09),(0)(0)(3)(09),(0)(0)(4)(09),(0)(0)(5)(09),(0)(0)(6)(09),(0)(0)(7)(09),(0)(0)(8)(09),(0)(0)(9)(09),(0)(0)(0)(0)(01)

#define ORDER_PP_LIT_QUOTIENT_0 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!)
#define ORDER_PP_LIT_QUOTIENT_1 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),1
#define ORDER_PP_LIT_QUOTIENT_2 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),2,1
#define ORDER_PP_LIT_QUOTIENT_3 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),3,1,1
#define ORDER_PP_LIT_QUOTIENT_4 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),4,2,1,1
#define ORDER_PP_LIT_QUOTIENT_5 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),5,2,1,1,1
#define ORDER_PP_LIT_QUOTIENT_6 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),6,3,2,1,1,1
#define ORDER_PP_LIT_QUOTIENT_7 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),7,3,2,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_8 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),8,4,2,2,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_9 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),9,4,3,2,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_10 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),10,5,3,2,2,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_11 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),11,5,3,2,2,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_12 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),12,6,4,3,2,2,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_13 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),13,6,4,3,2,2,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_14 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),14,7,4,3,2,2,2,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_15 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),15,7,5,3,3,2,2,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_16 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),16,8,5,4,3,2,2,2,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_17 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),17,8,5,4,3,2,2,2,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_18 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),18,9,6,4,3,3,2,2,2,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_19 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),19,9,6,4,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_20 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),20,10,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_21 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),21,10,7,5,4,3,3,2,2,2,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_22 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),22,11,7,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_23 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),23,11,7,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_24 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),24,12,8,6,4,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_25 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),25,12,8,6,5,4,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_26 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),26,13,8,6,5,4,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_27 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),27,13,9,6,5,4,3,3,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_28 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),28,14,9,7,5,4,4,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_29 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),29,14,9,7,5,4,4,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_30 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),30,15,10,7,6,5,4,3,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_31 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),31,15,10,7,6,5,4,3,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_32 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),32,16,10,8,6,5,4,4,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_33 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),33,16,11,8,6,5,4,4,3,3,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_34 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),34,17,11,8,6,5,4,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_35 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),35,17,11,8,7,5,5,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_36 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),36,18,12,9,7,6,5,4,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_37 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),37,18,12,9,7,6,5,4,4,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_38 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),38,19,12,9,7,6,5,4,4,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_39 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),39,19,13,9,7,6,5,4,4,3,3,3,3,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_40 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),40,20,13,10,8,6,5,5,4,4,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_41 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),41,20,13,10,8,6,5,5,4,4,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_42 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),42,21,14,10,8,7,6,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_43 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),43,21,14,10,8,7,6,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_44 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),44,22,14,11,8,7,6,5,4,4,4,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_45 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),45,22,15,11,9,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_46 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),46,23,15,11,9,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_47 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),47,23,15,11,9,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_48 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),48,24,16,12,9,8,6,6,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_49 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),49,24,16,12,9,8,7,6,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_50 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),50,25,16,12,10,8,7,6,5,5,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_51 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),51,25,17,12,10,8,7,6,5,5,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_52 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),52,26,17,13,10,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_53 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),53,26,17,13,10,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_54 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),54,27,18,13,10,9,7,6,6,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_55 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),55,27,18,13,11,9,7,6,6,5,5,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_56 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),56,28,18,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_57 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),57,28,19,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_58 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),58,29,19,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_59 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),59,29,19,14,11,9,8,7,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_60 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),60,30,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_61 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),61,30,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_62 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),62,31,20,15,12,10,8,7,6,6,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_63 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),63,31,21,15,12,10,9,7,7,6,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_64 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),64,32,21,16,12,10,9,8,7,6,5,5,4,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_65 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),65,32,21,16,13,10,9,8,7,6,5,5,5,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_66 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),66,33,22,16,13,11,9,8,7,6,6,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_67 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),67,33,22,16,13,11,9,8,7,6,6,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_68 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),68,34,22,17,13,11,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_69 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),69,34,23,17,13,11,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_70 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),70,35,23,17,14,11,10,8,7,7,6,5,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_71 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),71,35,23,17,14,11,10,8,7,7,6,5,5,5,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_72 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),72,36,24,18,14,12,10,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_73 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),73,36,24,18,14,12,10,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_74 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),74,37,24,18,14,12,10,9,8,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_75 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),75,37,25,18,15,12,10,9,8,7,6,6,5,5,5,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_76 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),76,38,25,19,15,12,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_77 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),77,38,25,19,15,12,11,9,8,7,7,6,5,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_78 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),78,39,26,19,15,13,11,9,8,7,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_79 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),79,39,26,19,15,13,11,9,8,7,7,6,6,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_80 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),80,40,26,20,16,13,11,10,8,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_81 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),81,40,27,20,16,13,11,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_82 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),82,41,27,20,16,13,11,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_83 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),83,41,27,20,16,13,11,10,9,8,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_84 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),84,42,28,21,16,14,12,10,9,8,7,7,6,6,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_85 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),85,42,28,21,17,14,12,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_86 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),86,43,28,21,17,14,12,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_87 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),87,43,29,21,17,14,12,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_88 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),88,44,29,22,17,14,12,11,9,8,8,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_89 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),89,44,29,22,17,14,12,11,9,8,8,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_90 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),90,45,30,22,18,15,12,11,10,9,8,7,6,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_91 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),91,45,30,22,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_92 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),92,46,30,23,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_93 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),93,46,31,23,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_94 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),94,47,31,23,18,15,13,11,10,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_95 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),95,47,31,23,19,15,13,11,10,9,8,7,7,6,6,5,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_96 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),96,48,32,24,19,16,13,12,10,9,8,8,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_97 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),97,48,32,24,19,16,13,12,10,9,8,8,7,6,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_98 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),98,49,32,24,19,16,14,12,10,9,8,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_99 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),99,49,33,24,19,16,14,12,11,9,9,8,7,7,6,6,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
#define ORDER_PP_LIT_QUOTIENT_100 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),100,50,33,25,20,16,14,12,11,10,9,8,7,7,6,6,5,5,5,5,4,4,4,4,4,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1

#define ORDER_PP_LIT_REMAINDER_0 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!)
#define ORDER_PP_LIT_REMAINDER_1 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0
#define ORDER_PP_LIT_REMAINDER_2 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0
#define ORDER_PP_LIT_REMAINDER_3 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0
#define ORDER_PP_LIT_REMAINDER_4 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0
#define ORDER_PP_LIT_REMAINDER_5 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,0
#define ORDER_PP_LIT_REMAINDER_6 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,1,0
#define ORDER_PP_LIT_REMAINDER_7 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_8 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_9 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_10 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,0,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_11 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,1,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_12 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,2,0,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_13 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,3,1,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_14 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,4,2,0,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_15 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,0,3,1,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_16 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,1,4,2,0,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_17 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,2,5,3,1,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_18 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,3,0,4,2,0,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_19 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,4,1,5,3,1,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_20 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,0,2,6,4,2,0,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_21 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,1,3,0,5,3,1,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_22 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,2,4,1,6,4,2,0,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_23 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,3,5,2,7,5,3,1,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_24 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,4,0,3,0,6,4,2,0,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_25 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,0,1,4,1,7,5,3,1,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_26 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,1,2,5,2,8,6,4,2,0,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_27 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,2,3,6,3,0,7,5,3,1,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_28 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,3,4,0,4,1,8,6,4,2,0,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_29 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,4,5,1,5,2,9,7,5,3,1,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_30 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,0,0,2,6,3,0,8,6,4,2,0,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_31 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,1,1,3,7,4,1,9,7,5,3,1,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_32 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,2,2,4,0,5,2,10,8,6,4,2,0,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_33 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,3,3,5,1,6,3,0,9,7,5,3,1,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_34 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,4,4,6,2,7,4,1,10,8,6,4,2,0,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_35 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,0,5,0,3,8,5,2,11,9,7,5,3,1,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_36 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,1,0,1,4,0,6,3,0,10,8,6,4,2,0,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_37 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,2,1,2,5,1,7,4,1,11,9,7,5,3,1,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_38 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,3,2,3,6,2,8,5,2,12,10,8,6,4,2,0,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_39 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,4,3,4,7,3,9,6,3,0,11,9,7,5,3,1,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_40 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,0,4,5,0,4,0,7,4,1,12,10,8,6,4,2,0,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_41 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,1,5,6,1,5,1,8,5,2,13,11,9,7,5,3,1,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_42 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,2,0,0,2,6,2,9,6,3,0,12,10,8,6,4,2,0,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_43 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,3,1,1,3,7,3,10,7,4,1,13,11,9,7,5,3,1,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_44 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,4,2,2,4,8,4,0,8,5,2,14,12,10,8,6,4,2,0,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_45 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,0,3,3,5,0,5,1,9,6,3,0,13,11,9,7,5,3,1,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_46 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,1,4,4,6,1,6,2,10,7,4,1,14,12,10,8,6,4,2,0,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_47 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,2,5,5,7,2,7,3,11,8,5,2,15,13,11,9,7,5,3,1,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_48 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,3,0,6,0,3,8,4,0,9,6,3,0,14,12,10,8,6,4,2,0,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_49 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,4,1,0,1,4,9,5,1,10,7,4,1,15,13,11,9,7,5,3,1,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_50 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,0,2,1,2,5,0,6,2,11,8,5,2,16,14,12,10,8,6,4,2,0,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_51 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,1,3,2,3,6,1,7,3,12,9,6,3,0,15,13,11,9,7,5,3,1,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_52 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,2,4,3,4,7,2,8,4,0,10,7,4,1,16,14,12,10,8,6,4,2,0,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_53 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,3,5,4,5,8,3,9,5,1,11,8,5,2,17,15,13,11,9,7,5,3,1,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_54 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,4,0,5,6,0,4,10,6,2,12,9,6,3,0,16,14,12,10,8,6,4,2,0,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_55 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,0,1,6,7,1,5,0,7,3,13,10,7,4,1,17,15,13,11,9,7,5,3,1,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_56 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,1,2,0,0,2,6,1,8,4,0,11,8,5,2,18,16,14,12,10,8,6,4,2,0,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_57 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,2,3,1,1,3,7,2,9,5,1,12,9,6,3,0,17,15,13,11,9,7,5,3,1,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_58 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,3,4,2,2,4,8,3,10,6,2,13,10,7,4,1,18,16,14,12,10,8,6,4,2,0,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_59 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,4,5,3,3,5,9,4,11,7,3,14,11,8,5,2,19,17,15,13,11,9,7,5,3,1,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_60 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,0,0,4,4,6,0,5,0,8,4,0,12,9,6,3,0,18,16,14,12,10,8,6,4,2,0,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_61 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,1,1,5,5,7,1,6,1,9,5,1,13,10,7,4,1,19,17,15,13,11,9,7,5,3,1,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_62 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,2,2,6,6,8,2,7,2,10,6,2,14,11,8,5,2,20,18,16,14,12,10,8,6,4,2,0,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_63 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,3,3,0,7,0,3,8,3,11,7,3,15,12,9,6,3,0,19,17,15,13,11,9,7,5,3,1,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_64 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,4,4,1,0,1,4,9,4,12,8,4,0,13,10,7,4,1,20,18,16,14,12,10,8,6,4,2,0,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_65 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,0,5,2,1,2,5,10,5,0,9,5,1,14,11,8,5,2,21,19,17,15,13,11,9,7,5,3,1,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_66 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,1,0,3,2,3,6,0,6,1,10,6,2,15,12,9,6,3,0,20,18,16,14,12,10,8,6,4,2,0,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_67 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,2,1,4,3,4,7,1,7,2,11,7,3,16,13,10,7,4,1,21,19,17,15,13,11,9,7,5,3,1,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_68 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,3,2,5,4,5,8,2,8,3,12,8,4,0,14,11,8,5,2,22,20,18,16,14,12,10,8,6,4,2,0,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_69 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,4,3,6,5,6,9,3,9,4,13,9,5,1,15,12,9,6,3,0,21,19,17,15,13,11,9,7,5,3,1,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_70 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,0,4,0,6,7,0,4,10,5,0,10,6,2,16,13,10,7,4,1,22,20,18,16,14,12,10,8,6,4,2,0,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_71 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,1,5,1,7,8,1,5,11,6,1,11,7,3,17,14,11,8,5,2,23,21,19,17,15,13,11,9,7,5,3,1,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_72 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,2,0,2,0,0,2,6,0,7,2,12,8,4,0,15,12,9,6,3,0,22,20,18,16,14,12,10,8,6,4,2,0,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_73 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,3,1,3,1,1,3,7,1,8,3,13,9,5,1,16,13,10,7,4,1,23,21,19,17,15,13,11,9,7,5,3,1,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_74 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,4,2,4,2,2,4,8,2,9,4,14,10,6,2,17,14,11,8,5,2,24,22,20,18,16,14,12,10,8,6,4,2,0,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_75 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,0,3,5,3,3,5,9,3,10,5,0,11,7,3,18,15,12,9,6,3,0,23,21,19,17,15,13,11,9,7,5,3,1,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_76 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,1,4,6,4,4,6,10,4,11,6,1,12,8,4,0,16,13,10,7,4,1,24,22,20,18,16,14,12,10,8,6,4,2,0,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_77 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,2,5,0,5,5,7,0,5,12,7,2,13,9,5,1,17,14,11,8,5,2,25,23,21,19,17,15,13,11,9,7,5,3,1,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_78 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,3,0,1,6,6,8,1,6,0,8,3,14,10,6,2,18,15,12,9,6,3,0,24,22,20,18,16,14,12,10,8,6,4,2,0,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_79 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,4,1,2,7,7,9,2,7,1,9,4,15,11,7,3,19,16,13,10,7,4,1,25,23,21,19,17,15,13,11,9,7,5,3,1,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_80 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,0,2,3,0,8,0,3,8,2,10,5,0,12,8,4,0,17,14,11,8,5,2,26,24,22,20,18,16,14,12,10,8,6,4,2,0,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_81 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,1,3,4,1,0,1,4,9,3,11,6,1,13,9,5,1,18,15,12,9,6,3,0,25,23,21,19,17,15,13,11,9,7,5,3,1,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_82 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,2,4,5,2,1,2,5,10,4,12,7,2,14,10,6,2,19,16,13,10,7,4,1,26,24,22,20,18,16,14,12,10,8,6,4,2,0,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_83 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,3,5,6,3,2,3,6,11,5,13,8,3,15,11,7,3,20,17,14,11,8,5,2,27,25,23,21,19,17,15,13,11,9,7,5,3,1,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_84 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,4,0,0,4,3,4,7,0,6,0,9,4,16,12,8,4,0,18,15,12,9,6,3,0,26,24,22,20,18,16,14,12,10,8,6,4,2,0,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_85 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,0,1,1,5,4,5,8,1,7,1,10,5,0,13,9,5,1,19,16,13,10,7,4,1,27,25,23,21,19,17,15,13,11,9,7,5,3,1,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_86 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,1,2,2,6,5,6,9,2,8,2,11,6,1,14,10,6,2,20,17,14,11,8,5,2,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_87 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,2,3,3,7,6,7,10,3,9,3,12,7,2,15,11,7,3,21,18,15,12,9,6,3,0,27,25,23,21,19,17,15,13,11,9,7,5,3,1,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_88 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,3,4,4,0,7,8,0,4,10,4,13,8,3,16,12,8,4,0,19,16,13,10,7,4,1,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_89 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,1,4,5,5,1,8,9,1,5,11,5,14,9,4,17,13,9,5,1,20,17,14,11,8,5,2,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_90 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,2,0,0,6,2,0,0,2,6,12,6,0,10,5,0,14,10,6,2,21,18,15,12,9,6,3,0,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_91 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,3,1,1,0,3,1,1,3,7,0,7,1,11,6,1,15,11,7,3,22,19,16,13,10,7,4,1,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_92 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,0,2,2,1,4,2,2,4,8,1,8,2,12,7,2,16,12,8,4,0,20,17,14,11,8,5,2,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_93 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,1,3,3,2,5,3,3,5,9,2,9,3,13,8,3,17,13,9,5,1,21,18,15,12,9,6,3,0,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_94 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,2,4,4,3,6,4,4,6,10,3,10,4,14,9,4,18,14,10,6,2,22,19,16,13,10,7,4,1,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_95 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,2,3,0,5,4,7,5,5,7,11,4,11,5,15,10,5,0,15,11,7,3,23,20,17,14,11,8,5,2,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_96 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,0,0,1,0,5,0,6,6,8,0,5,12,6,0,11,6,1,16,12,8,4,0,21,18,15,12,9,6,3,0,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_97 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,1,1,2,1,6,1,7,7,9,1,6,13,7,1,12,7,2,17,13,9,5,1,22,19,16,13,10,7,4,1,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_98 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,2,2,3,2,0,2,8,8,10,2,7,0,8,2,13,8,3,18,14,10,6,2,23,20,17,14,11,8,5,2,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_99 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,1,0,3,4,3,1,3,0,9,0,3,8,1,9,3,14,9,4,19,15,11,7,3,24,21,18,15,12,9,6,3,0,31,29,27,25,23,21,19,17,15,13,11,9,7,5,3,1,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define ORDER_PP_LIT_REMAINDER_100 ORDER_PP_ERROR_DIVISION_BY_ZERO ORDER_PP_BLOCK(!),0,0,1,0,0,4,2,4,1,0,1,4,9,2,10,4,15,10,5,0,16,12,8,4,0,22,19,16,13,10,7,4,1,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0

#define ORDER_PP_LIT_LESS_0 0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_1 0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_2 0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_3 0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_4 0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_5 0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_6 0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_7 0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_8 0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_9 0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_10 0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_11 0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_12 0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_13 0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_14 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_15 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_16 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_17 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_18 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_19 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_20 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_21 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_22 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_23 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_24 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_25 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_26 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_27 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_28 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_29 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_30 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_31 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_32 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_33 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_34 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_35 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_36 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_37 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_38 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_39 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_40 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_41 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_42 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_43 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_44 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_45 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_46 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_47 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_48 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_49 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_50 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_51 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_52 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_53 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_54 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_55 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_56 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_57 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_58 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_59 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_60 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_61 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_62 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_63 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_64 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_65 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_66 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_67 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_68 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_69 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_70 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_71 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_72 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_73 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_74 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_75 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_76 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_77 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_78 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_79 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_80 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_81 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_82 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_83 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_84 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_85 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_86 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_87 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_88 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_89 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,,
#define ORDER_PP_LIT_LESS_90 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,,
#define ORDER_PP_LIT_LESS_91 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,,
#define ORDER_PP_LIT_LESS_92 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,,
#define ORDER_PP_LIT_LESS_93 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,,
#define ORDER_PP_LIT_LESS_94 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,,
#define ORDER_PP_LIT_LESS_95 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,,
#define ORDER_PP_LIT_LESS_96 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,,
#define ORDER_PP_LIT_LESS_97 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,,
#define ORDER_PP_LIT_LESS_98 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,,
#define ORDER_PP_LIT_LESS_99 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
#define ORDER_PP_LIT_LESS_100 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
