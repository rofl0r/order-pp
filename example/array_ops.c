/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#include "order/interpreter.h"

/*
 * PROCEDURES FOR ARRAY MANIPULATION
 * =================================
 *
 * This example shows how metadata can be used for directing code
 * generation. We use metadata to direct the generation of procedures for
 * 1-dimensional array manipulation in C.
 *
 * What we mean by an array manipulation procedure is simply a procedure
 * that takes an array (or two), applies an operation to each element (or
 * pairs of elements) and writes the result to another array.
 */

/*
 * Unary array manipulation procedures
 * -----------------------------------
 *
 * An unary array manipulation procedure takes a single array as input,
 * applies an unary operator to the elements of the array and writes the
 * results to another array. For example, the unary array manipulation
 * procedure array_neg_si(...)
 */

#if 0
void array_neg_si(const signed int* in,
                  signed int* out,
                  int n) {
  if (n > 0) do {
    *out++ = op *in++;
  } while (--n);
}
#endif

/*
 * takes an array of signed integers, negates each element and writes the
 * result to another array.
 *
 * The general form of an unary array manipulation operator is captured by
 * the GEN_array_uop(...) macro:
 */

#define GEN_array_uop(mnemo, op, in_a, in_t, out_t)     \
void array_##mnemo##_##in_a(const in_t* in,             \
                            out_t* out,                 \
                            int n) {                    \
  if (n > 0) do {                                       \
    *out++ = op *in++;                                  \
  } while (--n);                                        \
}

/*
 * Given an
 * - operation mnemonic,
 * - an operator symbol (e.g. -),
 * - an abbreviation of the input array element type,
 * - the input array element type, and
 * - the output array element type,
 * the GEN_array_uop(...) macro expands to an unary array manipulation
 * procedure.
 */

/*
 * Binary array manipulation procedures
 * ------------------------------------
 *
 * A binary array manipulation procedure takes two arrays as input,
 * applies a binary operator to the corresponding elements of the arrays
 * and then writes result to a third array. For example, the binary array
 * manipulation procedure array_add_ss_ss(...)
 */

#if 0
void array_add_ss_ss(const signed short* lhs_in,
                     const signed short* rhs_in,
                     signed int* out,
                     int n) {
  if (n > 0) do {
    *out++ = *lhs_in + *rhs_in;
    ++lhs_in;
    ++rhs_in;
  } while (--n);
}
#endif

/*
 * takes two arrays of signed short integers, adds each pair of elements,
 * and writes the result to an array of signed integers.
 *
 * In general, the form of a binary array manipulation procedure is
 * captured by the GEN_array_bop(...) macro:
 */

#define GEN_array_bop(mnemo, op, lhs_a, lhs_t, rhs_a, rhs_t, out_t)     \
void array_##mnemo##_##lhs_a##_##rhs_a(const lhs_t* lhs_in,             \
                                       const rhs_t* rhs_in,             \
                                       out_t* out,                      \
                                       int n) {                         \
  if (n > 0) do {                                                       \
    *out++ = *lhs_in op *rhs_in;                                        \
    /* Note short circuit logic operators. */                           \
    ++lhs_in;                                                           \
    ++rhs_in;                                                           \
  } while (--n);                                                        \
}

/*
 * Given an
 * - operation mnemonic,
 * - an operator symbol (e.g. +),
 * - an abbreviation of the left hand side input array element type and
 * - array element type,
 * - an abbreviation of the right hand side input array element type and
 * - array element type, and
 * - the output array element type,
 * the GEN_array_bop(...) macro expands to a binary array manipulation
 * procedure.
 */

