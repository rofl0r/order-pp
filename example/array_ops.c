// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include "order/interpreter.h"

// \section{Procedures for Array Manipulation} %********************
//
// This example shows how metadata can be used for directing code
// generation. We use metadata to direct the generation of
// procedures for 1--dimensional array manipulation in C.
//
// \subsection*{Introduction} %=====================================
//
// What we mean by an array manipulation procedure is simply a
// procedure that takes an array (or two), applies an operation to
// each element (or pairs of elements) and writes the result to
// another array.
//
// An unary array manipulation procedure takes a single array as
// input, applies an unary operator to the elements of the array and
// writes the results to another array. For example, the unary array
// manipulation procedure \code{array_neg_si(...)}
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
// array manipulation operator is captured by the
// \code{GEN_array_uop(...)} macro:
// \begin{verbatim}
#define GEN_array_uop(mnemo, op, in_a, in_t, out_t)     \
void array##mnemo##in_a(const in_t* in,                 \
                        out_t* out,                     \
                        int n) {                        \
  if (n > 0) do {                                       \
    *out++ = op *in++;                                  \
  } while (--n);                                        \
}
// \end{verbatim}
// Given
// \begin{itemize}
// \item an operation mnemonic (e.g. \code{_neg}),
// \item an operator symbol (e.g. \code{-}),
// \item an abbreviation of the input array element type (e.g.
//       \code{si}),
// \item the input array element type (e.g. \code{signed int}), and
// \item the output array element type (e.g. \code{signed int}),
// \end{itemize}
// the \code{GEN_array_uop(...)} macro expands to an unary array
// manipulation procedure.
//
// We refer to macros like \code{GEN_array_uop} as ad hoc code
// generation macros, because they are macros defined for the
// purpose of generating a particular sequence of tokens.
//
// A binary array manipulation procedure takes two arrays as input,
// applies a binary operator to the corresponding elements of the
// arrays and then writes the result to a third array. For example,
// the binary array manipulation procedure
// \code{array_add_ss_ss(...)}
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
// captured by the \code{GEN_array_bop(...)} macro:
// \begin{verbatim}
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
// \end{verbatim}
// Given
// \begin{itemize}
// \item an operation mnemonic (e.g. \code{_add}),
// \item an operator symbol (e.g. \code{+}),
// \item an abbreviation of the left hand side input array element
//       type (e.g \code{_si}) and
// \item array element type (e.g. \code{signed short}),
// \item an abbreviation of the right hand side input array element
//       type and
// \item array element type, and
// \item the output array element type (e.g. \code{signed int}),
// \end{itemize}
// the \code{GEN_array_bop(...)} macro expands to a binary array
// manipulation procedure.
//
// \subsection*{The Goal} %=========================================
//
// We'd like to have array manipulation procedures for all sensible
// combinations of operators, both unary and binary, and types. We'd
// also like that the type of the output array would match the type
// of the result of the operation. For example, the type of the
// result of adding a signed short and a float should be a float.
//
// Even with the aid of the \code{GEN_array_uop(...)} and
// \code{GEN_array_bop(...)} macros there would still be a lot of
// repetitive manual work, because the number of sensible
// combinations is too great. In fact, the generator that we develop
// in this example generates a total of 33 unary procedures and a
// whopping 2214 binary procedures. So, instead of manually invoking
// the code generation macros for each combination, we'd like to
// have a metaprogram that invokes the code generation macros for
// all sensible combinations of operators and types.
//
// \subsection*{Type Promotion and Conversion Rules} %==============
//
// The rules for determining the type of an operation are specified
// in the \cite{c:1990} standard. In order for our generator to be
// intelligent about the type of the result of an array operation,
// we need to translate those rules into computable metafunctions.
//
// At this point, it isn't clear what kind of metadata we need on
// types and operators, so let's invent the necessary metafunctions
// as the need arises and specify the representation of types after
// we know what kind of metadata we need.
//
// First we'd like to encode the rules for integer promotion on an
// unary operation. Rephrasing the \cite{c:1990} standard, if the
// rank of the type of the operand is lower than the rank of
// \code{int} then the result of integer promotion is \code{int},
// otherwise the type of integer promotion is the type of the
// operand. The \code{8type_of_promotion(t)} metafunction
// \begin{verbatim}
#define ORDER_PP_DEF_8type_of_promotion                 \
ORDER_PP_FN(8fn(8T,                                     \
                8if(8less(8type_rank(8T),               \
                          8type_rank(8type_int)),       \
                    8type_int,                          \
                    8T)))
