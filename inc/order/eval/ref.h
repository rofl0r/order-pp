// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8ref(sym) 8EVAL_REF,sym,
#define ORDER_PP_8EVAL_REF(P,e,s,G,K,...) ORDER_PP_CM_INVOKE(P##K,ORDER_PP_ENV_REF(,P##s,P##e)),P##__VA_ARGS__)

#define ORDER_PP_ENV_REF(P,s0,e) ORDER_PP_FX(TUPLE_AT_2,(,ORDER_PP_SCAN(ORDER_PP_SCAN(ORDER_PP_ENV_REF_A P##e(0,,)P##s0,ORDER_PP_ENV_CLOSE_A P##e(0,))),ORDER_PP_ERROR_UNBOUND_VARIABLE ORDER_PP_BLOCK(!),))

#define ORDER_PP_ENV_REF_A(P,s,v) ORDER_PP_ENV_REF_F ORDER_PP_BLOCK(,P##s,P##v,ORDER_PP_ENV_REF_B##P
#define ORDER_PP_ENV_REF_A0
#define ORDER_PP_ENV_REF_B(P,s,v) ORDER_PP_ENV_REF_F ORDER_PP_BLOCK(,P##s,P##v,ORDER_PP_ENV_REF_A##P
#define ORDER_PP_ENV_REF_B0

#define ORDER_PP_ENV_REF_F(P,s,v,...) ORDER_PP_ENV_REF_G(,P##s,P##v,__VA_ARGS__)
#define ORDER_PP_ENV_REF_G(P,s,v,s0,...) P##s0,ORDER_PP_SYM_##s0##_##s(,P##v)P##__VA_ARGS__

#define ORDER_PP_ENV_CLOSE_A(P,...) )ORDER_PP_ENV_CLOSE_B##P
#define ORDER_PP_ENV_CLOSE_A0
#define ORDER_PP_ENV_CLOSE_B(P,...) )ORDER_PP_ENV_CLOSE_A##P
#define ORDER_PP_ENV_CLOSE_B0

#define ORDER_PP_DEF_8current_env 8CURRENT_ENV,
#define ORDER_PP_8CURRENT_ENV(P,e,G,K,...) ORDER_PP_##K(,P##e,P##__VA_ARGS__)

#define ORDER_PP_8EVAL_IREF(P,e,s,G,K,...) ORDER_PP_CM_INVOKE(P##K,ORDER_PP_8EVAL_IREF_B(ORDER_PP_REF_##s e##P)),P##__VA_ARGS__)
#define ORDER_PP_8EVAL_IREF_B(x)  ORDER_PP_TUPLE_AT_1(,x,ORDER_PP_ERROR_UNBOUND_VARIABLE(!),)

#define ORDER_PP_ERROR_UNBOUND_VARIABLE()

/*
(progn
  (insert "\n\n")
  (loop for i from ?A to ?Z do
    (insert "#define ORDER_PP_DEF_8" i " 8EVAL_IREF,8" i ",\n"))
  (insert "\n")
  (loop for i from ?A to ?Z do
    (insert "#define ORDER_PP_SYM_8" i "_8" i "(P,v) ,P##v,\n"))
  (insert "\n")
  (loop for i from ?A to ?Z do
    (insert "#define ORDER_PP_REF_8" i "(P,s,v) ORDER_PP_SYM_8" i "_##s(,v##P)ORDER_PP_FER_8" i "\n")
    (insert "#define ORDER_PP_FER_8" i "(P,s,v) ORDER_PP_SYM_8" i "_##s(,v##P)ORDER_PP_REF_8" i "\n")))
*/

#define ORDER_PP_DEF_8A 8EVAL_IREF,8A,
#define ORDER_PP_DEF_8B 8EVAL_IREF,8B,
#define ORDER_PP_DEF_8C 8EVAL_IREF,8C,
#define ORDER_PP_DEF_8D 8EVAL_IREF,8D,
#define ORDER_PP_DEF_8E 8EVAL_IREF,8E,
#define ORDER_PP_DEF_8F 8EVAL_IREF,8F,
#define ORDER_PP_DEF_8G 8EVAL_IREF,8G,
#define ORDER_PP_DEF_8H 8EVAL_IREF,8H,
#define ORDER_PP_DEF_8I 8EVAL_IREF,8I,
#define ORDER_PP_DEF_8J 8EVAL_IREF,8J,
#define ORDER_PP_DEF_8K 8EVAL_IREF,8K,
#define ORDER_PP_DEF_8L 8EVAL_IREF,8L,
#define ORDER_PP_DEF_8M 8EVAL_IREF,8M,
#define ORDER_PP_DEF_8N 8EVAL_IREF,8N,
#define ORDER_PP_DEF_8O 8EVAL_IREF,8O,
#define ORDER_PP_DEF_8P 8EVAL_IREF,8P,
#define ORDER_PP_DEF_8Q 8EVAL_IREF,8Q,
#define ORDER_PP_DEF_8R 8EVAL_IREF,8R,
#define ORDER_PP_DEF_8S 8EVAL_IREF,8S,
#define ORDER_PP_DEF_8T 8EVAL_IREF,8T,
#define ORDER_PP_DEF_8U 8EVAL_IREF,8U,
#define ORDER_PP_DEF_8V 8EVAL_IREF,8V,
#define ORDER_PP_DEF_8W 8EVAL_IREF,8W,
#define ORDER_PP_DEF_8X 8EVAL_IREF,8X,
#define ORDER_PP_DEF_8Y 8EVAL_IREF,8Y,
#define ORDER_PP_DEF_8Z 8EVAL_IREF,8Z,