/*
 * The goal
 * --------
 *
 * We'd like to have array manipulation procedures for all sensible
 * combinations of operators, both unary and binary, and types. We'd also
 * like that the type of the output array would match the type of the
 * result of the operation. For example, the type of the result of adding
 * a signed short and a float should be a float.
 * 
 * Even with the aid of the GEN_array_uop(...) and GEN_array_bop(...)
 * macros there would still be a lot of repetitive manual work, because
 * the number of sensible combinations is too great (the generator in this
 * example generates 33 unary procedures and 2214 binary procedures).
 * Instead of manually invoking the code generation macros for each
 * combination, we'd like to have a metaprogram that invokes the code
 * generation macros for all sensible combinations of operators and types.
 */

/*
 * Type promotion and conversion rules
 * -----------------------------------
 *
 * The rules for determining the type of an operation are specified in the
 * C standard [C89]. In order for our generator to be intelligent about
 * the type of the result of an array operation, we need to translate
 * those rules into computable metafunctions.
 *
 * At this point, it isn't clear what kind of metadata we need on types
 * and operators, so let's invent the necessary metafunctions as the need
 * arises and specify the representation of types after we know what kind
 * of metadata we need.
 *
 * Firsts we'd like to encode the rules for integer promotion on an unary
 * operation. Rephrasing the C standard, if the rank of the operand type
 * is lower than the rank of int then the result of integer promotion is
 * int, otherwise the type of integer promotion is the type of the
 * operand. The type_of_promotion(T) metafunction
 */

#define ORDER_DEF_type_of_promotion             \
ORDER_OP(fn(T,                                  \
            if(less(type_rank(T),               \
                    type_rank(type_int)),       \
               type_int,                        \
               T)))

/*
 * encodes the rule precisely. As you can see, we invented the function
 * type_rank(T), which just returns the rank of the specified type as an
 * integer.
 *
 * The rule for usual arithmetic conversion on a binary operation is that
 * the type of usual artithetic conversion is the type of the higher rank
 * type after integer promotion. The rule translates to the
 * type_of_conversion(L,R) metafunction below:
 */

#define ORDER_DEF_type_of_conversion                    \
ORDER_OP(fn(L,R,                                        \
            type_of_promotion(if(less(type_rank(L),     \
                                      type_rank(R)),    \
                                 R,                     \
                                 L))))

/*
 * Integer promotion and usual arithmetic conversion rules ignore the
 * operator. For the actual type of an operation, we will also need to
 * consider the operator.
 *
 * In C [C89], logical operators produce integer results. The type of an
 * unary operation is thus integer if the operator is logical. Otherwise
 * the type of an unary operation follows the promotion rules. The
 * type_of_uop(O,T) metafunction captures this special case:
 */

#define ORDER_DEF_type_of_uop                   \
ORDER_OP(fn(O,T,                                \
            if(op_is_logical(O),                \
               type_int,                        \
               type_of_promotion(T))))

/*
 * Like unary logical operators, binary logical operators produce integer
 * results. Also, if the operator is a shift, then the type of the result
 * is the type of the left hand side operand after promotion. Otherwise
 * the arithmetic conversion rules apply. The rules translate to the
 * type_of_bop(O,L,R) metafunction:
 */

#define ORDER_DEF_type_of_bop                   \
ORDER_OP(fn(O,L,R,                              \
            if(op_is_logical(O),                \
               type_int,                        \
               if(op_is_shift(O),               \
                  type_of_promotion(L),         \
                  type_of_conversion(L,R)))))

/*
 * Given an operator and the types of the operands, we can now compute the
 * type of the result.
 */

/*
 * The representation of types and operators
 * -----------------------------------------
 *
 * In the previous section we simply invented primitive operations on
 * types and operators as we went along. We also know from the arguments
 * of the code generation macros GEN_array_uop(...) and GEN_array_bop(...)
 * that we need certain metadata on types and operators.
 *
 * Considering the requirements, we will present an operator by a 6-tuple
 * of the form
 *
 *   (symbol, mnemonic, arity, does_floating, is_logical, is_shift).
 *
 * We can now implement the primitive metafunctions, some of which we
 * already used earlier, on operators.
 */