// \end{verbatim}
// encodes the rule precisely.
//
// Let's examine the \code{8type_of_promotion(t)} function
// definition. The first thing you should notice is that we
// essentially defined an object--like macro of the form
#if 0
   #define ORDER_PP_DEF_8<name> ORDER_PP_FN(<fn-exp>)
#endif//0
// The above is the general form of top--level Order function
// definitions. We will not discuss the implementation details of
// the Order interpreter in this example, but a short explanation
// might be in order. The prefix \code{ORDER_PP_DEF_} is used for
// all Order expression definitions. The purpose of the prefix is to
// allow an interpreter to deconstruct expressions in order to
// evaluate them.
//
// The purpose of the \code{8}, which is a prefix of all Order
// expressions, is to completely prevent unwanted macro replacement.
// A preprocessing token that begins with a digit is not subject to
// macro replacement. The use of such prefixing is a most
// unfortunate detail, but there is no safe alternative, because
// even the \cite{c:1999} standard defines many macros, such as
// \code{and}, \code{not_eq}, \code{true}, \code{false} and even
// \code{I}, that would otherwise clash with Order programs. There
// is no guarantee that important C libraries wouldn't define other
// macro names that might cause problems unless we used the prefix.
//
// The \code{ORDER_PP_FN} macro is used to denote that the
// definition is specifically a function definition. We will later
// see constant definitions, which use \code{ORDER_PP_CONST}, and so
// called macro definitions, which use \code{ORDER_PP_MACRO}.
//
// The \code{<fn-exp>} of a function definition must define an
// anonymous function. Anonymous function definitions have the
// general form:
// \begin{verbatim}
//   8fn(<var_1>, ..., <var_n>, <exp_{body}>)
// \end{verbatim}
// A function must have at least one parameter and exactly one
// expression, the body of the function, must follow the parameters.
// Functions, in the Order language, are first class values and
// variables are bound lexically.
//
// By default, variable symbols are limited to the tokens
// \code{8[A-Z]}, which means the digit \code{8} followed by an
// uppercase letter. Other tokens can also be used given appropriate
// macro definitions.
//
// A conditional if--expression in Order has the form:
// \begin{verbatim}
//   8if(<exp_{bool}>, <exp_{cons}>, <exp_{alt}>)
// \end{verbatim}
// If--expressions in Order behave just like in other strict
// programming languages. The boolean subexpression,
// \code{<exp_{bool}>}, is evaluated first and if it evaluates to
// \code{8true}, then the consequent, \code{<exp_{cons}>}, is
// evaluated. Otherwise the boolean expression must evaluate to
// \code{8false}, and the alternative, \code{<exp_{alt}>}, is
// evaluated.
//
// The body of the \code{8type_of_promotion(t)} function also
// contains calls to other functions. The binary function
// \code{8less} compares numbers. The unary function
// \code{8type_rank}, which we just invented, is supposed to return
// the rank of the specified type as a small signless decimal
// literal.
//
// As you have figured out by now, the syntax and semantics of the
// Order language are very much like the syntax and semantics of any
// ordinary programming language. The main technical difference to
// an ordinary language is that top--level Order definitions are
// embedded in C preprocessor macro definitions of a particular
// form.
//
// We'll now continue encoding the typing rules of C. The rule for
// usual arithmetic conversion on a binary operation is that the
// type of the result is the type of the higher ranking type after
// integer promotion. The rule translates to the
// \code{8type_of_conversion(tl, tr)} metafunction below:
// \begin{verbatim}
#define ORDER_PP_DEF_8type_of_conversion                        \
ORDER_PP_FN(8fn(8L, 8R,                                         \
                8type_of_promotion(8if(8less(8type_rank(8L),    \
                                             8type_rank(8R)),   \
                                       8R,                      \
                                       8L))))
