#ifndef ORDER_EVAL_REF_H_VAJK20040620
#define ORDER_EVAL_REF_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_CM_8EVAL_REF_(K,x,...) ORDER_PP_CM_##K(,x
#define ORDER_PP_CM_8EVAL_REF(P,e,s,K,...) ORDER_PP_CM_8EVAL_REF_(P##K,ORDER_PP_EXPAND(ORDER_PP_ENV_REF,(,ORDER_PP_ENV_REF_##s e##P))),P##__VA_ARGS__)

#define ORDER_PP_ENV_REF(P,_,x,...) P##x

/*
(let ((gen (function (lambda (i)
                       (insert "#define ORDER_PP_DEF_" i " 8EVAL_REF," i "\n")
                       (insert "#define ORDER_PP_SYM_" i "_" i "(P,v) ,P##v,\n")
                       (insert "#define ORDER_PP_ENV_REF_" i "(P,s,v) ORDER_PP_SYM_" i "_##s(,v##P) ORDER_PP_ENV_FER_" i "\n")
                       (insert "#define ORDER_PP_ENV_FER_" i "(P,s,v) ORDER_PP_SYM_" i "_##s(,v##P) ORDER_PP_ENV_REF_" i "\n")))))
  (loop for i from ?A to ?Z do
    (funcall gen i)))
 */