#define ORDER_DEF_op_symbol(o)        ORDER_MACRO(tuple_at(o,0))
#define ORDER_DEF_op_mnemonic(o)      ORDER_MACRO(tuple_at(o,1))
#define ORDER_DEF_op_arity(o)         ORDER_MACRO(tuple_at(o,2))
#define ORDER_DEF_op_does_floating(o) ORDER_MACRO(tuple_at(o,3))
#define ORDER_DEF_op_is_logical(o)    ORDER_MACRO(tuple_at(o,4))
#define ORDER_DEF_op_is_shift(o)      ORDER_MACRO(tuple_at(o,5))

/*
 * We will also encode the metadata on all the applicative operators we
 * will consider in the applicative_ops sequence.
 */

#define ORDER_DEF_applicative_ops                       \
ORDER_CONST((( ~  , bit_not, 1, false, false, false ))  \
            (( -  , neg    , 1, true , false, false ))  \
            (( !  , not    , 1, true , true , false ))  \
            (( *  , mul    , 2, true , false, false ))  \
            (( /  , div    , 2, true , false, false ))  \
            (( +  , add    , 2, true , false, false ))  \
            (( -  , sub    , 2, true , false, false ))  \
            (( %  , mod    , 2, false, false, false ))  \
            (( << , shl    , 2, false, false, true  ))  \
            (( >> , shr    , 2, false, false, true  ))  \
            (( <  , lt     , 2, true , true , false ))  \
            (( <= , lt_eq  , 2, true , true , false ))  \
            (( >  , gt     , 2, true , true , false ))  \
            (( >= , gt_eq  , 2, true , true , false ))  \
            (( == , equal  , 2, true , true , false ))  \
            (( != , not_eq , 2, true , true , false ))  \
            (( &  , bit_and, 2, false, false, false ))  \
            (( |  , bit_or , 2, false, false, false ))  \
            (( ^  , bit_xor, 2, false, false, false ))  \
            (( && , and    , 2, true , true , false ))  \
            (( || , or     , 2, true , true , false )))

/*
 * The requirements for types are somewhat less demanding and we'll do
 * with 4-tuple of the form
 *
 *   (name, abbreviation, is_floating, rank).
 *
 * The following defines accessors for the type data type.
 */

#define ORDER_DEF_type_name(t)        ORDER_MACRO(tuple_at(t,0))
#define ORDER_DEF_type_abbrev(t)      ORDER_MACRO(tuple_at(t,1))
#define ORDER_DEF_type_is_floating(t) ORDER_MACRO(tuple_at(t,2))
#define ORDER_DEF_type_rank(t)        ORDER_MACRO(tuple_at(t,3))

/*
 * While encoding the metadata for types, we must specify the type_int
 * separately. We'll make a point of encoding the signed int type only
 * once.
 */

#define ORDER_DEF_type_int                      \
ORDER_CONST( (     signed int, si, false, 3 ) )

#define ORDER_DEF_builtin_types                 \
ORDER_CONST(((           char, ch, false, 1 ))  \
            ((    signed char, sc, false, 1 ))  \
            ((  unsigned char, uc, false, 1 ))  \
            ((   signed short, ss, false, 2 ))  \
            (( unsigned short, us, false, 2 ))  \
            (ORDER_GET_CONST(type_int)       )  \
            ((   unsigned int, ui, false, 4 ))  \
            ((    signed long, sl, false, 5 ))  \
            ((  unsigned long, ul, false, 6 ))  \
            ((          float, fl,  true, 7 ))  \
            ((         double, db,  true, 8 ))  \
            ((    long double, ld,  true, 9 )))

/*
 * Generating code
 * ---------------
 *
 * In order to generate the code for all valid combinations of operators
 * and types, we could produce all combinations of one operator and two
 * types and then figure out which of those combinations make sense. While
 * such an approach would technically work, it would be quite inefficient,
 * because many of the combinations do not make sense. Unary operators
 * need only one type, and certain operators do not work on floating point
 * types. So, we'll break the generation into a few cases.
 *
 * Let's first define a helper metafunction for emitting the code for an
 * unary operator. The gen_array_uop(O,T) metafunction
 */