// \end{verbatim}
// Integer promotion and usual arithmetic conversion rules ignore
// the operator. For the actual type of an operation, we will also
// need to consider the operator.
//
// In \cite{c:1990}, logical operators produce integer results.
// The type of an unary operation is thus integer if the operator is
// logical. Otherwise the type of an unary operation follows the
// promotion rules. The \code{8type_of_uop(o, t)} metafunction
// captures this special case:
// \begin{verbatim}
#define ORDER_PP_DEF_8type_of_uop               \
ORDER_PP_FN(8fn(8O, 8T,                         \
                8if(8op_is_logical(8O),         \
                    8type_int,                  \
                    8type_of_promotion(8T))))
// \end{verbatim}
//
// Like unary logical operators, binary logical operators produce
// integer results. Also, if the operator is a shift, then the type
// of the result is the type of the left hand side operand after
// promotion. Otherwise the arithmetic conversion rules apply. The
// rules translate to the \code{8type_of_bop(o, l, r)} metafunction:
// \begin{verbatim}
#define ORDER_PP_DEF_8type_of_bop                       \
ORDER_PP_FN(8fn(8O, 8L, 8R,                             \
                8cond((8op_is_logical(8O),              \
                       8type_int)                       \
                      (8op_is_shift(8O),                \
                       8type_of_promotion(8L))          \
                      (8else,                           \
                       8type_of_conversion(8L, 8R)))))
// \end{verbatim}
// As you can see above, Order also has the conditional form
// \code{8cond}, which is useful for avoiding deeply nested
// \code{8if}s.
//
// Given an operator and the types of the operands, we can now
// compute the type of the result.
//
// \subsection*{The Representation of Types and Operators} %========
//
// In the previous section we simply invented primitive operations
// on types and operators as we went along. We also know from the
// parameters of the code generation macros
// \code{GEN_array_uop(...)} and \code{GEN_array_bop(...)} that we
// need certain metadata on types and operators. Considering the
// requirements, we will represent an operator by a 6--tuple of the
// form
// \begin{verbatim}
//   (symbol, mnemonic, arity, does_floats, is_logical, is_shift)
// \end{verbatim}
// A tuple, in general, is a parenthesized list of comma separated
// elements.
//
// We can now implement the primitive metafunctions, some of which
// we already used earlier, on operators. They are just simple
// projection operators on tuples.
// \begin{verbatim}
#define ORDER_PP_DEF_8op_symbol      ORDER_PP_MACRO(8tuple_at_0)
#define ORDER_PP_DEF_8op_mnemonic    ORDER_PP_MACRO(8tuple_at_1)
#define ORDER_PP_DEF_8op_arity       ORDER_PP_MACRO(8tuple_at_2)
#define ORDER_PP_DEF_8op_does_floats ORDER_PP_MACRO(8tuple_at_3)
#define ORDER_PP_DEF_8op_is_logical  ORDER_PP_MACRO(8tuple_at_4)
#define ORDER_PP_DEF_8op_is_shift    ORDER_PP_MACRO(8tuple_at_5)
// \end{verbatim}
// As you should have noticed, the above definitions aren't function
// definitions, they are so called Order macro definitions. Order
// macro definitions are essentially simple rewrite rules like
// ordinary C preprocessor macros. Macro definitions are evaluated
// as if the tokens inside \code{ORDER_PP_MACRO(...)} immediately
// appeared in place of the macro identifier---there is no function
// call overhead. However, macros are otherwise more limited than
// functions. In particular, parameterized Order macros, implemented
// using function--like macros, can not be partially applied, which
// should be intuitive, because the interpreter really doesn't see
// them at all.
//
// We will also encode the metadata on all the applicative operators
// we will consider into the \code{8applicative_ops} constant as a
// sequence.
// \begin{verbatim}
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
// \end{verbatim}
// The above is a constant definition, as denoted by the use of
// \code{ORDER_PP_CONST}. A constant can be any sequence of C
// preprocessor tokens that is valid as an actual parameter to a
// macro. This basically means that a constant may not contain
// unbalanced parentheses nor unparenthesized commas.
//
// As we said, the \code{8applicative_ops} constant is a so called
// sequence. In general, a sequence is an aggregate data type of the
// form
// \begin{verbatim}
//   (<pp-arg>) (<pp-arg>) ... (<pp-arg>)
// \end{verbatim}
// So, the \code{8applicative_ops} constant is just an aggregate,
// represented by a sequence, of 21 elements, each of which is a
// 6--tuple representing an operator.
//
// You should also note that boolean values are simply denoted by
// \code{8true} and \code{8false}. The interpreter also supports
// arithmetic operations on small signless decimal literals, so we
// have encoded the arities using decimal literals.
//
// The requirements for types are somewhat less demanding and we'll
// do with a 4--tuple of the form
// \begin{verbatim}
//   (name, abbreviation, is_float, rank)
// \end{verbatim}
// The following defines accessors for the type data type.
// \begin{verbatim}
#define ORDER_PP_DEF_8type_name     ORDER_PP_MACRO(8tuple_at_0)
#define ORDER_PP_DEF_8type_abbrev   ORDER_PP_MACRO(8tuple_at_1)
#define ORDER_PP_DEF_8type_is_float ORDER_PP_MACRO(8tuple_at_2)
#define ORDER_PP_DEF_8type_rank     ORDER_PP_MACRO(8tuple_at_3)
// \end{verbatim}
//
// While encoding the metadata for types, we must specify the
// \code{8type_int} separately. We'll make a point of encoding the
// data only once.
// \begin{verbatim}
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
// \end{verbatim}
// Above, \code{ORDER_PP_GET_CONST} is C preprocessor macro that
// extracts the value of an Order constant definition. It is useful
// in situations where we would otherwise need to introduce
// duplication.
//
// \subsection*{Generating Code} %==================================
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
// for an unary operator. The \code{gen_array_uop(o, t)}
// metafunction
// \begin{verbatim}
#define ORDER_PP_DEF_8gen_array_uop                             \
ORDER_PP_FN(8fn(8O, 8T,                                         \
                8emit(8(GEN_array_uop),                         \
                      8tuple(8op_mnemonic(8O),                  \
                             8op_symbol(8O),                    \
                             8type_abbrev(8T),                  \
                             8type_name(8T),                    \
                             8type_name(8type_of_uop(8O, 8T))))))