#define ORDER_PP_SYM_8A_8A(P,v) ,P##v,
#define ORDER_PP_SYM_8B_8B(P,v) ,P##v,
#define ORDER_PP_SYM_8C_8C(P,v) ,P##v,
#define ORDER_PP_SYM_8D_8D(P,v) ,P##v,
#define ORDER_PP_SYM_8E_8E(P,v) ,P##v,
#define ORDER_PP_SYM_8F_8F(P,v) ,P##v,
#define ORDER_PP_SYM_8G_8G(P,v) ,P##v,
#define ORDER_PP_SYM_8H_8H(P,v) ,P##v,
#define ORDER_PP_SYM_8I_8I(P,v) ,P##v,
#define ORDER_PP_SYM_8J_8J(P,v) ,P##v,
#define ORDER_PP_SYM_8K_8K(P,v) ,P##v,
#define ORDER_PP_SYM_8L_8L(P,v) ,P##v,
#define ORDER_PP_SYM_8M_8M(P,v) ,P##v,
#define ORDER_PP_SYM_8N_8N(P,v) ,P##v,
#define ORDER_PP_SYM_8O_8O(P,v) ,P##v,
#define ORDER_PP_SYM_8P_8P(P,v) ,P##v,
#define ORDER_PP_SYM_8Q_8Q(P,v) ,P##v,
#define ORDER_PP_SYM_8R_8R(P,v) ,P##v,
#define ORDER_PP_SYM_8S_8S(P,v) ,P##v,
#define ORDER_PP_SYM_8T_8T(P,v) ,P##v,
#define ORDER_PP_SYM_8U_8U(P,v) ,P##v,
#define ORDER_PP_SYM_8V_8V(P,v) ,P##v,
#define ORDER_PP_SYM_8W_8W(P,v) ,P##v,
#define ORDER_PP_SYM_8X_8X(P,v) ,P##v,
#define ORDER_PP_SYM_8Y_8Y(P,v) ,P##v,
#define ORDER_PP_SYM_8Z_8Z(P,v) ,P##v,

