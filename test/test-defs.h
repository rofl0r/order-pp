#ifndef ORDER_TEST_TEST_DEFS_H_VAJK20040620
#define ORDER_TEST_TEST_DEFS_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "order/lib.h"

////////////////////////////////////////////////////////////////////

#define TOKEN_x (x)
#define TOKEN_y (y)
#define TOKEN_z (z)

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8macro(x) ORDER_PP_MACRO(x)

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8macro_2 ORDER_PP_MACRO(8macro_1)
#define ORDER_PP_DEF_8macro_1 ORDER_PP_MACRO(8macro_0)
#define ORDER_PP_DEF_8macro_0 ORDER_PP_CONST(0)

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8sieve                                     \
ORDER_PP_FN(8fn(8S,                                             \
                8stream_cons                                    \
                (8stream_head(8S),                              \
                 8sieve(8stream_filter                          \
                        (8chain(8isnt_0,                        \
                                8ap(8flip(8remainder),          \
                                    8stream_head(8S))),         \
                         8stream_tail(8S))))))

#define ORDER_PP_DEF_8stream_of_primes                  \
ORDER_PP_MACRO(8stream_cons                             \
               (2,                                      \
                8sieve(8stream_iterate(8plus(2),3))))

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8seq_iota_0_to_100                         \
ORDER_PP_CONST((0)(1)(2)(3)(4)(5)(6)(7)(8)(9)                   \
               (10)(11)(12)(13)(14)(15)(16)(17)(18)(19)         \
               (20)(21)(22)(23)(24)(25)(26)(27)(28)(29)         \
               (30)(31)(32)(33)(34)(35)(36)(37)(38)(39)         \
               (40)(41)(42)(43)(44)(45)(46)(47)(48)(49)         \
               (50)(51)(52)(53)(54)(55)(56)(57)(58)(59)         \
               (60)(61)(62)(63)(64)(65)(66)(67)(68)(69)         \
               (70)(71)(72)(73)(74)(75)(76)(77)(78)(79)         \
               (80)(81)(82)(83)(84)(85)(86)(87)(88)(89)         \
               (90)(91)(92)(93)(94)(95)(96)(97)(98)(99))

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8seq_26                            \
ORDER_PP_FN(8fn(8A,8B,8C,8D,8E,8F,8G,8H,8I,8J,          \
                8K,8L,8M,8N,8O,8P,8Q,8R,8S,8T,          \
                8U,8V,8W,8X,8Y,8Z,                      \
                8seq(8A,8B,8C,8D,8E,8F,8G,8H,8I,8J,     \
                     8K,8L,8M,8N,8O,8P,8Q,8R,8S,8T,     \
                     8U,8V,8W,8X,8Y,8Z)))

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8diverge ORDER_PP_FN_CM(1,8DIVERGE,0IS_ANY)
#define ORDER_PP_8DIVERGE(...) (,,8DIVERGE,)

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8act(x)                    \
ORDER_PP_CONST(ACT ORDER_PP_BLOCK(x))

#define ACT(x) TCA ORDER_PP_BLOCK(x)x
#define TCA(x) ACT ORDER_PP_BLOCK(x)x

////////////////////////////////////////////////////////////////////

#define GEN_dim_0(x)                                    \
(ACT(!),x)ORDER_PP(8for_each_in_range                   \
                   (8fn(8X,                             \
                        8emit(8(GEN_dim_1),             \
                              8tuple(8to_lit(8X)))),    \
                    1,3))

#define GEN_dim_1(x)                                    \
(ACT(%),x)ORDER_PP(8for_each_in_range                   \
                   (8fn(8X,                             \
                        8emit(8(GEN_dim_2),             \
                              8tuple(8to_lit(8X)))),    \
                    1,3))

#define GEN_dim_2(x)                                    \
(ACT(?),x)ORDER_PP(8for_each_in_range                   \
                   (8fn(8X,                             \
                        8emit(8(GEN_dim_3),             \
                              8tuple(8to_lit(8X)))),    \
                    1,3))

#define GEN_dim_3(x)                            \
(ACT(*),x)

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8id                        \
ORDER_PP_FN(8fn(8X,8X))

#define ORDER_PP_DEF_1st                        \
ORDER_PP_FN(8fn(8X,8Y,8X))

#define ORDER_PP_DEF_2nd                        \
ORDER_PP_FN(8fn(8X,8Y,8Y))

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8macro_let(s,i,t)          \
ORDER_PP_MACRO(8ap(8fn(s,t),i))

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8constant_embedding                \
ORDER_PP_CONST(This constant                            \
               ORDER_PP_GET_CONST(8constant_contents)!)

#define ORDER_PP_DEF_8constant_contents         \
ORDER_PP_CONST(is in two parts)

////////////////////////////////////////////////////////////////////

#endif
