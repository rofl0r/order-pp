#ifndef ORDER_TEST_TEST_DEFS_H_VAJK20040620
#define ORDER_TEST_TEST_DEFS_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "order/lib.h"

#define ORDER_PP_DEF_8seq_iota_0_to_100 ORDER_PP_CONST((0)(1)(2)(3)(4)(5)(6)(7)(8)(9)(10)(11)(12)(13)(14)(15)(16)(17)(18)(19)(20)(21)(22)(23)(24)(25)(26)(27)(28)(29)(30)(31)(32)(33)(34)(35)(36)(37)(38)(39)(40)(41)(42)(43)(44)(45)(46)(47)(48)(49)(50)(51)(52)(53)(54)(55)(56)(57)(58)(59)(60)(61)(62)(63)(64)(65)(66)(67)(68)(69)(70)(71)(72)(73)(74)(75)(76)(77)(78)(79)(80)(81)(82)(83)(84)(85)(86)(87)(88)(89)(90)(91)(92)(93)(94)(95)(96)(97)(98)(99))

#define ORDER_PP_DEF_8seq_26                                                                            \
ORDER_PP_FN(8fn(8A,8B,8C,8D,8E,8F,8G,8H,8I,8J,8K,8L,8M,8N,8O,8P,8Q,8R,8S,8T,8U,8V,8W,8X,8Y,8Z,          \
                8seq(8A,8B,8C,8D,8E,8F,8G,8H,8I,8J,8K,8L,8M,8N,8O,8P,8Q,8R,8S,8T,8U,8V,8W,8X,8Y,8Z)))

#define ORDER_PP_DEF_8diverge 8DIVERGE,
#define ORDER_PP_8DIVERGE(...) (,,8DIVERGE,)

#define ORDER_PP_DEF_8act(...) 8DEF_CONST,ACT(__VA_ARGS__),
#define ACT(...) TCA ORDER_PP_BLOCK(__VA_ARGS__)__VA_ARGS__
#define TCA(...) ACT ORDER_PP_BLOCK(__VA_ARGS__)__VA_ARGS__

#define GEN_dim_0(x) (ACT(!),x)ORDER_PP(8for_each_in_range(8fn(8X,8emit(8(GEN_dim_1),8tuple(8to_lit(8X)))),1,3))
#define GEN_dim_1(x) (ACT(%),x)ORDER_PP(8for_each_in_range(8fn(8X,8emit(8(GEN_dim_2),8tuple(8to_lit(8X)))),1,3))
#define GEN_dim_2(x) (ACT(?),x)ORDER_PP(8for_each_in_range(8fn(8X,8emit(8(GEN_dim_3),8tuple(8to_lit(8X)))),1,3))
#define GEN_dim_3(x) (ACT(*),x)

#define ORDER_PP_DEF_8id ORDER_PP_FN(8fn(8X,8X))
#define ORDER_PP_DEF_1st ORDER_PP_FN(8fn(8X,8Y,8X))
#define ORDER_PP_DEF_2nd ORDER_PP_FN(8fn(8X,8Y,8Y))

#define ORDER_PP_DEF_8exp_size_seq                              \
ORDER_PP_FN(8fn(8N, 8S,                                         \
                8if(8is_0(8N),                                  \
                    8S,                                         \
                    8exp_size_seq(8dec(8N),                     \
                                  8seq_append(8S, 8S)))))

#define ORDER_PP_DEF_8macro_let(s,i,t) ORDER_PP_MACRO(8ap(8fn(s,t),i))

#define ORDER_PP_DEF_8constant_contents ORDER_PP_CONST(is in two parts)
#define ORDER_PP_DEF_8constant_embedding ORDER_PP_CONST(This constant ORDER_PP_GET_CONST(8constant_contents)!)

#define ORDER_PP_DEF_8exp_delay                 \
ORDER_PP_FN(8fn(8N,                             \
                8unless(8is_0(8N),              \
                        8exp_delay(8dec(8N)),   \
                        8exp_delay(8dec(8N)))))

#define ORDER_PP_DEF_8linear_fib                \
ORDER_PP_FN(8fn(8N,                             \
                8linear_fib_iter(8N, 0, 1)))

#define ORDER_PP_DEF_8linear_fib_iter                   \
ORDER_PP_FN(8fn(8N, 8I, 8J,                             \
                8if(8is_0(8N),                          \
                    8I,                                 \
                    8linear_fib_iter(8dec(8N),          \
                                     8J,                \
                                     8plus(8I, 8J)))))

#define ORDER_PP_DEF_8print_bottles                                                             \
ORDER_PP_MACRO(8let((8B, 8fn(8N,                                                                \
                             8cond((8greater(8N, 1),                                            \
                                    8separate(8N, 8(bottles)))                                  \
                                   (8isnt_0(8N),                                                \
                                    8separate(8N, 8(bottle)))                                   \
                                   (8else,                                                      \
                                    8(no more bottles))))),                                     \
                    8for_each_in_range                                                          \
                    (8fn(8N,                                                                    \
                         8print(8ap(8B, 8N) (of beer on the wall,) 8space                       \
                                8ap(8B, 8N) (of beer, take one down, pass it around,) 8space    \
                                8ap(8B, 8dec(8N)) (of beer on the wall.))),                     \
                     100, 1)))

#define GEN_phrase(N_bottles, N_minus_1_bottles)        \
  N_bottles of beer on the wall,                        \
  N_bottles of beer, take one down, pass it around,     \
  N_minus_1_bottles of beer on the wall.

#define ORDER_PP_DEF_8bottles                           \
ORDER_PP_FN(8fn(8N,                                     \
                8cond((8greater(8N, 1),                 \
                       8separate(8N, 8(bottles)))       \
                      (8equal(8N, 1),                   \
                       8separate(8N, 8(bottle)))        \
                      (8else,                           \
                       8(no more bottles)))))

#define ORDER_PP_DEF_8emit_bottles                              \
ORDER_PP_MACRO(8for_each_in_range                               \
               (8compose(8emit(8(GEN_phrase)),                  \
                         8fn(8N,                                \
                             8tuple(8bottles(8N),               \
                                    8bottles(8dec(8N))))),      \
                100, 1))

#endif
