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
 * Introduction
 * ------------
 *
 * What we mean by an array manipulation procedure is simply a procedure
 * that takes an array (or two), applies an operation to each element (or
 * pairs of elements) and writes the result to another array.
 *
 * An unary array manipulation procedure takes a single array as input,
 * applies an unary operator to the elements of the array and writes the
 * results to another array. For example, the unary array manipulation
 * procedure 'array_neg_si(...)'
 */

#if 0
void array_neg_si(const signed int* in,
                  signed int* out,
                  int n) {
  if (n > 0) do {
    *out++ = - *in++;
  } while (--n);
}
#endif

/*
 * takes an array of signed integers, negates each element and writes the
 * result to another array.
 *
 * The general form of an unary array manipulation operator is captured by
 * the 'GEN_array_uop(...)' macro:
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
 * - an operator symbol (e.g. '-'),
 * - an abbreviation of the input array element type,
 * - the input array element type, and
 * - the output array element type,
 * the 'GEN_array_uop(...)' macro expands to an unary array manipulation
 * procedure.
 *
 * A binary array manipulation procedure takes two arrays as input,
 * applies a binary operator to the corresponding elements of the arrays
 * and then writes result to a third array. For example, the binary array
 * manipulation procedure 'array_add_ss_ss(...)'
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
 * The general form of a binary array manipulation procedure is captured
 * by the 'GEN_array_bop(...)' macro:
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
 * the 'GEN_array_bop(...)' macro expands to a binary array manipulation
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
 * Even with the aid of the 'GEN_array_uop(...)' and 'GEN_array_bop(...)'
 * macros there would still be a lot of repetitive manual work, because
 * the number of sensible combinations is too great. In fact, the
 * generator that we develop in this example generates a total of 33 unary
 * procedures and a whopping 2214 binary procedures. So, instead of
 * manually invoking the code generation macros for each combination, we'd
 * like to have a metaprogram that invokes the code generation macros for
 * all sensible combinations of operators and types.
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
 * First we'd like to encode the rules for integer promotion on an unary
 * operation. Rephrasing the C standard, if the rank of the operand type
 * is lower than the rank of int then the result of integer promotion is
 * int, otherwise the type of integer promotion is the type of the
 * operand. The 'type_of_promotion(T)' metafunction
 */

#define ORDER_PP_DEF_type_of_promotion          \
ORDER_PP_FN(fn(T,                               \
               if(less(type_rank(T),            \
                       type_rank(type_int)),    \
                  type_int,                     \
                  T)))

/*
 * encodes the rule precisely.
 *
 * Let's examine the 'type_of_promotion(T)' function definition. The first
 * thing you should notice is that we essentially defined an object-like
 * macro of the form
 */
#if 0
#define ORDER_PP_DEF_<name> ORDER_PP_FN(<fn-expression>)
#endif
/*
 * The above is the general form of top-level Order function definitions.
 * We will not discuss the implementation details of the Order interpreter
 * in this example, but a short explanation might be in order. The prefix
 * 'ORDER_PP_DEF_' is used for all Order expression definitions. The
 * purpose of the prefix is to allow an interpreter to deconstruct
 * expressions in order to evaluate them. The prefix also prevents
 * accidental macro replacement. The 'ORDER_PP_FN' is used to denote that
 * the definition is specifically a function definition. We will later see
 * constant definitions, which use 'ORDER_PP_CONST', and so called macro
 * definitions, which use 'ORDER_PP_MACRO'.
 *
 * The <fn-expression> of a function definition must define an anonymous
 * function. Anonymous function definitions have the general form:
 *
 *      fn(<var-1>, ..., <var-n>, <expression>)
 *
 * A function must have at least one argument and exactly one expression,
 * the body of the function, must follow the arguments.
 *
 * By default, only the tokens '[A-Z]', or an uppercase letter, may be
 * used as variable symbols. By including an extension header, the set of
 * supported variable symbols can be extended to '[A-Z][a-z0-9]?', which
 * means an uppercase letter followed by a lowercase letter or a digit.
 * Other tokens can also be used given appropriate macro definitions.
 *
 * A conditional if-expression in Order has the form:
 *
 *   if(<cond-exp>, <cons-exp>, <alt-exp>)
 *
 * If-expressions in Order behave just like in other strict programming
 * languages. The <cond-exp> subexpression is evaluated first and if it
 * evaluates to true, then <cons-exp> is evaluated, otherwise <alt-exp> is
 * evaluated.
 *
 * The body of the 'type_of_promotion(T)' function also contains calls to
 * other functions. The binary function 'less' compares numbers. The unary
 * function 'type_rank', which we just invented, is supposed to return the
 * rank of the specified type as an integer.
 *
 * As you have figured out by now, the syntax of the Order language is
 * very much like the syntax of any ordinary programming language, except
 * that top-level definitions are embedded in C preprocessor macro
 * definitions of a particular form.
 *
 * We'll now continue encoding the typing rules of C. The rule for usual
 * arithmetic conversion on a binary operation is that the type of the
 * result is the type of the higher ranking type after integer promotion.
 * The rule translates to the 'type_of_conversion(L,R)' metafunction
 * below:
 */

