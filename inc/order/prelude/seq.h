#ifndef ORDER_PRELUDE_SEQ_H_VAJK20040620
#define ORDER_PRELUDE_SEQ_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8seq ORDER_PP_CTOR_N(8SEQ_)
#define ORDER_PP_CM_8SEQ_8(P,_0,_1,_2,_3,_4,_5,_6,_7,...) (,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_7(P,_0,_1,_2,_3,_4,_5,_6,...) (,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_6(P,_0,_1,_2,_3,_4,_5,...) (,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_5(P,_0,_1,_2,_3,_4,...) (,(P##_0)(P##_1)(P##_2)(P##_3)(P##_4),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_4(P,_0,_1,_2,_3,...) (,(P##_0)(P##_1)(P##_2)(P##_3),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_3(P,_0,_1,_2,...) (,(P##_0)(P##_1)(P##_2),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_2(P,_0,_1,...) (,(P##_0)(P##_1),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_1(P,_0,...) (,(P##_0),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_nil 8DEF_CONST,

#define ORDER_PP_DEF_8seq_is_nil ORDER_PP_FN_CM(1,8IS_NIL)

#define ORDER_PP_DEF_8seq_isnt_nil ORDER_PP_FN_CM(1,8SEQ_ISNT_NIL)
#define ORDER_PP_CM_8SEQ_ISNT_NIL(P,s,...) (,ORDER_PP_TEST(ORDER_PP_IS_EDIBLE_TEST s##P,8true,,8false,),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_first ORDER_PP_FN_CM(1,8SEQ_FIRST)
#define ORDER_PP_CM_8SEQ_FIRST(P,s,...) (,ORDER_PP_SEQ_FIRST(,P##s),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_rest ORDER_PP_FN_CM(1,8SEQ_REST)
#define ORDER_PP_DEF_8seq_pop_front ORDER_PP_FN_CM(1,8SEQ_REST)
#define ORDER_PP_CM_8SEQ_REST(P,s,...) (,ORDER_PP_EAT P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_push_front ORDER_PP_FN_CM(2,8SEQ_PUSH_FRONT)
#define ORDER_PP_CM_8SEQ_PUSH_FRONT(P,x,s,...) (,(P##x)P##s,P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_push_back ORDER_PP_FN_CM(2,8SEQ_PUSH_BACK)
#define ORDER_PP_CM_8SEQ_PUSH_BACK(P,x,s,...) (,P##s(P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_append ORDER_PP_OP_LEFT_CM(8SEQ_APPEND)
#define ORDER_PP_CM_8SEQ_APPEND(P,r,l,...) (,l##P P##r,P##__VA_ARGS__)

// Chaos-bindings

#define ORDER_PP_DEF_8seq_at ORDER_PP_FN_MACRO(2,CHAOS_PP_SEQ_ELEM)
#include "chaos/preprocessor/seq/elem.h"

#define ORDER_PP_DEF_8seq_first_n ORDER_PP_FN_MACRO(2,CHAOS_PP_SEQ_FIRST_N)
#include "chaos/preprocessor/seq/first_n.h"

#define ORDER_PP_DEF_8seq_insert ORDER_PP_FN_MACRO(3,CHAOS_PP_SEQ_INSERT)
#include "chaos/preprocessor/seq/insert.h"

#define ORDER_PP_DEF_8seq_pop_back ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_POP_BACK)
#include "chaos/preprocessor/seq/pop_back.h"

#define ORDER_PP_DEF_8seq_range ORDER_PP_FN_MACRO(3,CHAOS_PP_SEQ_RANGE)
#include "chaos/preprocessor/seq/range.h"

#define ORDER_PP_DEF_8seq_rest_n ORDER_PP_FN_MACRO(2,CHAOS_PP_SEQ_REST_N)
#include "chaos/preprocessor/seq/rest_n.h"

#define ORDER_PP_DEF_8seq_reverse ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_REVERSE)
#include "chaos/preprocessor/seq/reverse.h"

#define ORDER_PP_DEF_8seq_set ORDER_PP_FN_MACRO(3,CHAOS_PP_SEQ_REPLACE)
#include "chaos/preprocessor/seq/replace.h"

#define ORDER_PP_DEF_8seq_size ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_SIZE)
#include "chaos/preprocessor/seq/size.h"

#define ORDER_PP_DEF_8seq_to_tuple ORDER_PP_FN_MACRO(1,CHAOS_PP_SEQ_TO_TUPLE)
#include "chaos/preprocessor/seq/to_tuple.h"

