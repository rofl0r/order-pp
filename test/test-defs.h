#ifndef ORDER_TEST_TEST_DEFS_H_VAJK20040620
#define ORDER_TEST_TEST_DEFS_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8act(...) 8DEF_CONST,ACT(__VA_ARGS__),
#define ACT(...) TCA ORDER_PP_BLOCK(__VA_ARGS__)__VA_ARGS__
#define TCA(...) ACT ORDER_PP_BLOCK(__VA_ARGS__)__VA_ARGS__

#define GEN_dim_0(P,x) (ACT(!),x)ORDER_PP(8for_each_in_range(8nat(1),8nat(2),8fn(8X,8emit(8quote(GEN_dim_1),8tuple(8nat_to_lit(8X))))))
#define GEN_dim_1(P,x) (ACT(%),x)ORDER_PP(8for_each_in_range(8nat(1),8nat(2),8fn(8X,8emit(8quote(GEN_dim_2),8tuple(8nat_to_lit(8X))))))
#define GEN_dim_2(P,x) (ACT(?),x)ORDER_PP(8for_each_in_range(8nat(1),8nat(2),8fn(8X,8emit(8quote(GEN_dim_3),8tuple(8nat_to_lit(8X))))))
#define GEN_dim_3(P,x) (ACT(*),x)

#define GEN_dimr_0(P,x) (ACT(!),x)ORDER_PP(8rout(8for_each_in_range(8nat(1),8nat(2),8fn(8X,8emit(8quote(GEN_dimr_1),8tuple(8nat_to_lit(8X)))))))
#define GEN_dimr_1(P,x) (ACT(%),x)ORDER_PP(8rout(8for_each_in_range(8nat(1),8nat(2),8fn(8X,8emit(8quote(GEN_dimr_2),8tuple(8nat_to_lit(8X)))))))
#define GEN_dimr_2(P,x) (ACT(?),x)ORDER_PP(8rout(8for_each_in_range(8nat(1),8nat(2),8fn(8X,8emit(8quote(GEN_dimr_3),8tuple(8nat_to_lit(8X)))))))
#define GEN_dimr_3(P,x) (ACT(*),x)

#define ORDER_PP_DEF_8id ORDER_PP_FN(8fn(8X,8X))
#define ORDER_PP_DEF_1st ORDER_PP_FN(8fn(8X,,8X))
#define ORDER_PP_DEF_2nd ORDER_PP_FN(8fn(,8Y,8Y))

#define ORDER_PP_DEF_8exp_size_seq                              \
ORDER_PP_FN(8fn(8N,8S,                                          \
                8if(8is_zero(8N),                               \
                    8S,                                         \
                    8exp_size_seq(8pred(8N),                    \
                                  8seq_append(8S,8S)))))

#define ORDER_PP_DEF_8macro_let(s,i,t) ORDER_PP_MACRO(8ap(8fn(s,t),i))

#define ORDER_PP_DEF_8constant_contents ORDER_PP_CONST(is in two parts)
#define ORDER_PP_DEF_8constant_embedding ORDER_PP_CONST(This constant ORDER_PP_GET_CONST(8constant_contents)!)

#define ORDER_PP_DEF_8exp_delay                 \
ORDER_PP_FN(8fn(8N,                             \
                8unless(8is_0(8N),              \
                        8exp_delay(8dec(8N)),   \
                        8exp_delay(8dec(8N)))))

#define ORDER_PP_DEF_8linear_fib                        \
ORDER_PP_FN(8fn(8N,                                     \
                8linear_fib_iter(8N,8nat(0),8nat(1))))

#define ORDER_PP_DEF_8linear_fib_iter                   \
ORDER_PP_FN(8fn(8N,8F0,8F1,                             \
                8if(8is_zero(8N),                       \
                    8F0,                                \
                    8linear_fib_iter(8pred(8N),         \
                                     8F1,               \
                                     8plus(8F0,8F1)))))

#endif
