// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Procedures for Array Manipulation
//
// This example shows how metadata can be used for directing code
// generation. We use metadata to direct the generation of
// procedures for 1-dimensional array manipulation in C.
//
// ### Introduction
//
// What we mean by an array manipulation procedure is simply a
// procedure that takes an array (or two), applies an operation to
// each element (or pairs of elements) and writes the result to
// another array.
//
// An unary array manipulation procedure takes a single array as
// input, applies an unary operator to the elements of the array and
// writes the results to another array. For example, the unary array
// manipulation procedure `array_neg_si'
#if 0
  void array_neg_si(const signed int* in,
                    signed int* out,
                    int n) {
    if (n > 0) do {
      *out++ = - *in++;
    } while (--n);
  }
#endif//0
// takes an array of signed integers, negates each element and
// writes the result to another array. The general form of an unary
// array manipulation procedure is captured by the `GEN_array_uop'
// macro:
//<
#define GEN_array_uop(mnemo, op, in_a, in_t, out_t)     \
void array##mnemo##in_a(const in_t* in,                 \
                        out_t* out,                     \
                        int n) {                        \
  if (n > 0) do {                                       \
    *out++ = op *in++;                                  \
  } while (--n);                                        \
}
//>
// Given
// \begin{itemize}
// \item an operation mnemonic (e.g. `_neg'),
// \item an operator symbol (e.g. `-'),
// \item an abbreviation of the input array element type (e.g.
//       `si'),
// \item the input array element type (e.g. `signed' `int'), and
// \item the output array element type (e.g. `signed' `int'),
// \end{itemize}
// the `GEN_array_uop' macro expands to an unary array
// manipulation procedure.
//
// We refer to macros like `GEN_array_uop' as ad hoc code generation
// macros, because they are macros defined for the purpose of
// generating a particular sequence of tokens.
//
// A binary array manipulation procedure takes two arrays as input,
// applies a binary operator to the corresponding elements of the
// arrays and then writes the result to a third array. For example,
// the binary array manipulation procedure
// `array_add_ss_ss'
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
#endif//0
// takes two arrays of signed short integers, adds each pair of
// elements, and writes the result to an array of signed integers.
// The general form of a binary array manipulation procedure is
// captured by the `GEN_array_bop' macro:
//<
#define GEN_array_bop(mnemo, op,                        \
                      lhs_a, lhs_t,                     \
                      rhs_a, rhs_t,                     \
                      out_t)                            \
void array##mnemo##lhs_a##rhs_a(const lhs_t* lhs_in,    \
                                const rhs_t* rhs_in,    \
                                out_t* out,             \
                                int n) {                \
  if (n > 0) do {                                       \
    *out++ = *lhs_in op *rhs_in;                        \
    /* Remember short circuit logic operators! */       \
    ++lhs_in;                                           \
    ++rhs_in;                                           \
  } while (--n);                                        \
}
//>
// Given
// \begin{itemize}
// \item an operation mnemonic (e.g. `_add'),
// \item an operator symbol (e.g. `+'),
// \item an abbreviation of the left hand side input array element
//       type (e.g `_si') and
// \item array element type (e.g. `signed' `short'),
// \item an abbreviation of the right hand side input array element
//       type and
// \item array element type, and
// \item the output array element type (e.g. `signed' `int'),
// \end{itemize}
// the `GEN_array_bop' macro expands to a binary array
// manipulation procedure.
//
// ### The Goal
//
// We'd like to have array manipulation procedures for all sensible
// combinations of operators, both unary and binary, and types. We'd
// also like that the type of the output array would match the type
// of the result of the operation. For example, the type of the
// result of adding a signed short and a float should be a float.
//
// Even with the aid of the `GEN_array_uop' and `GEN_array_bop'
// macros there would still be a lot of repetitive manual work,
// because the number of sensible combinations is too great. In
// fact, the generator that we develop in this example generates a
// total of 33 unary procedures and a whopping 2214 binary
// procedures. So, instead of manually invoking the code generation
// macros for each combination, we'd like to have a metaprogram that
// invokes the code generation macros for all sensible combinations
// of operators and types.
//
// ### Type Promotion and Conversion Rules
//
// The rules for determining the type of an operation are specified
// in the \cite{c:1990} standard. In order for our generator to be
// intelligent about the type of the result of an array operation,
// we need to translate those rules into computable metafunctions.
//
// At this point, it isn't clear what kind of metadata we need on
// types and operators, so let's invent the necessary metafunctions
// as the need arises and specify the representation of types after
// we know what kind of metadata we need. For clarity, we'll prefix
// primitive metafunctions and constants on types with `type' and
// metafunctions on operators with `op'.
//
// First we'd like to encode the rules for integer promotion on an
// unary operation. Rephrasing the \cite{c:1990} standard, if the
// rank of the type of the operand is lower than the rank of
// `int' then the result of integer promotion is `int', otherwise
// the type of integer promotion is the type of the operand. The
// `8type_of_promotion(t)' metafunction
//<
#define ORDER_PP_DEF_8type_of_promotion                 \
ORDER_PP_FN(8fn(8T,                                     \
                8if(8less(8type_rank(8T),               \
                          8type_rank(8type_int)),       \
                    8type_int,                          \
                    8T)))
