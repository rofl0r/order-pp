#ifndef ORDER_EXAMPLE_IS_INTEGRAL_H
#define ORDER_EXAMPLE_IS_INTEGRAL_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/interpreter.h"

/*
 * This example demonstrates the usage of the Order interpreter for
 * generating C++ code.
 */

/*
 * Here is a template for testing whether a type is an integral type.
 *
 * We also need to define specializations of this template for each
 * integral type and cv-qualifier pair.
 */
template<class T> struct is_integral {
   enum { value = false };
};

/*
 * Here is an ad-hoc code generation macro for defining a specialization
 * of the is_integral<> template.
 *
 * As you can see, the macro expects to receive as parameters a
 * cv-qualifier and a type name. We will generate the cv-qualifier and
 * type name pairs using a simple Order program.
 */
#define GEN_is_integral_specialization(cv, type)        \
template<> struct is_integral<cv type> {                \
  enum { value = true };                                \
};

/*
 * Here we invoke the Order interpreter with a simple ad-hoc program that
 * generates the desired specializations.
 *
 * The key here is the for_each_in_product(F,L) operator, which invokes
 * the (presumably side-effecting) function F for each element of the
 * cartesian product of the tuple of sequences L.
 *
 * The emit_expand(M,P) operator emits the values of M and P as a
 * side-effect. If M evaluates to a function like macro identifier and P
 * evaluates to a tuple, the result is a macro expansion. In this case we
 * expand the previously defined macro to generate a specialization of the
 * is_integral<> template.
 *
 * The output is generated (emitted) backwards from right to left, but it
 * really doesn't matter in this case, as each emit produces a complete
 * specialization, so they can be generated in any desired order.
 */
ORDER_PP(8seq_for_each_in_product
         (8fn(8CV,8TY,
              8emit(8quote(GEN_is_integral_specialization),
                    8tuple(8CV,8TY))),
          8seq(8quote(()(const)(volatile)(const volatile)),
               8seq_append(8quote((char)(wchar_t)),
                           8let(8TS,8quote((char)(short)(int)(long)),
                                8seq_append(8TS,
                                            8seq_map(8fn(8TY,
                                                         8expand(8quote(unsigned),8TY)),
                                                     8TS)))))))

#undef GEN_is_integral_specialization

#endif
