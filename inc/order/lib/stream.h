#ifndef ORDER_INC_ORDER_LIB_STREAM_H_VAJK20040620
#define ORDER_INC_ORDER_LIB_STREAM_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

// NOTE: This is the "odd" stream data structure. Without
// memoization, "even" streams would be significantly less
// efficient.

// Constants

#define ORDER_PP_DEF_8stream_nil 8DEF_CONST,,

#define ORDER_PP_DEF_8stream_of_naturals 8DEF_CONST,((00),(,(01),8STREAM_OF_NATURALS)),
#define ORDER_PP_8STREAM_OF_NATURALS(P,i,...) (,(P##i,(,ORDER_PP_NAT_SUCC P##i,8STREAM_OF_NATURALS)),P##__VA_ARGS__)

// First-order

#define ORDER_PP_DEF_8seq_to_stream             \
ORDER_PP_FN(8fn(8S,                             \
                8stream_unfold(8seq_isnt_nil,   \
                               8seq_rest,       \
                               8seq_first,      \
                               8S)))

#define ORDER_PP_DEF_8stream_cons(f,r) ORDER_PP_MACRO(8pair(f,8delay(r)))

#define ORDER_PP_DEF_8stream_drop ORDER_PP_FN_CM(2,8STREAM_DROP)
#define ORDER_PP_8STREAM_DROP(P,s,n,...) (,ORDER_PP_OR(,ORDER_PP_NUM_IS_0(,P##n),ORDER_PP_ISNT_EDIBLE(,P##s))(,P##s,ORDER_PP_STREAM_REST P##s,8STREAM_DROP,ORDER_PP_NUM_DEC(,P##n)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_first ORDER_PP_FN_CM(1,8STREAM_FIRST)
#define ORDER_PP_8STREAM_FIRST(P,s,...) (,ORDER_PP_STREAM_FIRST s##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_is_cons ORDER_PP_MACRO(8seq_isnt_nil)

#define ORDER_PP_DEF_8stream_is_nil ORDER_PP_MACRO(8seq_is_nil)

#define ORDER_PP_DEF_8stream_rest ORDER_PP_FN_CM(1,8STREAM_REST)
#define ORDER_PP_8STREAM_REST(P,s,...) (,ORDER_PP_STREAM_REST s##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_take                                       \
ORDER_PP_FN(8fn(8N,8S,                                                  \
                8unless(8or(8is_0(8N),8stream_is_nil(8S)),              \
                        8stream_cons(8stream_first(8S),                 \
                                     8stream_take(8dec(8N),             \
                                                  8stream_rest(8S))))))

#define ORDER_PP_DEF_8stream_to_seq             \
ORDER_PP_FN(8fn(8S,                             \
                8seq_unfold(8stream_is_cons,    \
                            8stream_rest,       \
                            8stream_first,      \
                            8S)))

// Higher-order

#define ORDER_PP_DEF_8stream_filter                                             \
ORDER_PP_FN(8fn(8F,8S,                                                          \
                8unless(8stream_is_nil(8S),                                     \
                        8if(8ap(8F,8stream_first(8S)),                          \
                            8stream_cons(8stream_first(8S),                     \
                                         8stream_filter(8F,8stream_rest(8S))),  \
                            8stream_filter(8F,8stream_rest(8S))))))

#define ORDER_PP_DEF_8stream_fold                               \
ORDER_PP_FN(8fn(8F,8R,8S,                                       \
                8if(8stream_is_nil(8S),                         \
                    8R,                                         \
                    8stream_fold(8F,                            \
                                 8ap(8F,8R,8stream_first(8S)),  \
                                 8stream_rest(8S)))))

#define ORDER_PP_DEF_8stream_for_each                                   \
ORDER_PP_FN(8fn(8F,8S,                                                  \
                8unless(8stream_is_nil(8S),                             \
                        8ap(8F,8stream_first(8S)),                      \
                        8stream_for_each(8F,8stream_rest(8S)))))

#define ORDER_PP_DEF_8stream_map                                                \
ORDER_PP_FN(8fn(8F,8S,                                                          \
                8unless(8stream_is_nil(8S),                                     \
                        8stream_cons(8ap(8F,8stream_first(8S)),                 \
                                     8stream_map(8F,8stream_rest(8S))))))

#define ORDER_PP_DEF_8stream_merge                                              \
ORDER_PP_FN(8fn(8F,8L,8R,                                                       \
                8cond((8stream_is_nil(8L),                                      \
                       8R)                                                      \
                      (8stream_is_nil(8R),                                      \
                       8L)                                                      \
                      (8ap(8F,8stream_first(8L),8stream_first(8R)),             \
                       8stream_cons(8stream_first(8L),                          \
                                    8stream_merge(8F,8stream_rest(8L),8R)))     \
                      (8else,                                                   \
                       8stream_cons(8stream_first(8S),                          \
                                    8stream_merge(8F,8L,8stream_rest(8R)))))))

#define ORDER_PP_DEF_8stream_unfold                                             \
ORDER_PP_FN(8fn(8C,8S,8F,8X,                                                    \
                8when(8ap(8C,8X),                                               \
                      8stream_cons(8ap(8F,8X),                                  \
                                   8stream_unfold(8C,8S,8F,8ap(8S,8X))))))

// Detail

#define ORDER_PP_STREAM_FIRST(f,r) f
#define ORDER_PP_STREAM_REST(f,r) ORDER_PP_OPEN r

#endif