//>
// encodes the rule precisely.
//
// While writing the above metafunction, we invented the unary
// metafunction `8type_rank', which is supposed to return the rank
// of the specified type, and the constant `8type_int', which is
// supposed to evaluate to the metadata of the type `int'.
//
// The rule for usual arithmetic conversion on a binary operation is
// that the type of the result is the type of the higher ranking
// type after integer promotion. The rule translates to the
// `8type_of_conversion(tl,tr)' metafunction:
//<
#define ORDER_PP_DEF_8type_of_conversion                        \
ORDER_PP_FN(8fn(8L, 8R,                                         \
                8type_of_promotion(8if(8less(8type_rank(8L),    \
                                             8type_rank(8R)),   \
                                       8R,                      \
                                       8L))))
//>
// Integer promotion and usual arithmetic conversion rules ignore
// the operator. For the actual type of an operation, we will also
// need to consider the operator.
//
// In \cite{c:1990}, logical operators produce integer results. The
// type of an unary operation is thus integer if the operator is
// logical. Otherwise the type of an unary operation follows the
// promotion rules. The `8type_of_uop(o,t)' metafunction captures
// this special case:
//<
#define ORDER_PP_DEF_8type_of_uop               \
ORDER_PP_FN(8fn(8O, 8T,                         \
                8if(8op_is_logical(8O),         \
                    8type_int,                  \
                    8type_of_promotion(8T))))
//>
// Above, the unary metafunction `8op_is_logical' is supposed to
// return a boolean indicating whether the operator is a logical
// operator or not.
//
// Like unary logical operators, binary logical operators produce
// integer results. Also, if the operator is a shift, then the type
// of the result is the type of the left hand side operand after
// promotion. Otherwise the arithmetic conversion rules apply. The
// rules translate to the `8type_of_bop(o,l,r)' metafunction:
//<
#define ORDER_PP_DEF_8type_of_bop                       \
ORDER_PP_FN(8fn(8O, 8L, 8R,                             \
                8cond((8op_is_logical(8O),              \
                       8type_int)                       \
                      (8op_is_shift(8O),                \
                       8type_of_promotion(8L))          \
                      (8else,                           \
                       8type_of_conversion(8L, 8R)))))
