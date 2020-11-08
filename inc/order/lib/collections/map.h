#ifndef ORDER_INC_ORDER_LIB_MAP_H
#define ORDER_INC_ORDER_LIB_MAP_H

// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

// First-order

#define ORDER_PP_DEF_8map(...) 8EVAL_MAP,ORDER_PP_0EVAL_MAP_ARGS(__VA_ARGS__)(0map_eval_terminate,),

#define ORDER_PP_0EVAL_MAP_ARGS(...) ORDER_PP_OVERLOAD(0EVAL_MAP_ARGS, ORDER_PP_IS_TUPLE_SIZE_1(,__VA_ARGS__)(,1,N))(__VA_ARGS__)
#define ORDER_PP_0EVAL_MAP_ARGS_1(cmp) cmp,ORDER_PP_SEQ_AT_0
#define ORDER_PP_0EVAL_MAP_ARGS_N(cmp, ...) cmp,ORDER_PP_SEQ_AT_0 __VA_ARGS__

#define ORDER_PP_8EVAL_MAP(P, env, q_cmp, q_head_key, q_head_value, tail, G, ...) \
                          (,P##env,ORDER_PP_DEF_##q_cmp,8EVAL_MAP_LOOP,P##q_head_key,P##q_head_value,P##tail,,P##env,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_MAP_LOOP(P, cmp, q_head_key, q_head_value, tail, acc, env, ...) \
                               (,P##env,ORDER_PP_DEF_##q_head_key,8EVAL_MAP_LOOP_B,P##q_head_value,P##tail,P##acc,P##cmp,P##env,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_MAP_LOOP_B(P, head_key, q_head_value, tail, acc, cmp, env, ...) \
                                 (,P##env,ORDER_PP_DEF_##q_head_value,8EVAL_MAP_LOOP_C,P##head_key,P##tail,P##acc,P##cmp,P##env,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_MAP_LOOP_C(P, head_value, head_key, tail, acc, cmp, env, ...) \
                                 (,P##cmp,8EVAL_MAP_LOOP,ORDER_PP_SEQ_AT_0 tail##P,P##acc(P##head_key,P##head_value),P##env,P##__VA_ARGS__)

#define ORDER_PP_DEF_0map_eval_terminate 0EVAL_MAP_TERMINATE,
#define ORDER_PP_0EVAL_MAP_TERMINATE(P, env, G, _eval_map_loop_b_, _q_head_value_, _tail_, _acc_, _cmp_, _env_,...) \
                                    (,(P##_cmp_,ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES(,P##_acc_)), P##__VA_ARGS__)   


#define ORDER_PP_DEF_8map_equivalence_fn ORDER_PP_FN_NATIVE(1,8MAP_EQUIVALENCE_FN,0IS_MAP)
#define ORDER_PP_8MAP_EQUIVALENCE_FN(P, map) ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_REM P##map,))


#define ORDER_PP_DEF_8map_items ORDER_PP_FN_NATIVE(1,8MAP_ITEMS,0IS_MAP)
#define ORDER_PP_8MAP_ITEMS(P, map) ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_REM P##map,))


#define ORDER_PP_DEF_8map_keys ORDER_PP_FN(8fn(8M, 8seq_map(8tuple_at_0, 8map_items(8M))))


#define ORDER_PP_DEF_8map_values ORDER_PP_FN(8fn(8M, 8seq_map(8tuple_at_1, 8map_items(8M))))


#define ORDER_PP_DEF_8map_at                                                                            \
ORDER_PP_FN(8fn(8K, 8M,                                                                                 \
                8call_cc(8fn(8C,                                                                        \
                             8seq_for_each(8fn(8E,                                                      \
                                               8when(0map_item_matches(8E, 8K, 8M), \
                                                     8ap(8C, 8tuple_at_1(8E)))),                        \
                                           8map_items(8M))))))


#define ORDER_PP_DEF_8map_exists                                                        \
ORDER_PP_FN(8fn(8K, 8M,                                                                 \
                8seq_exists(8fn(8E, \
                                0map_item_matches(8E, 8K, 8M)), \
                            8map_items(8M))))


#define ORDER_PP_DEF_8map_insert \
ORDER_PP_FN(8fn(8K, 8V, 8M, \
                8if(8map_exists(8K, 8M), \
                    8M, \
                    0map_reset(8seq_push_back(8pair(8K, 8V), 8map_items(8M)), 8M))))


#define ORDER_PP_DEF_8map_erase \
ORDER_PP_FN(8fn(8K, 8M, \
                0map_reset(8seq_filter(8fn(8E, \
                                           8not(0map_item_matches(8E, 8K, 8M))), \
                                       8map_items(8M)), \
                           8M)))


#define ORDER_PP_DEF_8map_size ORDER_PP_FN(8fn(8M, 8seq_size(8map_items(8M))))


#define ORDER_PP_DEF_8is_map ORDER_PP_FN_CM(1,8IS_MAP,0IS_ANY)
#define ORDER_PP_8IS_MAP(P,x,...) (,ORDER_PP_0IS_MAP(,P##x)(,8true,8false),P##__VA_ARGS__)

// Higher-order

#define ORDER_PP_DEF_8map_union \
ORDER_PP_FN(8fn(8M, 8N, \
                8seq_fold(8fn(8A, 8E, \
                              8map_insert(8tuple_at_0(8E), 8tuple_at_1(8E), 8A)), \
                          8M, 8map_items(8N))))


#define ORDER_PP_DEF_8map_intersect \
ORDER_PP_FN(8fn(8M, 8N, \
                0map_reset(8seq_fold(8fn(8A, 8E, \
                                         8if(8map_exists(8tuple_at_0(8E), 8N), \
                                             8seq_push_back(8E, 8A), \
                                             8A)), \
                                     8nil, 8map_items(8M)), \
                           8M)))


#define ORDER_PP_DEF_8map_diff \
ORDER_PP_FN(8fn(8M, 8N, \
                0map_reset(8seq_fold(8fn(8A, 8E, \
                                         8if(8map_exists(8tuple_at_0(8E), 8N), \
                                             8A, \
                                             8seq_push_back(8E, 8A))), \
                                     8nil, 8map_items(8M)), \
                           8M)))


#define ORDER_PP_DEF_8map_symm_diff \
ORDER_PP_FN(8fn(8M, 8N, \
                0map_reset(8seq_fold(8fn(8A, 8E, \
                                         8if(8map_exists(8tuple_at_0(8E), 8N), \
                                         8seq_filter(8fn(8U, 8not(0map_item_matches(8U, 8tuple_at_0(8E), 8N))), 8A), \
                                         8seq_push_back(8E, 8A))), \
                                     8map_items(8N), 8map_items(8M)), \
                           8M)))


#define ORDER_PP_DEF_8seq_of_pairs_to_map ORDER_PP_FN_NATIVE(2,8SEQ_OF_PAIRS_TO_MAP,0IS_FN,0IS_ANY)
#define ORDER_PP_8SEQ_OF_PAIRS_TO_MAP(P, cmp, items) (P##cmp,P##items)

// Detail
#define ORDER_PP_0IS_MAP(P,x) ORDER_PP_AND                                                                  \
                              (and)(ORDER_PP_0IS_TUPLE(,P##x))                                              \
                              (and)(ORDER_PP_FY(IS_TUPLE_SIZE_2,(,ORDER_PP_REM P##x)))                      \
                              (and)(ORDER_PP_FY(0IS_FN,(,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_REM P##x,)))))()

#define ORDER_PP_DEF_0map_item_matches(entry, key, map) ORDER_PP_MACRO(8ap(8map_equivalence_fn(map), key, 8tuple_at_0(entry)))

#define ORDER_PP_DEF_0map_reset(items, map) ORDER_PP_MACRO(8seq_of_pairs_to_map(8map_equivalence_fn(map), items))

#endif
