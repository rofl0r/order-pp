// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Defines a constant.
//
// The `value' must fulfill the requirements for an actual macro
// parameter. This means that `value' must not contain
// unparenthesized commas or unbalanced parentheses.
//
// For example, the Order definition
//
//   #define ORDER_PP_DEF_8my_const ORDER_PP_CONST(my value)
//
// defines the named constant `8my_const'. It can then be used as an
// Order expression:
//
//   8my_const ==> my value
#define ORDER_PP_CONST(value) 8DEF_CONST,value,

// Extracts the value of an Order constant definition.
//
// This macro can be used to avoid manually duplicating the contents
// of constant definitions.
//
// For example, the value of the Order definition
//
//   #define ORDER_PP_DEF_8my_const ORDER_PP_CONST(my value)
//
// can be extracted like this
//
//   ORDER_PP_GET_CONST(8my_const) // my value
#define ORDER_PP_GET_CONST(name) ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_DEF_##name))

#define ORDER_PP_8DEF_CONST(P,e,v,G,K,...) ORDER_PP_##K(,v##P,P##__VA_ARGS__)
