#ifndef ORDER_INC_ORDER_LIB_STREAM_H_VAJK20040620
#define ORDER_INC_ORDER_LIB_STREAM_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

// NOTE: This is the "odd" stream data structure. Without
// memoization, which is impossible, "even" streams are
// significantly less efficient.

// Constants

#define ORDER_PP_DEF_8stream_nil 8DEF_CONST,,

#define ORDER_PP_DEF_8stream_of_naturals 8DEF_CONST,((00),(,8STREAM_OF_NATURALS,(01))),
#define ORDER_PP_8STREAM_OF_NATURALS(P,_,i,...) (,(P##i,(,8STREAM_OF_NATURALS,ORDER_PP_NAT_SUCC P##i)),P##__VA_ARGS__)

// First-order

#define ORDER_PP_DEF_8seq_to_stream                                             \
ORDER_PP_FN(8fn(8S,                                                             \
                8stream_map(8seq_first,                                         \
                            8stream_take_while(8seq_isnt_nil,                   \
                                               8stream_iterate(8seq_rest,       \
                                                               8S)))))

#define ORDER_PP_DEF_8stream_cons(f,r) ORDER_PP_MACRO(8pair(f,8delay(r)))

#define ORDER_PP_DEF_8stream_drop ORDER_PP_FN_CM(2,8STREAM_DROP,0IS_NUM,0IS_STREAM)
#define ORDER_PP_8STREAM_DROP(P,s,n,...) (,ORDER_PP_OR(or)(ORDER_PP_NUM_IS_0(,P##n))(not)(ORDER_PP_IS_EDIBLE(,P##s))()(,P##s,,ORDER_PP_STREAM_TAIL P##s,8STREAM_DROP,ORDER_PP_NUM_DEC(,P##n)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_head ORDER_PP_FN_CM(1,8STREAM_HEAD,0IS_STREAM_CONS)
#define ORDER_PP_8STREAM_HEAD(P,s,...) (,ORDER_PP_STREAM_HEAD s##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_interleave ORDER_PP_FN_CM(2,8STREAM_INTERLEAVE,0IS_STREAM,0IS_STREAM)
#define ORDER_PP_8STREAM_INTERLEAVE(P,r,l,...) (,ORDER_PP_ISNT_EDIBLE(,P##l)(,P##r,(ORDER_PP_STREAM_TAKE l##P,8STREAM_EVAELRETNI,P##r)ORDER_PP_RPAREN),P##__VA_ARGS__)
#define ORDER_PP_8STREAM_EVAELRETNI(P,l,r,...) (,ORDER_PP_ISNT_EDIBLE(,P##l)(,P##r,(ORDER_PP_STREAM_TAKE l##P,8STREAM_INTERLEAVE,P##r)ORDER_PP_RPAREN),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_is_cons ORDER_PP_FN_CM(1,8STREAM_IS_CONS,0IS_STREAM)
#define ORDER_PP_8STREAM_IS_CONS(P,s,...) (,ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST P##s,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_is_nil ORDER_PP_FN_CM(1,8STREAM_IS_NIL,0IS_STREAM)
#define ORDER_PP_8STREAM_IS_NIL(P,s,...) (,ORDER_PP_TEST(,ORDER_PP_IS_EDIBLE_TEST P##s,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_tail ORDER_PP_FN_CM(1,8STREAM_TAIL,0IS_STREAM_CONS)
#define ORDER_PP_8STREAM_TAIL(P,s,...) (,,ORDER_PP_STREAM_TAIL s##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_take ORDER_PP_FN_CM(2,8STREAM_TAKE,0IS_NUM,0IS_STREAM)
#define ORDER_PP_8STREAM_TAKE(P,s,n,...) (,ORDER_PP_OR(or)(ORDER_PP_NUM_IS_0(,P##n))(not)(ORDER_PP_IS_EDIBLE(,P##s))()(,,(ORDER_PP_STREAM_TAKE s##P,8STREAM_TAKE,ORDER_PP_NUM_DEC(,P##n))ORDER_PP_RPAREN),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_to_seq             \
ORDER_PP_FN(8fn(8S,                             \
                8seq_unfold(8stream_is_cons,    \
                            8stream_tail,       \
                            8stream_head,       \
                            8S)))

// Higher-order

#define ORDER_PP_DEF_8stream_drop_while         \
ORDER_PP_FN(8fn(8C,                             \
                8while(8chain(8C,8stream_head), \
                       8stream_tail)))

