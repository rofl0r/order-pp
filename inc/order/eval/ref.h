#ifndef ORDER_EVAL_REF_H_VAJK20040620
#define ORDER_EVAL_REF_H_VAJK20040620

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_PP_ENV_BIND__(...)
#define ORDER_PP_ENV_REF(P,_,x,...) P##x

#define ORDER_CM_8EVAL_REF_(x) (,ORDER_PP_ENV_REF(,x)
#define ORDER_CM_8EVAL_REF(P,e,s,K,...) ORDER_CM_##K ORDER_CM_8EVAL_REF_(ORDER_PP_ENV_REF_##s P##e),P##__VA_ARGS__)

/*
(loop for i from ?A to ?Z do
  (insert "#define ORDER_DEF_" i " 8EVAL_REF," i "\n")
  (insert "#define ORDER_SYM_" i "_" i "(P,v) ,P##v,\n")
  (insert "#define ORDER_PP_ENV_BIND_" i "\n")
  (insert "#define ORDER_PP_ENV_REF_" i "(P,s,v) ORDER_SYM_" i "_##s(,P##v) ORDER_PP_ENV_FER_" i "\n")
  (insert "#define ORDER_PP_ENV_FER_" i "(P,s,v) ORDER_SYM_" i "_##s(,P##v) ORDER_PP_ENV_REF_" i "\n"))
 */

