#ifndef ORDER_PRELUDE_TUPLE_TABLES_H_VAJK20040620
#define ORDER_PRELUDE_TUPLE_TABLES_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

/*
 (let ((n 100))
   (defun variable (i &optional rest)
      (let ((chars (if rest
                       "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyz"
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")))
        (if (and rest (= 0 i))
            ""
            (concat (char-to-string (elt chars (% i (length chars))))
                    (variable (/ i (length chars)) t)))))
   (insert "\n")
   (loop for i from 0 to n do
      (insert "#define ORDER_PP_TUPLE_AT_MAX_100_" (number-to-string i) "(...) ORDER_PP_TUPLE_AT_" (number-to-string i) "(,__VA_ARGS__,)\n"))
   (insert "\n")
   (loop for i from 0 to n do
      (insert "#define ORDER_PP_TUPLE_AT_" (number-to-string i) "(_")
      (loop for j from 0 to i do
         (insert "," (variable j)))
      (insert ",...) _##" (variable i) "\n")))
*/

#define ORDER_PP_TUPLE_AT_MAX_100_0(...) ORDER_PP_TUPLE_AT_0(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_1(...) ORDER_PP_TUPLE_AT_1(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_2(...) ORDER_PP_TUPLE_AT_2(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_3(...) ORDER_PP_TUPLE_AT_3(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_4(...) ORDER_PP_TUPLE_AT_4(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_5(...) ORDER_PP_TUPLE_AT_5(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_6(...) ORDER_PP_TUPLE_AT_6(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_7(...) ORDER_PP_TUPLE_AT_7(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_8(...) ORDER_PP_TUPLE_AT_8(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_9(...) ORDER_PP_TUPLE_AT_9(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_10(...) ORDER_PP_TUPLE_AT_10(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_11(...) ORDER_PP_TUPLE_AT_11(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_12(...) ORDER_PP_TUPLE_AT_12(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_13(...) ORDER_PP_TUPLE_AT_13(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_14(...) ORDER_PP_TUPLE_AT_14(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_15(...) ORDER_PP_TUPLE_AT_15(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_16(...) ORDER_PP_TUPLE_AT_16(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_17(...) ORDER_PP_TUPLE_AT_17(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_18(...) ORDER_PP_TUPLE_AT_18(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_19(...) ORDER_PP_TUPLE_AT_19(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_20(...) ORDER_PP_TUPLE_AT_20(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_21(...) ORDER_PP_TUPLE_AT_21(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_22(...) ORDER_PP_TUPLE_AT_22(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_23(...) ORDER_PP_TUPLE_AT_23(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_24(...) ORDER_PP_TUPLE_AT_24(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_25(...) ORDER_PP_TUPLE_AT_25(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_26(...) ORDER_PP_TUPLE_AT_26(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_27(...) ORDER_PP_TUPLE_AT_27(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_28(...) ORDER_PP_TUPLE_AT_28(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_29(...) ORDER_PP_TUPLE_AT_29(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_30(...) ORDER_PP_TUPLE_AT_30(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_31(...) ORDER_PP_TUPLE_AT_31(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_32(...) ORDER_PP_TUPLE_AT_32(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_33(...) ORDER_PP_TUPLE_AT_33(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_34(...) ORDER_PP_TUPLE_AT_34(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_35(...) ORDER_PP_TUPLE_AT_35(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_36(...) ORDER_PP_TUPLE_AT_36(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_37(...) ORDER_PP_TUPLE_AT_37(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_38(...) ORDER_PP_TUPLE_AT_38(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_39(...) ORDER_PP_TUPLE_AT_39(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_40(...) ORDER_PP_TUPLE_AT_40(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_41(...) ORDER_PP_TUPLE_AT_41(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_42(...) ORDER_PP_TUPLE_AT_42(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_43(...) ORDER_PP_TUPLE_AT_43(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_44(...) ORDER_PP_TUPLE_AT_44(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_45(...) ORDER_PP_TUPLE_AT_45(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_46(...) ORDER_PP_TUPLE_AT_46(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_47(...) ORDER_PP_TUPLE_AT_47(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_48(...) ORDER_PP_TUPLE_AT_48(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_49(...) ORDER_PP_TUPLE_AT_49(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_50(...) ORDER_PP_TUPLE_AT_50(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_51(...) ORDER_PP_TUPLE_AT_51(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_52(...) ORDER_PP_TUPLE_AT_52(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_53(...) ORDER_PP_TUPLE_AT_53(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_54(...) ORDER_PP_TUPLE_AT_54(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_55(...) ORDER_PP_TUPLE_AT_55(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_56(...) ORDER_PP_TUPLE_AT_56(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_57(...) ORDER_PP_TUPLE_AT_57(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_58(...) ORDER_PP_TUPLE_AT_58(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_59(...) ORDER_PP_TUPLE_AT_59(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_60(...) ORDER_PP_TUPLE_AT_60(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_61(...) ORDER_PP_TUPLE_AT_61(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_62(...) ORDER_PP_TUPLE_AT_62(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_63(...) ORDER_PP_TUPLE_AT_63(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_64(...) ORDER_PP_TUPLE_AT_64(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_65(...) ORDER_PP_TUPLE_AT_65(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_66(...) ORDER_PP_TUPLE_AT_66(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_67(...) ORDER_PP_TUPLE_AT_67(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_68(...) ORDER_PP_TUPLE_AT_68(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_69(...) ORDER_PP_TUPLE_AT_69(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_70(...) ORDER_PP_TUPLE_AT_70(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_71(...) ORDER_PP_TUPLE_AT_71(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_72(...) ORDER_PP_TUPLE_AT_72(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_73(...) ORDER_PP_TUPLE_AT_73(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_74(...) ORDER_PP_TUPLE_AT_74(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_75(...) ORDER_PP_TUPLE_AT_75(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_76(...) ORDER_PP_TUPLE_AT_76(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_77(...) ORDER_PP_TUPLE_AT_77(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_78(...) ORDER_PP_TUPLE_AT_78(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_79(...) ORDER_PP_TUPLE_AT_79(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_80(...) ORDER_PP_TUPLE_AT_80(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_81(...) ORDER_PP_TUPLE_AT_81(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_82(...) ORDER_PP_TUPLE_AT_82(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_83(...) ORDER_PP_TUPLE_AT_83(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_84(...) ORDER_PP_TUPLE_AT_84(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_85(...) ORDER_PP_TUPLE_AT_85(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_86(...) ORDER_PP_TUPLE_AT_86(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_87(...) ORDER_PP_TUPLE_AT_87(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_88(...) ORDER_PP_TUPLE_AT_88(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_89(...) ORDER_PP_TUPLE_AT_89(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_90(...) ORDER_PP_TUPLE_AT_90(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_91(...) ORDER_PP_TUPLE_AT_91(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_92(...) ORDER_PP_TUPLE_AT_92(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_93(...) ORDER_PP_TUPLE_AT_93(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_94(...) ORDER_PP_TUPLE_AT_94(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_95(...) ORDER_PP_TUPLE_AT_95(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_96(...) ORDER_PP_TUPLE_AT_96(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_97(...) ORDER_PP_TUPLE_AT_97(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_98(...) ORDER_PP_TUPLE_AT_98(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_99(...) ORDER_PP_TUPLE_AT_99(,__VA_ARGS__,)
#define ORDER_PP_TUPLE_AT_MAX_100_100(...) ORDER_PP_TUPLE_AT_100(,__VA_ARGS__,)