//>
// Above, we used the conditional form `8cond' to avoid writing
// nested `8if's.
//
// Given an operator and the types of the operands, we can now
// compute the type of the result.
//
// ### The Representation of Types and Operators
//
// In the previous section we simply invented primitive operations
// on types and operators as we went along. We also know from the
// parameters of the code generation macros `GEN_array_uop' and
// `GEN_array_bop' that we need certain metadata on types and
// operators. Considering the requirements, we will represent an
// operator by a 6-tuple of the form
//<
//   (symbol, mnemonic, arity, does_floats, is_logical, is_shift)
//>
// We can now implement the primitive metafunctions, some of which
// we already used earlier, on operators. They are just simple
// projection operators on tuples.
//<
#define ORDER_PP_DEF_8op_symbol      ORDER_PP_MACRO(8tuple_at_0)
#define ORDER_PP_DEF_8op_mnemonic    ORDER_PP_MACRO(8tuple_at_1)
#define ORDER_PP_DEF_8op_arity       ORDER_PP_MACRO(8tuple_at_2)
#define ORDER_PP_DEF_8op_does_floats ORDER_PP_MACRO(8tuple_at_3)
#define ORDER_PP_DEF_8op_is_logical  ORDER_PP_MACRO(8tuple_at_4)
#define ORDER_PP_DEF_8op_is_shift    ORDER_PP_MACRO(8tuple_at_5)
//>
// We will also encode the metadata on all the applicative operators
// we will consider into the `8applicative_ops' constant as a
// sequence.
//<
#define ORDER_PP_DEF_8applicative_ops                           \
ORDER_PP_CONST(((~,  _compl,  1, 8false, 8false, 8false))       \
               ((-,  _neg,    1,  8true, 8false, 8false))       \
               ((!,  _not,    1,  8true,  8true, 8false))       \
               ((*,  _mul,    2,  8true, 8false, 8false))       \
               ((/,  _div,    2,  8true, 8false, 8false))       \
               ((+,  _add,    2,  8true, 8false, 8false))       \
               ((-,  _sub,    2,  8true, 8false, 8false))       \
               ((%,  _mod,    2, 8false, 8false, 8false))       \
               ((<<, _shl,    2, 8false, 8false,  8true))       \
               ((>>, _shr,    2, 8false, 8false,  8true))       \
               ((<,  _lt,     2,  8true,  8true, 8false))       \
               ((<=, _lt_eq,  2,  8true,  8true, 8false))       \
               ((>,  _gt,     2,  8true,  8true, 8false))       \
               ((>=, _gt_eq,  2,  8true,  8true, 8false))       \
               ((==, _equal,  2,  8true,  8true, 8false))       \
               ((!=, _not_eq, 2,  8true,  8true, 8false))       \
               ((&,  _bitand, 2, 8false, 8false, 8false))       \
               ((|,  _bitor,  2, 8false, 8false, 8false))       \
               ((^,  _bitxor, 2, 8false, 8false, 8false))       \
               ((&&, _and,    2,  8true,  8true, 8false))       \
               ((||, _or,     2,  8true,  8true, 8false)))
//>
// The requirements for types are somewhat less demanding and we'll
// do with a 4-tuple of the form
//<
//   (name, abbreviation, is_float, rank)
//>
// The following defines accessors for the type data type.
//<
#define ORDER_PP_DEF_8type_name     ORDER_PP_MACRO(8tuple_at_0)
#define ORDER_PP_DEF_8type_abbrev   ORDER_PP_MACRO(8tuple_at_1)
#define ORDER_PP_DEF_8type_is_float ORDER_PP_MACRO(8tuple_at_2)
#define ORDER_PP_DEF_8type_rank     ORDER_PP_MACRO(8tuple_at_3)
//>
// While encoding the metadata for types, we must specify the
// `8type_int' separately. We'll make a point of encoding the
// data only once.
//<
#define ORDER_PP_DEF_8type_int                          \
ORDER_PP_CONST( (    signed int, _si, 8false, 3) )

#define ORDER_PP_DEF_8builtin_types                     \
ORDER_PP_CONST(((          char, _ch, 8false, 1))       \
               ((   signed char, _sc, 8false, 1))       \
               (( unsigned char, _uc, 8false, 1))       \
               ((  signed short, _ss, 8false, 2))       \
               ((unsigned short, _us, 8false, 2))       \
               (ORDER_PP_GET_CONST(8type_int)   )       \
               ((  unsigned int, _ui, 8false, 4))       \
               ((   signed long, _sl, 8false, 5))       \
               (( unsigned long, _ul, 8false, 6))       \
               ((         float, _fl,  8true, 7))       \
               ((        double, _db,  8true, 8))       \
               ((   long double, _ld,  8true, 9)))
//>
//
// ### Generating Code
//
// In order to generate the code for all valid combinations of
// operators and types, we could produce all combinations of one
// operator and two types and then figure out which of those
// combinations make sense. While such an approach would technically
// work, it would be quite inefficient, because many of the
// combinations do not make sense. Unary operators need only one
// type, and certain operators do not work on floating point types.
// So, we'll break the generation into a few cases.
//
// Let's first define a helper metafunction for emitting the code
// for an unary operator. The `8gen_array_uop(o,t)' metafunction
//<
#define ORDER_PP_DEF_8gen_array_uop                             \
ORDER_PP_FN(8fn(8O, 8T,                                         \
                8emit(8(GEN_array_uop),                         \
                      8tuple(8op_mnemonic(8O),                  \
                             8op_symbol(8O),                    \
                             8type_abbrev(8T),                  \
                             8type_name(8T),                    \
                             8type_name(8type_of_uop(8O, 8T))))))