// \end{verbatim}
// computes the argument tuple for the \code{GEN_array_uop(...)}
// code generation macro we defined earlier and then emits the
// expansion.
//
// There are two rather significant new things in the above
// function. First of all, \code{8} followed by parenthesis, is a
// convenient shorthand for \code{8quote}, which is a special form
// that allows you to define constants inline. The parameter to
// \code{8quote}, or the shorthand \code{8}, can be any sequence of
// tokens that is allowed as an actual macro parameter like in
// ordinary top--level constant definitions. \code{8quote} then
// simply evaluates to the argument. You might wonder why we need to
// use quotation here. The reason is simple. There is no Order
// definition for \code{GEN_array_uop}, hence the interpreter knows
// nothing about \code{GEN_array_uop}, and can not interpret it.
// Therefore we must quote it so that the interpreter will not try
// to interpret it. Of course, we could have alternatively
// introduced a constant definition for \code{GEN_array_uop}, but
// since we are not going to refer to it many times, it is more
// convenient to just use quotation.
//
// The side--effecting \code{8emit} procedure is different from the
// functions we have used so far. It is used to produce output as a
// non--mutating side--effect. The \code{8emit} procedure
// essentially places both of the given arguments, separated by
// whitespace, to the end of what has been emitted so far. For
// example,
// \begin{verbatim}
//   8emit(8quote(A_MACRO_FOR_EXAMPLE), 8tuple(1, 2))
// \end{verbatim}
// would produce the output
// \begin{verbatim}
//   A_MACRO_FOR_EXAMPLE (1,2)
// \end{verbatim}
// In the \code{8gen_array_uop} metafunction, the first argument to
// \code{8emit} is the name of a macro, \code{GEN_array_uop}, and
// the second argument is a tuple that matches the formal parameters
// of \code{GEN_array_uop}. As you might guess, this results in
// expanding the macro \code{GEN_array_uop}. This is how the Order
// interpreter can be used to generate complex output efficiently.
// You first design a set of ad hoc code generation macros that
// capture the general form of the desired output. Then you design
// an Order program that emits expansions of the ad hoc code
// generation macros.
//
// We now generate code for all unary array procedures by invoking
// the \code{8gen_array_uop(o, t)} metafunction in two batches.
// First for the non--floating point operators and non--floating
// point types.
// \begin{verbatim}
ORDER_PP(8seq_for_each_in_product
         (8gen_array_uop,
          8seq(8seq_filter(8fn(8O,
                               8and(8equal(1, 8op_arity(8O)),
                                    8not(8op_does_floats(8O)))),
                           8applicative_ops),
               8seq_filter(8compose(8not, 8type_is_float),
                           8builtin_types))))
