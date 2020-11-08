#ifndef ORDER_INC_ORDER_LIB_SET_H
#define ORDER_INC_ORDER_LIB_SET_H

#include "order/lib/map.h"

// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

// First-order

#define ORDER_PP_DEF_8set(cmp, ...) 8EVAL_SET,cmp,ORDER_PP_SEQ_AT_0 __VA_ARGS__(0set_eval_terminate),

#define ORDER_PP_8EVAL_SET(P, env, q_cmp, q_head, tail, G, ...) \
                          (,P##env,ORDER_PP_DEF_##q_cmp,8EVAL_SET_LOOP,P##q_head,P##tail,,P##env,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_SET_LOOP(P, cmp, q_head, tail, acc, env, ...) \
                               (,P##env,ORDER_PP_DEF_##q_head,8EVAL_SET_LOOP_B,P##tail,P##acc,P##cmp,P##env,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_SET_LOOP_B(P, head, tail, acc, cmp, env, ...) \
                                 (,P##cmp,8EVAL_SET_LOOP,ORDER_PP_SEQ_AT_0 tail##P,P##acc(P##head,),P##env,P##__VA_ARGS__)

#define ORDER_PP_DEF_0set_eval_terminate 0EVAL_SET_TERMINATE,
#define ORDER_PP_0EVAL_SET_TERMINATE(P, env, G, _eval_set_loop_b_, _tail_, _acc_, _cmp_, _env_,...) \
                                    (,(P##_cmp_,ORDER_PP_9VSEQ_TO_SEQ_OF_TUPLES(,P##_acc_)), __VA_ARGS__)   


#define ORDER_PP_DEF_8set_equivalence_fn ORDER_PP_FN_CM(1,8SET_EQUIVALENCE_FN,0IS_SET)
#define ORDER_PP_8SET_EQUIVALENCE_FN(P, set, ...) (,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_REM P##set,)),__VA_ARGS__)


#define ORDER_PP_DEF_8set_items ORDER_PP_FN_CM(1,8SET_ITEMS,0IS_SET)
#define ORDER_PP_8SET_ITEMS(P, set, ...) (,ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_REM P##set,)),__VA_ARGS__)


#define ORDER_PP_DEF_8set_exists ORDER_PP_MACRO(8map_exists)


#define ORDER_PP_DEF_8set_insert(value, set) ORDER_PP_MACRO(8map_insert(value,8nil,set))


#define ORDER_PP_DEF_8set_erase ORDER_PP_MACRO(8map_erase)


#define ORDER_PP_DEF_8is_set ORDER_PP_FN_CM(1,8IS_SET,0IS_ANY)
#define ORDER_PP_8IS_SET(P,x,...) (,ORDER_PP_0IS_SET(,P##x)(,8true,8false),P##__VA_ARGS__)


// Detail
#define ORDER_PP_0IS_SET(P,x) ORDER_PP_0IS_MAP(,P##x)

#endif