#define ORDER_PP_DEF_A 8EVAL_REF,A
#define ORDER_PP_SYM_A_A(P,v) ,P##v,
#define ORDER_PP_ENV_REF_A(P,s,v) ORDER_PP_SYM_A_##s(,v##P) ORDER_PP_ENV_FER_A
#define ORDER_PP_ENV_FER_A(P,s,v) ORDER_PP_SYM_A_##s(,v##P) ORDER_PP_ENV_REF_A
#define ORDER_PP_DEF_B 8EVAL_REF,B
#define ORDER_PP_SYM_B_B(P,v) ,P##v,
#define ORDER_PP_ENV_REF_B(P,s,v) ORDER_PP_SYM_B_##s(,v##P) ORDER_PP_ENV_FER_B
#define ORDER_PP_ENV_FER_B(P,s,v) ORDER_PP_SYM_B_##s(,v##P) ORDER_PP_ENV_REF_B
#define ORDER_PP_DEF_C 8EVAL_REF,C
#define ORDER_PP_SYM_C_C(P,v) ,P##v,
#define ORDER_PP_ENV_REF_C(P,s,v) ORDER_PP_SYM_C_##s(,v##P) ORDER_PP_ENV_FER_C
#define ORDER_PP_ENV_FER_C(P,s,v) ORDER_PP_SYM_C_##s(,v##P) ORDER_PP_ENV_REF_C
#define ORDER_PP_DEF_D 8EVAL_REF,D
#define ORDER_PP_SYM_D_D(P,v) ,P##v,
#define ORDER_PP_ENV_REF_D(P,s,v) ORDER_PP_SYM_D_##s(,v##P) ORDER_PP_ENV_FER_D
#define ORDER_PP_ENV_FER_D(P,s,v) ORDER_PP_SYM_D_##s(,v##P) ORDER_PP_ENV_REF_D
#define ORDER_PP_DEF_E 8EVAL_REF,E
#define ORDER_PP_SYM_E_E(P,v) ,P##v,
#define ORDER_PP_ENV_REF_E(P,s,v) ORDER_PP_SYM_E_##s(,v##P) ORDER_PP_ENV_FER_E
#define ORDER_PP_ENV_FER_E(P,s,v) ORDER_PP_SYM_E_##s(,v##P) ORDER_PP_ENV_REF_E
#define ORDER_PP_DEF_F 8EVAL_REF,F
#define ORDER_PP_SYM_F_F(P,v) ,P##v,
#define ORDER_PP_ENV_REF_F(P,s,v) ORDER_PP_SYM_F_##s(,v##P) ORDER_PP_ENV_FER_F
#define ORDER_PP_ENV_FER_F(P,s,v) ORDER_PP_SYM_F_##s(,v##P) ORDER_PP_ENV_REF_F
#define ORDER_PP_DEF_G 8EVAL_REF,G
#define ORDER_PP_SYM_G_G(P,v) ,P##v,
#define ORDER_PP_ENV_REF_G(P,s,v) ORDER_PP_SYM_G_##s(,v##P) ORDER_PP_ENV_FER_G
#define ORDER_PP_ENV_FER_G(P,s,v) ORDER_PP_SYM_G_##s(,v##P) ORDER_PP_ENV_REF_G
#define ORDER_PP_DEF_H 8EVAL_REF,H
#define ORDER_PP_SYM_H_H(P,v) ,P##v,
#define ORDER_PP_ENV_REF_H(P,s,v) ORDER_PP_SYM_H_##s(,v##P) ORDER_PP_ENV_FER_H
#define ORDER_PP_ENV_FER_H(P,s,v) ORDER_PP_SYM_H_##s(,v##P) ORDER_PP_ENV_REF_H
#define ORDER_PP_DEF_I 8EVAL_REF,I
#define ORDER_PP_SYM_I_I(P,v) ,P##v,
#define ORDER_PP_ENV_REF_I(P,s,v) ORDER_PP_SYM_I_##s(,v##P) ORDER_PP_ENV_FER_I
#define ORDER_PP_ENV_FER_I(P,s,v) ORDER_PP_SYM_I_##s(,v##P) ORDER_PP_ENV_REF_I
#define ORDER_PP_DEF_J 8EVAL_REF,J
#define ORDER_PP_SYM_J_J(P,v) ,P##v,
#define ORDER_PP_ENV_REF_J(P,s,v) ORDER_PP_SYM_J_##s(,v##P) ORDER_PP_ENV_FER_J
#define ORDER_PP_ENV_FER_J(P,s,v) ORDER_PP_SYM_J_##s(,v##P) ORDER_PP_ENV_REF_J
#define ORDER_PP_DEF_K 8EVAL_REF,K
#define ORDER_PP_SYM_K_K(P,v) ,P##v,
#define ORDER_PP_ENV_REF_K(P,s,v) ORDER_PP_SYM_K_##s(,v##P) ORDER_PP_ENV_FER_K
#define ORDER_PP_ENV_FER_K(P,s,v) ORDER_PP_SYM_K_##s(,v##P) ORDER_PP_ENV_REF_K
#define ORDER_PP_DEF_L 8EVAL_REF,L
#define ORDER_PP_SYM_L_L(P,v) ,P##v,
#define ORDER_PP_ENV_REF_L(P,s,v) ORDER_PP_SYM_L_##s(,v##P) ORDER_PP_ENV_FER_L
#define ORDER_PP_ENV_FER_L(P,s,v) ORDER_PP_SYM_L_##s(,v##P) ORDER_PP_ENV_REF_L
#define ORDER_PP_DEF_M 8EVAL_REF,M
#define ORDER_PP_SYM_M_M(P,v) ,P##v,
#define ORDER_PP_ENV_REF_M(P,s,v) ORDER_PP_SYM_M_##s(,v##P) ORDER_PP_ENV_FER_M
#define ORDER_PP_ENV_FER_M(P,s,v) ORDER_PP_SYM_M_##s(,v##P) ORDER_PP_ENV_REF_M
#define ORDER_PP_DEF_N 8EVAL_REF,N
#define ORDER_PP_SYM_N_N(P,v) ,P##v,
#define ORDER_PP_ENV_REF_N(P,s,v) ORDER_PP_SYM_N_##s(,v##P) ORDER_PP_ENV_FER_N
#define ORDER_PP_ENV_FER_N(P,s,v) ORDER_PP_SYM_N_##s(,v##P) ORDER_PP_ENV_REF_N
#define ORDER_PP_DEF_O 8EVAL_REF,O
#define ORDER_PP_SYM_O_O(P,v) ,P##v,
#define ORDER_PP_ENV_REF_O(P,s,v) ORDER_PP_SYM_O_##s(,v##P) ORDER_PP_ENV_FER_O
#define ORDER_PP_ENV_FER_O(P,s,v) ORDER_PP_SYM_O_##s(,v##P) ORDER_PP_ENV_REF_O
#define ORDER_PP_DEF_P 8EVAL_REF,P
#define ORDER_PP_SYM_P_P(P,v) ,P##v,
#define ORDER_PP_ENV_REF_P(P,s,v) ORDER_PP_SYM_P_##s(,v##P) ORDER_PP_ENV_FER_P
#define ORDER_PP_ENV_FER_P(P,s,v) ORDER_PP_SYM_P_##s(,v##P) ORDER_PP_ENV_REF_P
#define ORDER_PP_DEF_Q 8EVAL_REF,Q
#define ORDER_PP_SYM_Q_Q(P,v) ,P##v,
#define ORDER_PP_ENV_REF_Q(P,s,v) ORDER_PP_SYM_Q_##s(,v##P) ORDER_PP_ENV_FER_Q
#define ORDER_PP_ENV_FER_Q(P,s,v) ORDER_PP_SYM_Q_##s(,v##P) ORDER_PP_ENV_REF_Q
#define ORDER_PP_DEF_R 8EVAL_REF,R
#define ORDER_PP_SYM_R_R(P,v) ,P##v,
#define ORDER_PP_ENV_REF_R(P,s,v) ORDER_PP_SYM_R_##s(,v##P) ORDER_PP_ENV_FER_R
#define ORDER_PP_ENV_FER_R(P,s,v) ORDER_PP_SYM_R_##s(,v##P) ORDER_PP_ENV_REF_R
#define ORDER_PP_DEF_S 8EVAL_REF,S
#define ORDER_PP_SYM_S_S(P,v) ,P##v,
#define ORDER_PP_ENV_REF_S(P,s,v) ORDER_PP_SYM_S_##s(,v##P) ORDER_PP_ENV_FER_S
#define ORDER_PP_ENV_FER_S(P,s,v) ORDER_PP_SYM_S_##s(,v##P) ORDER_PP_ENV_REF_S
#define ORDER_PP_DEF_T 8EVAL_REF,T
#define ORDER_PP_SYM_T_T(P,v) ,P##v,
#define ORDER_PP_ENV_REF_T(P,s,v) ORDER_PP_SYM_T_##s(,v##P) ORDER_PP_ENV_FER_T
#define ORDER_PP_ENV_FER_T(P,s,v) ORDER_PP_SYM_T_##s(,v##P) ORDER_PP_ENV_REF_T
#define ORDER_PP_DEF_U 8EVAL_REF,U
#define ORDER_PP_SYM_U_U(P,v) ,P##v,
#define ORDER_PP_ENV_REF_U(P,s,v) ORDER_PP_SYM_U_##s(,v##P) ORDER_PP_ENV_FER_U
#define ORDER_PP_ENV_FER_U(P,s,v) ORDER_PP_SYM_U_##s(,v##P) ORDER_PP_ENV_REF_U
#define ORDER_PP_DEF_V 8EVAL_REF,V
#define ORDER_PP_SYM_V_V(P,v) ,P##v,
#define ORDER_PP_ENV_REF_V(P,s,v) ORDER_PP_SYM_V_##s(,v##P) ORDER_PP_ENV_FER_V
#define ORDER_PP_ENV_FER_V(P,s,v) ORDER_PP_SYM_V_##s(,v##P) ORDER_PP_ENV_REF_V
#define ORDER_PP_DEF_W 8EVAL_REF,W
#define ORDER_PP_SYM_W_W(P,v) ,P##v,
#define ORDER_PP_ENV_REF_W(P,s,v) ORDER_PP_SYM_W_##s(,v##P) ORDER_PP_ENV_FER_W
#define ORDER_PP_ENV_FER_W(P,s,v) ORDER_PP_SYM_W_##s(,v##P) ORDER_PP_ENV_REF_W
#define ORDER_PP_DEF_X 8EVAL_REF,X
#define ORDER_PP_SYM_X_X(P,v) ,P##v,
#define ORDER_PP_ENV_REF_X(P,s,v) ORDER_PP_SYM_X_##s(,v##P) ORDER_PP_ENV_FER_X
#define ORDER_PP_ENV_FER_X(P,s,v) ORDER_PP_SYM_X_##s(,v##P) ORDER_PP_ENV_REF_X
#define ORDER_PP_DEF_Y 8EVAL_REF,Y
#define ORDER_PP_SYM_Y_Y(P,v) ,P##v,
#define ORDER_PP_ENV_REF_Y(P,s,v) ORDER_PP_SYM_Y_##s(,v##P) ORDER_PP_ENV_FER_Y
#define ORDER_PP_ENV_FER_Y(P,s,v) ORDER_PP_SYM_Y_##s(,v##P) ORDER_PP_ENV_REF_Y
#define ORDER_PP_DEF_Z 8EVAL_REF,Z
#define ORDER_PP_SYM_Z_Z(P,v) ,P##v,
#define ORDER_PP_ENV_REF_Z(P,s,v) ORDER_PP_SYM_Z_##s(,v##P) ORDER_PP_ENV_FER_Z
#define ORDER_PP_ENV_FER_Z(P,s,v) ORDER_PP_SYM_Z_##s(,v##P) ORDER_PP_ENV_REF_Z

#endif
