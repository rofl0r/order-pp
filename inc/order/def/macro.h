// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

// Defines an Order macro.
//
// For example,
#if 0
#define ORDER_PP_DEF_8do_let(var, init, body)   \
ORDER_PP_MACRO(8ap(8fn(var,                     \
                       8do(body)),              \
                   init))
#endif
// defines an Order macro that can be used as Order expression
//
//   8do_let(8X,8add(5,6),
//           8emit(8X),
//           8emit(8X)) ==> 11 11
#define ORDER_PP_MACRO(expression) ORDER_PP_DEF_##expression