#define ORDER_DEF_gen_array_uop                                 \
ORDER_OP(fn(O,T,                                                \
            emit_expand(const(GEN_array_uop),                   \
                        tuple(op_mnemonic(O),                   \
                              op_symbol(O),                     \
                              type_abbrev(T),                   \
                              type_name(T),                     \
                              type_name(type_of_uop(O,T))))))

/*
 * computes the parameter tuple for the GEN_array_uop(...) code generation
 * macro and then emits the expansion.
 *
 * We now generate code for all unary array procedures by invoking the
 * gen_array_uop(O,T) metafunction in two batches. First
 * for the non-floating point operators and non-floating point types.
 */

ORDER(seq_for_each_in_product
      (gen_array_uop,
       tuple(seq_filter(fn(O,
                           and(equal(1,op_arity(O)),
                               not(op_does_floating(O)))),
                        applicative_ops),
             seq_filter(fn(O,
                           not(type_is_floating(O))),
                        builtin_types))))

/*
 * Then for the floating point operators and all types.
 */

ORDER(seq_for_each_in_product
      (gen_array_uop,
       tuple(seq_filter(fn(O,
                           and(equal(1,op_arity(O)),
                               op_does_floating(O))),
                        applicative_ops),
             builtin_types)))

/*
 * We'll then handle binary operations similarly. First we define the
 * metafunction gen_array_bop(O,L,R):
 */

#define ORDER_DEF_gen_array_bop                                 \
ORDER_OP(fn(O,L,R,                                              \
            emit_expand(const(GEN_array_bop),                   \
                        tuple(op_mnemonic(O),                   \
                              op_symbol(O),                     \
                              type_abbrev(L),                   \
                              type_name(L),                     \
                              type_abbrev(R),                   \
                              type_name(R),                     \
                              type_name(type_of_bop(O,L,R))))))

/*
 * Then we'll generate code for all binary array procedures in two
 * batches. First the non-floating point operators:
 */

ORDER(seq_for_each_in_product
      (gen_array_bop,
       let(T,seq_filter(fn(T,
                           not(type_is_floating(T))),
                        builtin_types),
           tuple(seq_filter(fn(O,
                               and(equal(2,op_arity(O)),
                                   not(op_does_floating(O)))),
                            applicative_ops),
                 T,
                 T))))

/*
 * Then the floating point operators:
 */

ORDER(seq_for_each_in_product
      (gen_array_bop,
       tuple(seq_filter(fn(O,
                           and(equal(2,op_arity(O)),
                               op_does_floating(O))),
                        applicative_ops),
             builtin_types,
             builtin_types)))

/*
 * That's it! Who needs templates anyway?
 */

/*
 * Exercises
 * ---------
 *
 * 1. It turns out that the new C standard [C99] defines several new types
 *    including long long and _Bool. Update the generator to generate code
 *    for these new types. Reconsider the type promotion and conversion
 *    rules as well as operator validity carefully.
 *
 * 2. Commutative operators, like + and |, produce the same result
 *    regardless of the order of the two parameters while the result of
 *    non-commutative operators, like / and <<, depends on the order of
 *    parameters. The generator we built in this example generates code
 *    for all ordered pairs of types. This means that we generate nearly
 *    twice as many procedures as needed for commutative operators. For
 *    example, we generate the procedures array_add_si_fl(...) and
 *    array_add_fl_si(...) of which only one is necessary. Modify the
 *    generator so that it doesn't generate unnecessary procedures. (Hint:
 *    Specify an ordering relation on types and generate code for an
 *    operator only when the left hand side type precedes the right hand
 *    side type.)
 *
 * 3. In order to call the generated procedures from other translation
 *    units, we need a header with prototypes for all the procedures.
 *    Write code to generate the prototypes for all procedures. Then
 *    refactor the code into a separate header and implementation file.
 */