//>
// computes the argument tuple for the `GEN_array_uop' code
// generation macro we defined earlier and then emits the expansion.
//
// We then generate code for all unary array procedures by invoking
// the `8gen_array_uop(o,t)' metafunction in two batches. First for
// the non-floating point operators and non-floating point types.
//<
ORDER_PP(8seq_for_each_in_product
         (8gen_array_uop,
          8seq(8seq_filter(8fn(8O,
                               8and(8equal(1, 8op_arity(8O)),
                                    8not(8op_does_floats(8O)))),
                           8applicative_ops),
               8seq_filter(8chain(8not, 8type_is_float),
                           8builtin_types))))
//>
// The `8seq_filter(pr,s)' function takes an unary predicate and a
// sequence and produces a new sequence which contains only the
// elements that satisfy the predicate. Above, we've defined the
// predicate for filtering the `8applicative_ops' sequence using an
// anonymous function. This is typical when using higher-order
// functions. New functions can also be formed through other means,
// which often yields shorter and more efficient programs. The
// predicate for filtering the `8builtin_types' sequence is
// implemented above by composing together the unary `8not' function
// with the unary `8type_is_float' accessor.
//
// The `8seq_for_each_in_product(op,ss)' function computes the
// cartesian product of the given sequence of sequences and applies
// the given procedure, in this case `8gen_array_uop', to each
// element of the cartesian product. Above, we use
// `8seq_for_each_in_product' to compute the cartesian product of
// operators that do not work on floating point types and the
// non-floating point types.
//
// Let's move on and generate code for the floating point operators
// and all types.
//<
ORDER_PP(8seq_for_each_in_product
         (8gen_array_uop,
          8seq(8seq_filter(8and_chain(8chain(8equal(1), 8op_arity),
                                      8op_does_floats),
                           8applicative_ops),
               8builtin_types)))
//>
// Above, we've defined the predicate for `8seq_filter' by composing
// two unary predicates using `8and_chain'. In theory, it is
// possible to replace all `8fn'-expressions using a finite number
// of combinators.
//
// We'll then handle binary operations similarly. First we define
// the metafunction `8gen_array_bop(o,l,r)':
//<
#define ORDER_PP_DEF_8gen_array_bop                             \
ORDER_PP_FN(8fn(8O, 8L, 8R,                                     \
                8emit(8(GEN_array_bop),                         \
                      8tuple(8op_mnemonic(8O),                  \
                             8op_symbol(8O),                    \
                             8type_abbrev(8L),                  \
                             8type_name(8L),                    \
                             8type_abbrev(8R),                  \
                             8type_name(8R),                    \
                             8type_name(8type_of_bop(8O, 8L, 8R))))))
//>
// Then we'll generate code for all binary array procedures in two
// batches. First the non-floating point operators:
//<
ORDER_PP(8seq_for_each_in_product
         (8gen_array_bop,
          8let((8S, 8seq_filter(8chain(8not, 8type_is_float),
                                8builtin_types)),
               8seq(8seq_filter
                    (8and_chain(8chain(8equal(2), 8op_arity),
                                8chain(8not, 8op_does_floats)),
                     8applicative_ops),
                    8S,
                    8S))))
//>
// Then the floating point operators:
//<
ORDER_PP(8seq_for_each_in_product
         (8gen_array_bop,
          8seq(8seq_filter(8and_chain(8chain(8equal(2), 8op_arity),
                                      8op_does_floats),
                           8applicative_ops),
               8builtin_types,
               8builtin_types)))
//>
// That's it!
//
// \begin{exercise}
// It turns out that the newer \cite{c:1999} standard defines
// several new types including `long' `long' and `_Bool'. Update the
// generator to generate code for these new types. Reconsider the
// type promotion and conversion rules as well as operator validity
// carefully.
// \end{exercise}
//
// \begin{exercise}
// Commutative operators, like `+' and `|', produce the same result
// regardless of the order of the two arguments while the result of
// non-commutative operators, like `/' and `<<', depends on the
// order of arguments. The generator we built in this example
// generates code for all ordered pairs of types. This means that we
// generate nearly twice as many procedures as needed for
// commutative operators. For example, we generate the procedures
// `array_add_si_fl' and `array_add_fl_si' of which only one is
// necessary. Modify the generator so that it doesn't generate
// unnecessary procedures. (Hint: Specify an ordering relation on
// types and generate code for an operator only when the left hand
// side type precedes the right hand side type.)
// \end{exercise}
//
// \begin{exercise}
// In order to call the generated procedures from other translation
// units, we need a header with prototypes for all the procedures.
// Write code to generate the prototypes for all procedures. Then
// refactor the code into a separate header and implementation file.
// \end{exercise}