#define ORDER_DEF_A 8EVAL_REF,A
#define ORDER_SYM_A_A(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_A
#define ORDER_PP_ENV_REF_A(P,s,v) ORDER_SYM_A_##s(,P##v) ORDER_PP_ENV_FER_A
#define ORDER_PP_ENV_FER_A(P,s,v) ORDER_SYM_A_##s(,P##v) ORDER_PP_ENV_REF_A
#define ORDER_DEF_B 8EVAL_REF,B
#define ORDER_SYM_B_B(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_B
#define ORDER_PP_ENV_REF_B(P,s,v) ORDER_SYM_B_##s(,P##v) ORDER_PP_ENV_FER_B
#define ORDER_PP_ENV_FER_B(P,s,v) ORDER_SYM_B_##s(,P##v) ORDER_PP_ENV_REF_B
#define ORDER_DEF_C 8EVAL_REF,C
#define ORDER_SYM_C_C(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_C
#define ORDER_PP_ENV_REF_C(P,s,v) ORDER_SYM_C_##s(,P##v) ORDER_PP_ENV_FER_C
#define ORDER_PP_ENV_FER_C(P,s,v) ORDER_SYM_C_##s(,P##v) ORDER_PP_ENV_REF_C
#define ORDER_DEF_D 8EVAL_REF,D
#define ORDER_SYM_D_D(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_D
#define ORDER_PP_ENV_REF_D(P,s,v) ORDER_SYM_D_##s(,P##v) ORDER_PP_ENV_FER_D
#define ORDER_PP_ENV_FER_D(P,s,v) ORDER_SYM_D_##s(,P##v) ORDER_PP_ENV_REF_D
#define ORDER_DEF_E 8EVAL_REF,E
#define ORDER_SYM_E_E(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_E
#define ORDER_PP_ENV_REF_E(P,s,v) ORDER_SYM_E_##s(,P##v) ORDER_PP_ENV_FER_E
#define ORDER_PP_ENV_FER_E(P,s,v) ORDER_SYM_E_##s(,P##v) ORDER_PP_ENV_REF_E
#define ORDER_DEF_F 8EVAL_REF,F
#define ORDER_SYM_F_F(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_F
#define ORDER_PP_ENV_REF_F(P,s,v) ORDER_SYM_F_##s(,P##v) ORDER_PP_ENV_FER_F
#define ORDER_PP_ENV_FER_F(P,s,v) ORDER_SYM_F_##s(,P##v) ORDER_PP_ENV_REF_F
#define ORDER_DEF_G 8EVAL_REF,G
#define ORDER_SYM_G_G(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_G
#define ORDER_PP_ENV_REF_G(P,s,v) ORDER_SYM_G_##s(,P##v) ORDER_PP_ENV_FER_G
#define ORDER_PP_ENV_FER_G(P,s,v) ORDER_SYM_G_##s(,P##v) ORDER_PP_ENV_REF_G
#define ORDER_DEF_H 8EVAL_REF,H
#define ORDER_SYM_H_H(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_H
#define ORDER_PP_ENV_REF_H(P,s,v) ORDER_SYM_H_##s(,P##v) ORDER_PP_ENV_FER_H
#define ORDER_PP_ENV_FER_H(P,s,v) ORDER_SYM_H_##s(,P##v) ORDER_PP_ENV_REF_H
#define ORDER_DEF_I 8EVAL_REF,I
#define ORDER_SYM_I_I(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_I
#define ORDER_PP_ENV_REF_I(P,s,v) ORDER_SYM_I_##s(,P##v) ORDER_PP_ENV_FER_I
#define ORDER_PP_ENV_FER_I(P,s,v) ORDER_SYM_I_##s(,P##v) ORDER_PP_ENV_REF_I
#define ORDER_DEF_J 8EVAL_REF,J
#define ORDER_SYM_J_J(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_J
#define ORDER_PP_ENV_REF_J(P,s,v) ORDER_SYM_J_##s(,P##v) ORDER_PP_ENV_FER_J
#define ORDER_PP_ENV_FER_J(P,s,v) ORDER_SYM_J_##s(,P##v) ORDER_PP_ENV_REF_J
#define ORDER_DEF_K 8EVAL_REF,K
#define ORDER_SYM_K_K(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_K
#define ORDER_PP_ENV_REF_K(P,s,v) ORDER_SYM_K_##s(,P##v) ORDER_PP_ENV_FER_K
#define ORDER_PP_ENV_FER_K(P,s,v) ORDER_SYM_K_##s(,P##v) ORDER_PP_ENV_REF_K
#define ORDER_DEF_L 8EVAL_REF,L
#define ORDER_SYM_L_L(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_L
#define ORDER_PP_ENV_REF_L(P,s,v) ORDER_SYM_L_##s(,P##v) ORDER_PP_ENV_FER_L
#define ORDER_PP_ENV_FER_L(P,s,v) ORDER_SYM_L_##s(,P##v) ORDER_PP_ENV_REF_L
#define ORDER_DEF_M 8EVAL_REF,M
#define ORDER_SYM_M_M(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_M
#define ORDER_PP_ENV_REF_M(P,s,v) ORDER_SYM_M_##s(,P##v) ORDER_PP_ENV_FER_M
#define ORDER_PP_ENV_FER_M(P,s,v) ORDER_SYM_M_##s(,P##v) ORDER_PP_ENV_REF_M
#define ORDER_DEF_N 8EVAL_REF,N
#define ORDER_SYM_N_N(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_N
#define ORDER_PP_ENV_REF_N(P,s,v) ORDER_SYM_N_##s(,P##v) ORDER_PP_ENV_FER_N
#define ORDER_PP_ENV_FER_N(P,s,v) ORDER_SYM_N_##s(,P##v) ORDER_PP_ENV_REF_N
#define ORDER_DEF_O 8EVAL_REF,O
#define ORDER_SYM_O_O(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_O
#define ORDER_PP_ENV_REF_O(P,s,v) ORDER_SYM_O_##s(,P##v) ORDER_PP_ENV_FER_O
#define ORDER_PP_ENV_FER_O(P,s,v) ORDER_SYM_O_##s(,P##v) ORDER_PP_ENV_REF_O
#define ORDER_DEF_P 8EVAL_REF,P
#define ORDER_SYM_P_P(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_P
#define ORDER_PP_ENV_REF_P(P,s,v) ORDER_SYM_P_##s(,P##v) ORDER_PP_ENV_FER_P
#define ORDER_PP_ENV_FER_P(P,s,v) ORDER_SYM_P_##s(,P##v) ORDER_PP_ENV_REF_P
#define ORDER_DEF_Q 8EVAL_REF,Q
#define ORDER_SYM_Q_Q(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_Q
#define ORDER_PP_ENV_REF_Q(P,s,v) ORDER_SYM_Q_##s(,P##v) ORDER_PP_ENV_FER_Q
#define ORDER_PP_ENV_FER_Q(P,s,v) ORDER_SYM_Q_##s(,P##v) ORDER_PP_ENV_REF_Q
#define ORDER_DEF_R 8EVAL_REF,R
#define ORDER_SYM_R_R(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_R
#define ORDER_PP_ENV_REF_R(P,s,v) ORDER_SYM_R_##s(,P##v) ORDER_PP_ENV_FER_R
#define ORDER_PP_ENV_FER_R(P,s,v) ORDER_SYM_R_##s(,P##v) ORDER_PP_ENV_REF_R
#define ORDER_DEF_S 8EVAL_REF,S
#define ORDER_SYM_S_S(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_S
#define ORDER_PP_ENV_REF_S(P,s,v) ORDER_SYM_S_##s(,P##v) ORDER_PP_ENV_FER_S
#define ORDER_PP_ENV_FER_S(P,s,v) ORDER_SYM_S_##s(,P##v) ORDER_PP_ENV_REF_S
#define ORDER_DEF_T 8EVAL_REF,T
#define ORDER_SYM_T_T(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_T
#define ORDER_PP_ENV_REF_T(P,s,v) ORDER_SYM_T_##s(,P##v) ORDER_PP_ENV_FER_T
#define ORDER_PP_ENV_FER_T(P,s,v) ORDER_SYM_T_##s(,P##v) ORDER_PP_ENV_REF_T
#define ORDER_DEF_U 8EVAL_REF,U
#define ORDER_SYM_U_U(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_U
#define ORDER_PP_ENV_REF_U(P,s,v) ORDER_SYM_U_##s(,P##v) ORDER_PP_ENV_FER_U
#define ORDER_PP_ENV_FER_U(P,s,v) ORDER_SYM_U_##s(,P##v) ORDER_PP_ENV_REF_U
#define ORDER_DEF_V 8EVAL_REF,V
#define ORDER_SYM_V_V(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_V
#define ORDER_PP_ENV_REF_V(P,s,v) ORDER_SYM_V_##s(,P##v) ORDER_PP_ENV_FER_V
#define ORDER_PP_ENV_FER_V(P,s,v) ORDER_SYM_V_##s(,P##v) ORDER_PP_ENV_REF_V
#define ORDER_DEF_W 8EVAL_REF,W
#define ORDER_SYM_W_W(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_W
#define ORDER_PP_ENV_REF_W(P,s,v) ORDER_SYM_W_##s(,P##v) ORDER_PP_ENV_FER_W
#define ORDER_PP_ENV_FER_W(P,s,v) ORDER_SYM_W_##s(,P##v) ORDER_PP_ENV_REF_W
#define ORDER_DEF_X 8EVAL_REF,X
#define ORDER_SYM_X_X(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_X
#define ORDER_PP_ENV_REF_X(P,s,v) ORDER_SYM_X_##s(,P##v) ORDER_PP_ENV_FER_X
#define ORDER_PP_ENV_FER_X(P,s,v) ORDER_SYM_X_##s(,P##v) ORDER_PP_ENV_REF_X
#define ORDER_DEF_Y 8EVAL_REF,Y
#define ORDER_SYM_Y_Y(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_Y
#define ORDER_PP_ENV_REF_Y(P,s,v) ORDER_SYM_Y_##s(,P##v) ORDER_PP_ENV_FER_Y
#define ORDER_PP_ENV_FER_Y(P,s,v) ORDER_SYM_Y_##s(,P##v) ORDER_PP_ENV_REF_Y
#define ORDER_DEF_Z 8EVAL_REF,Z
#define ORDER_SYM_Z_Z(P,v) ,P##v,
#define ORDER_PP_ENV_BIND_Z
#define ORDER_PP_ENV_REF_Z(P,s,v) ORDER_SYM_Z_##s(,P##v) ORDER_PP_ENV_FER_Z
#define ORDER_PP_ENV_FER_Z(P,s,v) ORDER_SYM_Z_##s(,P##v) ORDER_PP_ENV_REF_Z

#endif