// \end{verbatim}
// The Order interpreter is invoked using the \code{ORDER_PP} macro.
// It takes an Order expression and evaluates it.
//
// The \code{8seq_filter(pr, s)} function takes an unary predicate
// and a sequence and produces a new sequence which contains only
// the elements that satisfy the predicate. Above, we've defined the
// predicate for filtering the \code{8applicative_ops} sequence
// using an anonymous function. This is typical when using
// higher--order functions. New functions can also be formed through
// other means, which often yields shorter and more efficient
// programs. The predicate for filtering the \code{8builtin_types}
// sequence is implemented above by composing together the unary
// \code{8not} function with the unary \code{8type_is_float}
// accessor.
//
// The \code{8seq_for_each_in_product(op, ss)} function computes the
// cartesian product of the given sequence of sequences and applies
// the given procedure, in this case \code{8gen_array_uop}, to each
// element of the cartesian product. Above, we use
// \code{8seq_for_each_in_product} to compute the cartesian product
// of operators that do not work on floating point types and the
// non--floating point types.
//
// Let's move on and generate code for the floating point operators
// and all types.
// \begin{verbatim}
ORDER_PP(8seq_for_each_in_product
         (8gen_array_uop,
          8seq(8seq_filter(8fn(8O,
                               8and(8equal(1, 8op_arity(8O)),
                                    8op_does_floats(8O))),
                           8applicative_ops),
               8builtin_types)))
// \end{verbatim}
// We'll then handle binary operations similarly. First we define
// the metafunction \code{8gen_array_bop(o, l, r)}:
// \begin{verbatim}
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
// \end{verbatim}
// Then we'll generate code for all binary array procedures in two
// batches. First the non--floating point operators:
// \begin{verbatim}
ORDER_PP(8seq_for_each_in_product
         (8gen_array_bop,
          8let((8S, 8seq_filter(8compose(8not, 8type_is_float),
                                8builtin_types)),
               8seq(8seq_filter(8fn(8O,
                                    8and(8equal(2, 8op_arity(8O)),
                                         8not(8op_does_floats(8O)))),
                                8applicative_ops),
                    8S,
                    8S))))
// \end{verbatim}
// Then the floating point operators:
// \begin{verbatim}
ORDER_PP(8seq_for_each_in_product
         (8gen_array_bop,
          8seq(8seq_filter(8fn(8O,
                               8and(8equal(2, 8op_arity(8O)),
                                    8op_does_floats(8O))),
                           8applicative_ops),
               8builtin_types,
               8builtin_types)))
// \end{verbatim}
// That's it!
//
// \subsection*{Exercises} %========================================
//
// \begin{enumerate}
// \item It turns out that the newer \cite{c:1999} standard defines
//       several new types including \verb/long long/ and
//       \code{_Bool}. Update the generator to generate code for
//       these new types. Reconsider the type promotion and
//       conversion rules as well as operator validity carefully.
//
// \item Commutative operators, like \code{+} and \code{|}, produce
//       the same result regardless of the order of the two
//       arguments while the result of non--commutative operators,
//       like \code{/} and \code{<<}, depends on the order of
//       arguments. The generator we built in this example generates
//       code for all ordered pairs of types. This means that we
//       generate nearly twice as many procedures as needed for
//       commutative operators. For example, we generate the
//       procedures \code{array_add_si_fl(...)} and
//       \code{array_add_fl_si(...)} of which only one is necessary.
//       Modify the generator so that it doesn't generate
//       unnecessary procedures. (Hint: Specify an ordering relation
//       on types and generate code for an operator only when the
//       left hand side type precedes the right hand side type.)
//
// \item In order to call the generated procedures from other
//       translation units, we need a header with prototypes for all
//       the procedures. Write code to generate the prototypes for
//       all procedures. Then refactor the code into a separate
//       header and implementation file.
// \end{enumerate}