#define ORDER_PP_REF_8A(P,s,v) ORDER_PP_SYM_8A_##s(,v##P)ORDER_PP_FER_8A
#define ORDER_PP_FER_8A(P,s,v) ORDER_PP_SYM_8A_##s(,v##P)ORDER_PP_REF_8A
#define ORDER_PP_REF_8B(P,s,v) ORDER_PP_SYM_8B_##s(,v##P)ORDER_PP_FER_8B
#define ORDER_PP_FER_8B(P,s,v) ORDER_PP_SYM_8B_##s(,v##P)ORDER_PP_REF_8B
#define ORDER_PP_REF_8C(P,s,v) ORDER_PP_SYM_8C_##s(,v##P)ORDER_PP_FER_8C
#define ORDER_PP_FER_8C(P,s,v) ORDER_PP_SYM_8C_##s(,v##P)ORDER_PP_REF_8C
#define ORDER_PP_REF_8D(P,s,v) ORDER_PP_SYM_8D_##s(,v##P)ORDER_PP_FER_8D
#define ORDER_PP_FER_8D(P,s,v) ORDER_PP_SYM_8D_##s(,v##P)ORDER_PP_REF_8D
#define ORDER_PP_REF_8E(P,s,v) ORDER_PP_SYM_8E_##s(,v##P)ORDER_PP_FER_8E
#define ORDER_PP_FER_8E(P,s,v) ORDER_PP_SYM_8E_##s(,v##P)ORDER_PP_REF_8E
#define ORDER_PP_REF_8F(P,s,v) ORDER_PP_SYM_8F_##s(,v##P)ORDER_PP_FER_8F
#define ORDER_PP_FER_8F(P,s,v) ORDER_PP_SYM_8F_##s(,v##P)ORDER_PP_REF_8F
#define ORDER_PP_REF_8G(P,s,v) ORDER_PP_SYM_8G_##s(,v##P)ORDER_PP_FER_8G
#define ORDER_PP_FER_8G(P,s,v) ORDER_PP_SYM_8G_##s(,v##P)ORDER_PP_REF_8G
#define ORDER_PP_REF_8H(P,s,v) ORDER_PP_SYM_8H_##s(,v##P)ORDER_PP_FER_8H
#define ORDER_PP_FER_8H(P,s,v) ORDER_PP_SYM_8H_##s(,v##P)ORDER_PP_REF_8H
#define ORDER_PP_REF_8I(P,s,v) ORDER_PP_SYM_8I_##s(,v##P)ORDER_PP_FER_8I
#define ORDER_PP_FER_8I(P,s,v) ORDER_PP_SYM_8I_##s(,v##P)ORDER_PP_REF_8I
#define ORDER_PP_REF_8J(P,s,v) ORDER_PP_SYM_8J_##s(,v##P)ORDER_PP_FER_8J
#define ORDER_PP_FER_8J(P,s,v) ORDER_PP_SYM_8J_##s(,v##P)ORDER_PP_REF_8J
#define ORDER_PP_REF_8K(P,s,v) ORDER_PP_SYM_8K_##s(,v##P)ORDER_PP_FER_8K
#define ORDER_PP_FER_8K(P,s,v) ORDER_PP_SYM_8K_##s(,v##P)ORDER_PP_REF_8K
#define ORDER_PP_REF_8L(P,s,v) ORDER_PP_SYM_8L_##s(,v##P)ORDER_PP_FER_8L
#define ORDER_PP_FER_8L(P,s,v) ORDER_PP_SYM_8L_##s(,v##P)ORDER_PP_REF_8L
#define ORDER_PP_REF_8M(P,s,v) ORDER_PP_SYM_8M_##s(,v##P)ORDER_PP_FER_8M
#define ORDER_PP_FER_8M(P,s,v) ORDER_PP_SYM_8M_##s(,v##P)ORDER_PP_REF_8M
#define ORDER_PP_REF_8N(P,s,v) ORDER_PP_SYM_8N_##s(,v##P)ORDER_PP_FER_8N
#define ORDER_PP_FER_8N(P,s,v) ORDER_PP_SYM_8N_##s(,v##P)ORDER_PP_REF_8N
#define ORDER_PP_REF_8O(P,s,v) ORDER_PP_SYM_8O_##s(,v##P)ORDER_PP_FER_8O
#define ORDER_PP_FER_8O(P,s,v) ORDER_PP_SYM_8O_##s(,v##P)ORDER_PP_REF_8O
#define ORDER_PP_REF_8P(P,s,v) ORDER_PP_SYM_8P_##s(,v##P)ORDER_PP_FER_8P
#define ORDER_PP_FER_8P(P,s,v) ORDER_PP_SYM_8P_##s(,v##P)ORDER_PP_REF_8P
#define ORDER_PP_REF_8Q(P,s,v) ORDER_PP_SYM_8Q_##s(,v##P)ORDER_PP_FER_8Q
#define ORDER_PP_FER_8Q(P,s,v) ORDER_PP_SYM_8Q_##s(,v##P)ORDER_PP_REF_8Q
#define ORDER_PP_REF_8R(P,s,v) ORDER_PP_SYM_8R_##s(,v##P)ORDER_PP_FER_8R
#define ORDER_PP_FER_8R(P,s,v) ORDER_PP_SYM_8R_##s(,v##P)ORDER_PP_REF_8R
#define ORDER_PP_REF_8S(P,s,v) ORDER_PP_SYM_8S_##s(,v##P)ORDER_PP_FER_8S
#define ORDER_PP_FER_8S(P,s,v) ORDER_PP_SYM_8S_##s(,v##P)ORDER_PP_REF_8S
#define ORDER_PP_REF_8T(P,s,v) ORDER_PP_SYM_8T_##s(,v##P)ORDER_PP_FER_8T
#define ORDER_PP_FER_8T(P,s,v) ORDER_PP_SYM_8T_##s(,v##P)ORDER_PP_REF_8T
#define ORDER_PP_REF_8U(P,s,v) ORDER_PP_SYM_8U_##s(,v##P)ORDER_PP_FER_8U
#define ORDER_PP_FER_8U(P,s,v) ORDER_PP_SYM_8U_##s(,v##P)ORDER_PP_REF_8U
#define ORDER_PP_REF_8V(P,s,v) ORDER_PP_SYM_8V_##s(,v##P)ORDER_PP_FER_8V
#define ORDER_PP_FER_8V(P,s,v) ORDER_PP_SYM_8V_##s(,v##P)ORDER_PP_REF_8V
#define ORDER_PP_REF_8W(P,s,v) ORDER_PP_SYM_8W_##s(,v##P)ORDER_PP_FER_8W
#define ORDER_PP_FER_8W(P,s,v) ORDER_PP_SYM_8W_##s(,v##P)ORDER_PP_REF_8W
#define ORDER_PP_REF_8X(P,s,v) ORDER_PP_SYM_8X_##s(,v##P)ORDER_PP_FER_8X
#define ORDER_PP_FER_8X(P,s,v) ORDER_PP_SYM_8X_##s(,v##P)ORDER_PP_REF_8X
#define ORDER_PP_REF_8Y(P,s,v) ORDER_PP_SYM_8Y_##s(,v##P)ORDER_PP_FER_8Y
#define ORDER_PP_FER_8Y(P,s,v) ORDER_PP_SYM_8Y_##s(,v##P)ORDER_PP_REF_8Y
#define ORDER_PP_REF_8Z(P,s,v) ORDER_PP_SYM_8Z_##s(,v##P)ORDER_PP_FER_8Z
#define ORDER_PP_FER_8Z(P,s,v) ORDER_PP_SYM_8Z_##s(,v##P)ORDER_PP_REF_8Z