#define ORDER_PP_TUPLE_AT_0(_,A,...) _##A
#define ORDER_PP_TUPLE_AT_1(_,A,B,...) _##B
#define ORDER_PP_TUPLE_AT_2(_,A,B,C,...) _##C
#define ORDER_PP_TUPLE_AT_3(_,A,B,C,D,...) _##D
#define ORDER_PP_TUPLE_AT_4(_,A,B,C,D,E,...) _##E
#define ORDER_PP_TUPLE_AT_5(_,A,B,C,D,E,F,...) _##F
#define ORDER_PP_TUPLE_AT_6(_,A,B,C,D,E,F,G,...) _##G
#define ORDER_PP_TUPLE_AT_7(_,A,B,C,D,E,F,G,H,...) _##H
#define ORDER_PP_TUPLE_AT_8(_,A,B,C,D,E,F,G,H,I,...) _##I
#define ORDER_PP_TUPLE_AT_9(_,A,B,C,D,E,F,G,H,I,J,...) _##J
#define ORDER_PP_TUPLE_AT_10(_,A,B,C,D,E,F,G,H,I,J,K,...) _##K
#define ORDER_PP_TUPLE_AT_11(_,A,B,C,D,E,F,G,H,I,J,K,L,...) _##L
#define ORDER_PP_TUPLE_AT_12(_,A,B,C,D,E,F,G,H,I,J,K,L,M,...) _##M
#define ORDER_PP_TUPLE_AT_13(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,...) _##N
#define ORDER_PP_TUPLE_AT_14(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,...) _##O
#define ORDER_PP_TUPLE_AT_15(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,...) _##P
#define ORDER_PP_TUPLE_AT_16(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,...) _##Q
#define ORDER_PP_TUPLE_AT_17(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,...) _##R
#define ORDER_PP_TUPLE_AT_18(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,...) _##S
#define ORDER_PP_TUPLE_AT_19(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,...) _##T
#define ORDER_PP_TUPLE_AT_20(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,...) _##U
#define ORDER_PP_TUPLE_AT_21(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,...) _##V
#define ORDER_PP_TUPLE_AT_22(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,...) _##W
#define ORDER_PP_TUPLE_AT_23(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,...) _##X
#define ORDER_PP_TUPLE_AT_24(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,...) _##Y
#define ORDER_PP_TUPLE_AT_25(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,...) _##Z
#define ORDER_PP_TUPLE_AT_26(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,...) _##a
#define ORDER_PP_TUPLE_AT_27(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,...) _##b
#define ORDER_PP_TUPLE_AT_28(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,...) _##c
#define ORDER_PP_TUPLE_AT_29(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,...) _##d
#define ORDER_PP_TUPLE_AT_30(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,...) _##e
#define ORDER_PP_TUPLE_AT_31(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,...) _##f
#define ORDER_PP_TUPLE_AT_32(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,...) _##g
#define ORDER_PP_TUPLE_AT_33(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,...) _##h
#define ORDER_PP_TUPLE_AT_34(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,...) _##i
#define ORDER_PP_TUPLE_AT_35(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,...) _##j
#define ORDER_PP_TUPLE_AT_36(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,...) _##k
#define ORDER_PP_TUPLE_AT_37(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,...) _##l
#define ORDER_PP_TUPLE_AT_38(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,...) _##m
#define ORDER_PP_TUPLE_AT_39(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,...) _##n
#define ORDER_PP_TUPLE_AT_40(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,...) _##o
#define ORDER_PP_TUPLE_AT_41(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,...) _##p
#define ORDER_PP_TUPLE_AT_42(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,...) _##q
#define ORDER_PP_TUPLE_AT_43(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,...) _##r
#define ORDER_PP_TUPLE_AT_44(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,...) _##s
#define ORDER_PP_TUPLE_AT_45(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,...) _##t
#define ORDER_PP_TUPLE_AT_46(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,...) _##u
#define ORDER_PP_TUPLE_AT_47(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,...) _##v
#define ORDER_PP_TUPLE_AT_48(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,...) _##w
#define ORDER_PP_TUPLE_AT_49(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,...) _##x
#define ORDER_PP_TUPLE_AT_50(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,...) _##y
#define ORDER_PP_TUPLE_AT_51(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,...) _##z
#define ORDER_PP_TUPLE_AT_52(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,...) _##A1
#define ORDER_PP_TUPLE_AT_53(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,...) _##B1
#define ORDER_PP_TUPLE_AT_54(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,...) _##C1
#define ORDER_PP_TUPLE_AT_55(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,...) _##D1
#define ORDER_PP_TUPLE_AT_56(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,...) _##E1
#define ORDER_PP_TUPLE_AT_57(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,...) _##F1
#define ORDER_PP_TUPLE_AT_58(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,...) _##G1
#define ORDER_PP_TUPLE_AT_59(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,...) _##H1
#define ORDER_PP_TUPLE_AT_60(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,...) _##I1
#define ORDER_PP_TUPLE_AT_61(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,...) _##J1
#define ORDER_PP_TUPLE_AT_62(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,...) _##K1
#define ORDER_PP_TUPLE_AT_63(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,...) _##L1
#define ORDER_PP_TUPLE_AT_64(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,...) _##M1
#define ORDER_PP_TUPLE_AT_65(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,...) _##N1
#define ORDER_PP_TUPLE_AT_66(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,...) _##O1
#define ORDER_PP_TUPLE_AT_67(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,...) _##P1
#define ORDER_PP_TUPLE_AT_68(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,...) _##Q1
#define ORDER_PP_TUPLE_AT_69(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,...) _##R1
#define ORDER_PP_TUPLE_AT_70(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,...) _##S1
#define ORDER_PP_TUPLE_AT_71(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,...) _##T1
#define ORDER_PP_TUPLE_AT_72(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,...) _##U1
#define ORDER_PP_TUPLE_AT_73(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,...) _##V1
#define ORDER_PP_TUPLE_AT_74(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,...) _##W1
#define ORDER_PP_TUPLE_AT_75(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,...) _##X1
#define ORDER_PP_TUPLE_AT_76(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,...) _##Y1
#define ORDER_PP_TUPLE_AT_77(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,...) _##Z1
#define ORDER_PP_TUPLE_AT_78(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,...) _##a1
#define ORDER_PP_TUPLE_AT_79(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,...) _##b1
#define ORDER_PP_TUPLE_AT_80(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,...) _##c1
#define ORDER_PP_TUPLE_AT_81(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,...) _##d1
#define ORDER_PP_TUPLE_AT_82(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,...) _##e1
#define ORDER_PP_TUPLE_AT_83(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,...) _##f1
#define ORDER_PP_TUPLE_AT_84(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,...) _##g1
#define ORDER_PP_TUPLE_AT_85(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,...) _##h1
#define ORDER_PP_TUPLE_AT_86(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,...) _##i1
#define ORDER_PP_TUPLE_AT_87(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,...) _##j1
#define ORDER_PP_TUPLE_AT_88(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,...) _##k1
#define ORDER_PP_TUPLE_AT_89(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,...) _##l1
#define ORDER_PP_TUPLE_AT_90(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,...) _##m1
#define ORDER_PP_TUPLE_AT_91(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,...) _##n1
#define ORDER_PP_TUPLE_AT_92(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,...) _##o1
#define ORDER_PP_TUPLE_AT_93(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,...) _##p1
#define ORDER_PP_TUPLE_AT_94(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,...) _##q1
#define ORDER_PP_TUPLE_AT_95(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,...) _##r1
#define ORDER_PP_TUPLE_AT_96(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,...) _##s1
#define ORDER_PP_TUPLE_AT_97(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,...) _##t1
#define ORDER_PP_TUPLE_AT_98(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,...) _##u1
#define ORDER_PP_TUPLE_AT_99(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,v1,...) _##v1
#define ORDER_PP_TUPLE_AT_100(_,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A1,B1,C1,D1,E1,F1,G1,H1,I1,J1,K1,L1,M1,N1,O1,P1,Q1,R1,S1,T1,U1,V1,W1,X1,Y1,Z1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,v1,w1,...) _##w1

#endif