#define ORDER_PP_DEF_8stream_filter ORDER_PP_FN_CM(2,8STREAM_FILTER,0IS_FN,0IS_STREAM)
#define ORDER_PP_8STREAM_FILTER(P,s,f,...) (,ORDER_PP_ISNT_EDIBLE(,P##s)(,,ORDER_PP_STREAM_HEAD s##P,ORDER_PP_OPEN f##P,8STREAM_FILTER_B,ORDER_PP_REM P##s,P##f),P##__VA_ARGS__)
#define ORDER_PP_8STREAM_FILTER_B(P,b,h,t,f,...) (,ORDER_PP_IF_##b(,(P##h,(,ORDER_PP_OPEN t##P,8STREAM_FILTER,P##f)),,ORDER_PP_OPEN t##P,8STREAM_FILTER,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_fold                               \
ORDER_PP_FN(8fn(8F,8R,8S,                                       \
                8if(8stream_is_nil(8S),                         \
                    8R,                                         \
                    8stream_fold(8F,                            \
                                 8ap(8F,8R,8stream_head(8S)),   \
                                 8stream_tail(8S)))))

#define ORDER_PP_DEF_8stream_for_each ORDER_PP_FN_CM(2,8STREAM_FOR_EACH,0IS_FN,0IS_STREAM)
#define ORDER_PP_8STREAM_FOR_EACH(P,s,f,...) (,ORDER_PP_ISNT_EDIBLE(,P##s)(,,ORDER_PP_STREAM_HEAD s##P,ORDER_PP_OPEN f##P,ORDER_PP_STREAM_TAIL s##P,8STREAM_FOR_EACH,P##f),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_iterate ORDER_PP_FN_CM(2,8STREAM_ITERATE,0IS_FN,0IS_ANY)
#define ORDER_PP_8STREAM_ITERATE(P,x,f,...) (,(P##x,(,8STREAM_ITERATE_B,P##f,P##x)),P##__VA_ARGS__)
#define ORDER_PP_8STREAM_ITERATE_B(P,_,f,x,...) (,P##x,ORDER_PP_OPEN f##P,8STREAM_ITERATE,P##f,P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_map ORDER_PP_FN_CM(2,8STREAM_MAP,0IS_FN,0IS_STREAM)
#define ORDER_PP_8STREAM_MAP(P,s,f,...) (,ORDER_PP_ISNT_EDIBLE(,P##s)(,,ORDER_PP_STREAM_HEAD s##P,ORDER_PP_OPEN f##P,8RIAP,(,ORDER_PP_STREAM_TAIL s##P,8STREAM_MAP,P##f)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8stream_merge                                              \
ORDER_PP_FN(8fn(8F,8L,8R,                                                       \
                8cond((8stream_is_nil(8L),                                      \
                       8R)                                                      \
                      (8stream_is_nil(8R),                                      \
                       8L)                                                      \
                      (8ap(8F,8stream_head(8L),8stream_head(8R)),               \
                       8stream_cons(8stream_head(8L),                           \
                                    8stream_merge(8F,8stream_tail(8L),8R)))     \
                      (8else,                                                   \
                       8stream_cons(8stream_head(8S),                           \
                                    8stream_merge(8F,8L,8stream_tail(8R)))))))

#define ORDER_PP_DEF_8stream_pair_with                                          \
ORDER_PP_FN(8fn(8F,8L,8R,                                                       \
                8unless(8or(8stream_is_nil(8L),                                 \
                            8stream_is_nil(8R)),                                \
                        8stream_cons(8ap(8F,                                    \
                                         8stream_head(8L),                      \
                                         8stream_head(8R)),                     \
                                     8stream_pair_with(8F,                      \
                                                       8stream_tail(8L),        \
                                                       8stream_tail(8R))))))

#define ORDER_PP_DEF_8stream_take_while ORDER_PP_FN_CM(2,8STREAM_TAKE_WHILE,0IS_FN,0IS_STREAM)
#define ORDER_PP_8STREAM_TAKE_WHILE(P,s,c,...) (,ORDER_PP_ISNT_EDIBLE(,P##s)(,,ORDER_PP_STREAM_HEAD s##P,ORDER_PP_OPEN c##P,8STREAM_TAKE_WHILE_B,(ORDER_PP_STREAM_TAKE s##P,8STREAM_TAKE_WHILE,P##c)ORDER_PP_RPAREN),P##__VA_ARGS__)
#define ORDER_PP_8STREAM_TAKE_WHILE_B(P,b,...) (,ORDER_PP_EAT_UNLESS_##b P##__VA_ARGS__)

// Detail

#define ORDER_PP_0IS_STREAM(P,x) ORDER_PP_OR(or)(ORDER_PP_0IS_STREAM_CONS(,P##x))(or)(ORDER_PP_IS_NIL(,P##x))()
#define ORDER_PP_0IS_STREAM_CONS(P,x) ORDER_PP_AND(and)(ORDER_PP_0IS_TUPLE(,P##x))(and)(ORDER_PP_FY(IS_TUPLE_SIZE_2,(,ORDER_PP_REM P##x)))(and)(ORDER_PP_FY(0IS_FN,(,ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_REM P##x,)))))()

#define ORDER_PP_STREAM_HEAD(h,t) h
#define ORDER_PP_STREAM_TAIL(h,t) ORDER_PP_OPEN t
#define ORDER_PP_STREAM_TAKE(h,t) h,(,ORDER_PP_OPEN t

#endif