#define ORDER_PP_DEF_type_of_conversion                 \
ORDER_PP_FN(fn(L,R,                                     \
               type_of_promotion(if(less(type_rank(L),  \
                                         type_rank(R)), \
                                    R,                  \
                                    L))))

/*
 * Integer promotion and usual arithmetic conversion rules ignore the
 * operator. For the actual type of an operation, we will also need to
 * consider the operator.
 *
 * In C [C89], logical operators produce integer results. The type of an
 * unary operation is thus integer if the operator is logical. Otherwise
 * the type of an unary operation follows the promotion rules. The
 * 'type_of_uop(O,T)' metafunction captures this special case:
 */

#define ORDER_PP_DEF_type_of_uop                \
ORDER_PP_FN(fn(O,T,                             \
               if(op_is_logical(O),             \
                  type_int,                     \
                  type_of_promotion(T))))

/*
 * Like unary logical operators, binary logical operators produce integer
 * results. Also, if the operator is a shift, then the type of the result
 * is the type of the left hand side operand after promotion. Otherwise
 * the arithmetic conversion rules apply. The rules translate to the
 * 'type_of_bop(O,L,R)' metafunction:
 */

#define ORDER_PP_DEF_type_of_bop                        \
ORDER_PP_FN(fn(O,L,R,                                   \
               if(op_is_logical(O),                     \
                  type_int,                             \
                  if(op_is_shift(O),                    \
                     type_of_promotion(L),              \
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
 * of the code generation macros 'GEN_array_uop(...)' and
 * 'GEN_array_bop(...)' that we need certain metadata on types and
 * operators.
 *
 * Considering the requirements, we will represent an operator by a
 * 6-tuple of the form
 *
 *   (symbol, mnemonic, arity, does_floating, is_logical, is_shift).
 *
 * A tuple, in general, is represented simply by a parenthesized list of
 * comma separated elements. A 6-tuple simply has 6 elements.
 *
 * We can now implement the primitive metafunctions, some of which we
 * already used earlier, on operators. They are just simple projection
 * operators on tuples.
 */

#define ORDER_PP_DEF_op_symbol(o)        ORDER_PP_MACRO(tuple_at(o,0))
#define ORDER_PP_DEF_op_mnemonic(o)      ORDER_PP_MACRO(tuple_at(o,1))
#define ORDER_PP_DEF_op_arity(o)         ORDER_PP_MACRO(tuple_at(o,2))
#define ORDER_PP_DEF_op_does_floating(o) ORDER_PP_MACRO(tuple_at(o,3))
#define ORDER_PP_DEF_op_is_logical(o)    ORDER_PP_MACRO(tuple_at(o,4))
#define ORDER_PP_DEF_op_is_shift(o)      ORDER_PP_MACRO(tuple_at(o,5))

/*
 * As you should have noticed, the above definitions aren't function
 * definitions, they are so called Order macro definitions. You might have
 * also noticed that the above definitions are function-like macros. This
 * is typical of Order macro definitions. Order macro definitions are
 * essentially simple rewrite rules like ordinary C preprocessor macros.
 * Macro definitions are evaluated as if the right hand side immediately
 * appeared in place of the left hand side--there is no function call
 * overhead. However, macros are otherwise more limited than functions. In
 * particular, Order macros can not, in general, be partially applied,
 * which should be intuitive, because the interpreter really doesn't see
 * them at all.
 *
 * We will also encode the metadata on all the applicative operators we
 * will consider into the 'applicative_ops' constant as a sequence.
 */

#define ORDER_PP_DEF_applicative_ops                            \
ORDER_PP_CONST((( ~  , compl , 1, false, false, false ))        \
               (( -  , neg   , 1,  true, false, false ))        \
               (( !  , not   , 1,  true,  true, false ))        \
               (( *  , mul   , 2,  true, false, false ))        \
               (( /  , div   , 2,  true, false, false ))        \
               (( +  , add   , 2,  true, false, false ))        \
               (( -  , sub   , 2,  true, false, false ))        \
               (( %  , mod   , 2, false, false, false ))        \
               (( << , shl   , 2, false, false,  true ))        \
               (( >> , shr   , 2, false, false,  true ))        \
               (( <  , lt    , 2,  true,  true, false ))        \
               (( <= , lt_eq , 2,  true,  true, false ))        \
               (( >  , gt    , 2,  true,  true, false ))        \
               (( >= , gt_eq , 2,  true,  true, false ))        \
               (( == , equal , 2,  true,  true, false ))        \
               (( != , not_eq, 2,  true,  true, false ))        \
               (( &  , bitand, 2, false, false, false ))        \
               (( |  , bitor , 2, false, false, false ))        \
               (( ^  , bitxor, 2, false, false, false ))        \
               (( && , and   , 2,  true,  true, false ))        \
               (( || , or    , 2,  true,  true, false )))

/*
 * The above is a constant definition, as denoted by the use of
 * 'ORDER_PP_CONST'. A constant can be any sequence of C preprocessor
 * tokens that is valid as a macro parameter. This basically means that a
 * constant may not contain unbalanced parentheses or unparenthesized
 * commas.
 *
 * As we said, the 'applicative_ops' constant is a so called sequence.
 * In general, a sequence is an aggregate data type of the form
 *
 *   (<pp-param-1>) (<pp-param-2>) ... (<pp-param-n>)
 *
 * So, the 'applicative_ops' constant is just an aggregate, represented by
 * a sequence, of 21 elements, each of which is 6-tuple representing an
 * operator.
 *
 * You should also note that boolean values are denoted by 'true' and
 * 'false'.
 *
 * The requirements for types are somewhat less demanding and we'll do
 * with 4-tuple of the form
 *
 *   (name, abbreviation, is_floating, rank).
 *
 * The following defines accessors for the type data type.
 */

#define ORDER_PP_DEF_type_name(t)        ORDER_PP_MACRO(tuple_at(t,0))
#define ORDER_PP_DEF_type_abbrev(t)      ORDER_PP_MACRO(tuple_at(t,1))
#define ORDER_PP_DEF_type_is_floating(t) ORDER_PP_MACRO(tuple_at(t,2))
#define ORDER_PP_DEF_type_rank(t)        ORDER_PP_MACRO(tuple_at(t,3))

/*
 * While encoding the metadata for types, we must specify the 'type_int'
 * separately. We'll make a point of encoding the data only once.
 */

#define ORDER_PP_DEF_type_int                           \
ORDER_PP_CONST( (     signed int, si, false, 3 ) )

#define ORDER_PP_DEF_builtin_types                      \
ORDER_PP_CONST(((           char, ch, false, 1 ))       \
               ((    signed char, sc, false, 1 ))       \
               ((  unsigned char, uc, false, 1 ))       \
               ((   signed short, ss, false, 2 ))       \
               (( unsigned short, us, false, 2 ))       \
               (ORDER_PP_GET_CONST(type_int)    )       \
               ((   unsigned int, ui, false, 4 ))       \
               ((    signed long, sl, false, 5 ))       \
               ((  unsigned long, ul, false, 6 ))       \
               ((          float, fl,  true, 7 ))       \
               ((         double, db,  true, 8 ))       \
               ((    long double, ld,  true, 9 )))

/*
 * Above, 'ORDER_PP_GET_CONST' is C preprocessor macro that extracts the
 * value of an Order constant definition. It is useful in situations like
 * this, where we would otherwise need to introduce duplication.
 *
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
 * unary operator. The 'gen_array_uop(O,T)' metafunction
 */

#define ORDER_PP_DEF_gen_array_uop                              \
ORDER_PP_FN(fn(O,T,                                             \
               emit(quote(GEN_array_uop),                       \
                    tuple(op_mnemonic(O),                       \
                          op_symbol(O),                         \
                          type_abbrev(T),                       \
                          type_name(T),                         \
                          type_name(type_of_uop(O,T))))))

/*
 * computes the parameter tuple for the 'GEN_array_uop(...)' code
 * generation macro and then emits the expansion.
 *
 * There are two rather significant new things in the above function. First
 * of all, 'quote' is a special form, which allows you to define constants
 * inline. The parameter to 'quote' can be any preprocessor parameter,
 * like in ordinary top-level constant definitions. 'quote' then simply
 * evaluates to that preprocessor parameter. You might wonder why we need
 * to use 'quote' here. The reason is simple. There is no Order definition
 * for 'GEN_array_uop', hence the interpreter knows nothing about
 * 'GEN_array_uop', and can not interpret it. Therefore we must quote it
 * so that the interpreter will not try to interpret it. Of course, we
 * could have alternatively introduced a constant definition for
 * 'GEN_array_uop', but since we are not going to refer to it many times,
 * it is more convenient to just use 'quote'.
 *
 * The side-effecting 'emit' operator is different from the functions we
 * have used so far. It is used to produce output as a side-effect. The
 * 'emit' operator essentially places all of the given parameters,
 * separated only by whitespace, to the left of what has been emitted so
 * far. For example,
 *
 *    emit(1,2)
 *
 * would produce the output
 *
 *    1 2
 *
 * In the 'gen_array_uop' metafunction, the first parameter to 'emit' is
 * the name of a macro, 'GEN_array_uop', and the second parameter is a
 * tuple that matches the arguments of 'GEN_array_uop'. As you might
 * guess, this results in expanding the macro 'GEN_array_uop'. This is how
 * the Order interpreter can be used for generating complex output. You
 * first design a set of ad hoc code generation macros that capture the
 * general form of the desired output. Then you design an Order program
 * that emits expansions of the ad hoc code generation macros.
 *
 * We now generate code for all unary array procedures by invoking the
 * 'gen_array_uop(O,T)' metafunction in two batches. First for the
 * non-floating point operators and non-floating point types.
 */

ORDER_PP(seq_for_each_in_product
         (gen_array_uop,
          seq(seq_filter(fn(O,
                            and(equal(1,op_arity(O)),
                                not(op_does_floating(O)))),
                         applicative_ops),
              seq_filter(fn(T,
                            not(type_is_floating(T))),
                         builtin_types))))

/*
 * The Order interpreter is invoked using the 'ORDER_PP' macro. It takes
 * as an argument an Order expression and evaluates it. The above
 * expression uses the higher-order sequence manipulation functions
 * 'seq_for_each_in_product(Op,Ss)' and 'seq_filter(Pr,S)'.
 *
 * The 'seq_filter(Pr,S)' function takes an unary predicate function and a
 * sequence and produces a new sequence which contains only the elements
 * of the given sequence that satisfy the given predicate.
 *
 * The 'seq_for_each_in_product(Op,Ss)' function computes the cartesian
 * product of the sequence of sequences given as parameter and invokes the
 * given function with each element of the cartesian product.
 *
 * If you looked carefully, you noticed that we passed 'gen_array_uop',
 * without any parameters, as the first parameter to
 * 'seq_for_each_in_product'. This is possible, because functions are
 * first class values in Order.
 *
 * Let's move on and generate code for the floating point operators and
 * all types.
 */

ORDER_PP(seq_for_each_in_product
         (gen_array_uop,
          seq(seq_filter(fn(O,
                            and(equal(1,op_arity(O)),
                                op_does_floating(O))),
                         applicative_ops),
              builtin_types)))

/*
 * We'll then handle binary operations similarly. First we define the
 * metafunction 'gen_array_bop(O,L,R)':
 */

#define ORDER_PP_DEF_gen_array_bop                              \
ORDER_PP_FN(fn(O,L,R,                                           \
               emit(quote(GEN_array_bop),                       \
                    tuple(op_mnemonic(O),                       \
                          op_symbol(O),                         \
                          type_abbrev(L),                       \
                          type_name(L),                         \
                          type_abbrev(R),                       \
                          type_name(R),                         \
                          type_name(type_of_bop(O,L,R))))))

/*
 * Then we'll generate code for all binary array procedures in two
 * batches. First the non-floating point operators:
 */

ORDER_PP(seq_for_each_in_product
         (gen_array_bop,
          let(T,seq_filter(fn(T,
                              not(type_is_floating(T))),
                           builtin_types),
              seq(seq_filter(fn(O,
                                and(equal(2,op_arity(O)),
                                    not(op_does_floating(O)))),
                             applicative_ops),
                  T,
                  T))))

/*
 * Then the floating point operators:
 */

ORDER_PP(seq_for_each_in_product
         (gen_array_bop,
          seq(seq_filter(fn(O,
                            and(equal(2,op_arity(O)),
                                op_does_floating(O))),
                         applicative_ops),
              builtin_types,
              builtin_types)))

/*
 * That's it!
 */

/*
 * Exercises
 * ---------
 *
 * 1. It turns out that the new C standard [C99] defines several new types
 *    including 'long long' and '_Bool'. Update the generator to generate
 *    code for these new types. Reconsider the type promotion and
 *    conversion rules as well as operator validity carefully.
 *
 * 2. Commutative operators, like '+' and '|', produce the same result
 *    regardless of the order of the two parameters while the result of
 *    non-commutative operators, like '/' and '<<', depends on the order
 *    of parameters. The generator we built in this example generates code
 *    for all ordered pairs of types. This means that we generate nearly
 *    twice as many procedures as needed for commutative operators. For
 *    example, we generate the procedures 'array_add_si_fl(...)' and
 *    'array_add_fl_si(...)' of which only one is necessary. Modify the
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