// Higher-order functions

#define ORDER_PP_DEF_8seq_exists ORDER_PP_FN_CM(2,8SEQ_EXISTS)
#define ORDER_PP_CM_8SEQ_EXISTS(P,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,8false),ORDER_PP_SEQ_FIRST(,P##s),ORDER_PP_OPEN f##P,8SEQ_EXISTS_4,P##f,ORDER_PP_SEQ_AT_1 P##s),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_EXISTS_4(P,b,f,x,xs,...) (,ORDER_PP_IF_##b(,8true,P##x,ORDER_PP_OPEN f##P ORDER_PP_IS_NOT_EDIBLE(,P##xs)(,(,),,8SEQ_EXISTS_4,P##f,ORDER_PP_SEQ_AT_0 P##xs)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_filter ORDER_PP_FN_CM(2,8REMAP_021,,8SEQ_FILTER_3)
#define ORDER_PP_CM_8SEQ_FILTER_3(P,f,out,in,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,P##out),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN f##P,8SEQ_FILTER_3_B,P##f,P##out,ORDER_PP_SEQ_AT_0 in##P),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_FILTER_3_B(P,b,f,out,x,...) ORDER_PP_CM_INVOKE(8SEQ_FILTER_3,P##f,ORDER_PP_IF_##b(,P##out(P##x),P##out)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_fold ORDER_PP_FN_CM(3,8REMAP_102,8SEQ_FOLD)
#define ORDER_PP_CM_8SEQ_FOLD(P,x,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,P##x),P##x,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_FIRST(,P##s),8SEQ_FOLD,P##f,ORDER_PP_EAT s##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_all ORDER_PP_FN_CM(2,8SEQ_FOR_ALL)
#define ORDER_PP_CM_8SEQ_FOR_ALL(P,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,8true),ORDER_PP_SEQ_FIRST(,P##s),ORDER_PP_OPEN f##P,8SEQ_FOR_ALL_4,P##f,ORDER_PP_SEQ_AT_1 P##s),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_FOR_ALL_4(P,b,f,x,xs,...) (,ORDER_PP_IF_NOT_##b(,8false,P##x,ORDER_PP_OPEN f##P ORDER_PP_IS_NOT_EDIBLE(,P##xs)(,(,),,8SEQ_FOR_ALL_4,P##f,ORDER_PP_SEQ_AT_0 P##xs)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each ORDER_PP_FN_CM(2,8REMAP_201,,8SEQ_FOR_EACH_3)
#define ORDER_PP_CM_8SEQ_FOR_EACH_3(P,_,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,),ORDER_PP_SEQ_FIRST(,P##s),ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_3,P##f,ORDER_PP_EAT s##P),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_in_product ORDER_PP_FN_CM(2,8SEQ_FOR_EACH_IN_PRODUCT)
#define ORDER_PP_CM_8SEQ_FOR_EACH_IN_PRODUCT(P,f,s,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,),,8SEQ_FOR_EACH_3,(,ORDER_PP_OPEN f##P,8SEQ_FOR_EACH_IN_PRODUCT,ORDER_PP_EAT s##P),ORDER_PP_SEQ_FIRST(,P##s)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_for_each_with_idx ORDER_PP_FN_CM(2,8REMAP_2013,,0,8SEQ_FOR_EACH_WITH_IDX_4)
#define ORDER_PP_CM_8SEQ_FOR_EACH_WITH_IDX_4(P,_,f,s,i,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##s)(,(,),P##i,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_FIRST(,P##s),8SEQ_FOR_EACH_WITH_IDX_4,P##f,ORDER_PP_EAT s##P,ORDER_PP_INC_##i),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_map ORDER_PP_FN_CM(2,8SEQ_MAP)
#define ORDER_PP_CM_8SEQ_MAP(P,f,in,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_3,P##f,ORDER_PP_EAT in##P,),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_MAP_3(P,x,f,in,out,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN f##P,8SEQ_MAP_3,P##f,ORDER_PP_EAT in##P,)P##out(P##x),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_merge ORDER_PP_FN_CM(3,8SEQ_MERGE_4,)
#define ORDER_PP_CM_8SEQ_MERGE_4(P,f,ls,rs,out,...) (,ORDER_PP_SELECT_4(ORDER_PP_IS_NOT_EDIBLE(,P##ls),ORDER_PP_IS_NOT_EDIBLE(,P##rs))(,(,P##out),(,P##out P##rs),(,P##out P##ls),ORDER_PP_SEQ_FIRST(,P##ls),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_FIRST(,P##rs),8SEQ_MERGE_4_B,P##f,ORDER_PP_SEQ_AT_0 ls##P,ORDER_PP_SEQ_AT_0 rs##P,P##out),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_MERGE_4_B(P,c,f,l,ls,r,rs,out,...) ORDER_PP_CM_INVOKE(8SEQ_MERGE_4,P##f,ORDER_PP_UNLESS_##c(,(P##l))P##ls,ORDER_PP_WHEN_##c(,(P##r))P##rs,out##P(ORDER_PP_IF_##c(,P##l,P##r))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_partition ORDER_PP_FN_CM(2,8SEQ_PARTITION_4,,)
#define ORDER_PP_CM_8SEQ_PARTITION_4(P,f,in,ot,of,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##in)(,(,(P##ot,P##of)),ORDER_PP_SEQ_FIRST(,P##in),ORDER_PP_OPEN f##P,8SEQ_PARTITION_4_B,P##f,ORDER_PP_SEQ_AT_0 in##P,P##ot,P##of),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_PARTITION_4_B(P,b,f,x,in,ot,of,...) ORDER_PP_CM_INVOKE(8SEQ_PARTITION_4,P##f,P##in,P##ot ORDER_PP_WHEN_##b(,(P##x)),P##of ORDER_PP_UNLESS_##b(,(P##x))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_select ORDER_PP_FN_CM(3,8REMAP_120,8SEQ_SELECT)
#define ORDER_PP_CM_8SEQ_SELECT(P,y,xs,f,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##xs)(,(,P##y),P##y,ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_FIRST(,P##xs),8SEQ_SELECT_B,P##y,ORDER_PP_SEQ_AT_0 xs##P,P##f),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_SELECT_B(P,b,y,x,...) ORDER_PP_CM_INVOKE(8SEQ_SELECT,ORDER_PP_IF_##b(,P##x,P##y)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8seq_sort ORDER_PP_FN_CM(2,8SEQ_SORT)
#define ORDER_PP_CM_8SEQ_SORT(P,f,s,...) (,(,8WAIT_2,8REMAP_2013,(,P##f,,8SEQ_MERGE_4,)),8SEQ_BUILD,ORDER_PP_SEQ_PARENTHESIZE(,P##s),P##__VA_ARGS__)

