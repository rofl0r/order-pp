#ifndef ORDER_TEST_TEST_DEFS_H_VAJK20040620
#define ORDER_TEST_TEST_DEFS_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "order/lib.h"

////////////////////////////////////////////////////////////////////

#define ORDER_PP_DEF_8macro_error_neither_nil_nor_paren \
ORDER_PP_MACRO(syntax_error)

#define ORDER_PP_DEF_8macro_error_nil \
ORDER_PP_MACRO()

#define ORDER_PP_DEF_8macro_error_paren \
ORDER_PP_MACRO((1))

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

#define REC_FAILURE()    ORDER_PP(8emit(8(REC_FAILURE_1),8(())))
#define REC_FAILURE_1()  ORDER_PP(8emit(8(REC_FAILURE_2),8(())))
#define REC_FAILURE_2()  ORDER_PP(8emit(8(REC_FAILURE_3),8(())))
#define REC_FAILURE_3()  ORDER_PP(8emit(8(REC_FAILURE_4),8(())))
#define REC_FAILURE_4()  ORDER_PP(8emit(8(REC_FAILURE_5),8(())))
#define REC_FAILURE_5()  ORDER_PP(8emit(8(REC_FAILURE_6),8(())))
#define REC_FAILURE_6()  ORDER_PP(8emit(8(REC_FAILURE_7),8(())))
#define REC_FAILURE_7()  ORDER_PP(8emit(8(REC_FAILURE_8),8(())))
#define REC_FAILURE_8()  ORDER_PP(8emit(8(REC_FAILURE_9),8(())))
#define REC_FAILURE_9()  ORDER_PP(8emit(8(REC_FAILURE_10),8(())))
#define REC_FAILURE_10() ORDER_PP(8emit(8(REC_FAILURE_11),8(())))
#define REC_FAILURE_11() ORDER_PP(8emit(8(REC_FAILURE_12),8(())))
#define REC_FAILURE_12() ORDER_PP(8emit(8(REC_FAILURE_13),8(())))
#define REC_FAILURE_13() ORDER_PP(8emit(8(REC_FAILURE_14),8(())))
#define REC_FAILURE_14() ORDER_PP(8emit(8(REC_FAILURE_15),8(())))
#define REC_FAILURE_15() ORDER_PP(8emit(8(REC_FAILURE_16),8(())))
#define REC_FAILURE_16() ORDER_PP(8emit(8(REC_FAILURE_17),8(())))
#define REC_FAILURE_17() ORDER_PP(8emit(8(REC_FAILURE_18),8(())))
#define REC_FAILURE_18() ORDER_PP(8emit(8(REC_FAILURE_19),8(())))
#define REC_FAILURE_19() ORDER_PP(8emit(8(REC_FAILURE_20),8(())))
#define REC_FAILURE_20() ORDER_PP(8emit(8(REC_FAILURE_21),8(())))
#define REC_FAILURE_21() ORDER_PP(8emit(8(REC_FAILURE_22),8(())))
#define REC_FAILURE_22() ORDER_PP(8emit(8(REC_FAILURE_23),8(())))
#define REC_FAILURE_23() ORDER_PP(8emit(8(REC_FAILURE_24),8(())))
#define REC_FAILURE_24() ORDER_PP(8emit(8(REC_FAILURE_25),8(())))
#define REC_FAILURE_25() ORDER_PP(8emit(8(REC_FAILURE_26),8(())))
#define REC_FAILURE_26() ORDER_PP(8emit(8(REC_FAILURE_27),8(())))
#define REC_FAILURE_27() ORDER_PP(8emit(8(REC_FAILURE_28),8(())))
#define REC_FAILURE_28() ORDER_PP(8emit(8(REC_FAILURE_29),8(())))
#define REC_FAILURE_29() ORDER_PP(8emit(8(REC_FAILURE_30),8(())))
#define REC_FAILURE_30() ORDER_PP(8emit(8(REC_FAILURE_31),8(())))
#define REC_FAILURE_31() ORDER_PP(8emit(8(REC_FAILURE_32),8(())))
#define REC_FAILURE_32() ORDER_PP(8emit(8(REC_FAILURE_33),8(())))
#define REC_FAILURE_33() ORDER_PP(8emit(8(REC_FAILURE_34),8(())))
#define REC_FAILURE_34() ORDER_PP(8emit(8(REC_FAILURE_35),8(())))
#define REC_FAILURE_35() ORDER_PP(8emit(8(REC_FAILURE_36),8(())))
#define REC_FAILURE_36() ORDER_PP(8emit(8(REC_FAILURE_37),8(())))
#define REC_FAILURE_37() ORDER_PP(8emit(8(REC_FAILURE_38),8(())))
#define REC_FAILURE_38() ORDER_PP(8emit(8(REC_FAILURE_39),8(())))
#define REC_FAILURE_39() ORDER_PP(8emit(8(REC_FAILURE_40),8(())))
#define REC_FAILURE_40() ORDER_PP(8emit(8(REC_FAILURE_41),8(())))
#define REC_FAILURE_41() ORDER_PP(8emit(8(REC_FAILURE_42),8(())))
#define REC_FAILURE_42() ORDER_PP(8emit(8(REC_FAILURE_43),8(())))
#define REC_FAILURE_43() ORDER_PP(8emit(8(REC_FAILURE_44),8(())))
#define REC_FAILURE_44() ORDER_PP(8emit(8(REC_FAILURE_45),8(())))
#define REC_FAILURE_45() ORDER_PP(8emit(8(REC_FAILURE_46),8(())))
#define REC_FAILURE_46() ORDER_PP(8emit(8(REC_FAILURE_47),8(())))
#define REC_FAILURE_47() ORDER_PP(8emit(8(REC_FAILURE_48),8(())))
#define REC_FAILURE_48() ORDER_PP(8emit(8(REC_FAILURE_49),8(())))
#define REC_FAILURE_49() ORDER_PP(8emit(8(REC_FAILURE_50),8(())))
#define REC_FAILURE_50() ORDER_PP(8emit(8(REC_FAILURE_51),8(())))
#define REC_FAILURE_51() ORDER_PP(8emit(8(REC_FAILURE_52),8(())))
#define REC_FAILURE_52() ORDER_PP(8emit(8(REC_FAILURE_53),8(())))
#define REC_FAILURE_53() ORDER_PP(8emit(8(REC_FAILURE_54),8(())))
#define REC_FAILURE_54() ORDER_PP(8emit(8(REC_FAILURE_55),8(())))
#define REC_FAILURE_55() ORDER_PP(8emit(8(REC_FAILURE_56),8(())))
#define REC_FAILURE_56() ORDER_PP(8emit(8(REC_FAILURE_57),8(())))
#define REC_FAILURE_57() ORDER_PP(8emit(8(REC_FAILURE_58),8(())))
#define REC_FAILURE_58() ORDER_PP(8emit(8(REC_FAILURE_59),8(())))
#define REC_FAILURE_59() ORDER_PP(8emit(8(REC_FAILURE_60),8(())))
#define REC_FAILURE_60() ORDER_PP(8emit(8(REC_FAILURE_61),8(())))
#define REC_FAILURE_61() ORDER_PP(8emit(8(REC_FAILURE_62),8(())))
#define REC_FAILURE_62() ORDER_PP(8emit(8(REC_FAILURE_63),8(())))
#define REC_FAILURE_63() ORDER_PP(8emit(8(REC_FAILURE_64),8(())))
#define REC_FAILURE_64() ORDER_PP(8emit(8(REC_FAILURE_65),8(())))
#define REC_FAILURE_65() ORDER_PP(8emit(8(REC_FAILURE_66),8(())))
#define REC_FAILURE_66() ORDER_PP(8emit(8(REC_FAILURE_67),8(())))
#define REC_FAILURE_67() ORDER_PP(8emit(8(REC_FAILURE_68),8(())))
#define REC_FAILURE_68() ORDER_PP(8emit(8(REC_FAILURE_69),8(())))
#define REC_FAILURE_69() ORDER_PP(8emit(8(REC_FAILURE_70),8(())))

////////////////////////////////////////////////////////////////////

#endif