#define ORDER_PP_CM_8SEQ_BUILD(P,f,xs,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##xs)(,(,),ORDER_PP_SEQ_FIRST(,P##xs),8SEQ_BUILD_3,P##f,ORDER_PP_EAT xs##P),P##__VA_ARGS__)
#define ORDER_PP_CM_8SEQ_BUILD_3(P,y,f,xs,...) (,ORDER_PP_IS_NOT_EDIBLE(,P##xs)(,(,P##y),ORDER_PP_SEQ_FIRST(,P##xs),ORDER_PP_OPEN f##P,8AP,ORDER_PP_SEQ_SECOND(,P##xs(P##y)),8SEQ_BUILD_3,P##f,ORDER_PP_EAT_2 xs##P(P##y)),P##__VA_ARGS__)

// Details

#define ORDER_PP_SEQ_FIRST(P,s) ORDER_PP_EXPAND(ORDER_PP_SEQ_AT_B,(,ORDER_PP_SEQ_AT_0 P##s))
#define ORDER_PP_SEQ_SECOND(P,s) ORDER_PP_EXPAND(ORDER_PP_SEQ_AT_B,(,ORDER_PP_SEQ_AT_1 P##s))
#define ORDER_PP_SEQ_AT_B(P,_0,...) P##_0
#define ORDER_PP_SEQ_AT_0(x) x,
#define ORDER_PP_SEQ_AT_1(x) ORDER_PP_SEQ_AT_0

#define ORDER_PP_SEQ_PARENTHESIZE(P,s) ORDER_PP_PASTE(ORDER_PP_SEQ_PARENTHESIZE_A P##s,8END)
#define ORDER_PP_SEQ_PARENTHESIZE_A(x) ((x))ORDER_PP_SEQ_PARENTHESIZE_B
#define ORDER_PP_SEQ_PARENTHESIZE_B(x) ((x))ORDER_PP_SEQ_PARENTHESIZE_A
#define ORDER_PP_SEQ_PARENTHESIZE_A8END
#define ORDER_PP_SEQ_PARENTHESIZE_B8END

#define ORDER_PP_EAT_2(...) ORDER_PP_EAT

#endif
