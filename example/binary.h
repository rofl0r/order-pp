# ifndef ORDER_EXAMPLE_BINARY_H_VAJK20040620
# define ORDER_EXAMPLE_BINARY_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

# include "order/interpreter.h"

// \section{Binary Constants} %*************************************
//
// In this example, we will implement a macro for specifying binary
// constants. \cite{c:1999} has decimal, octal and hexadecimal
// contants, but no binary constants. Programmers often use octal or
// hexadecimal constants when binary constants would be more
// appropriate, which can be error prone. The \code{BINARY(digits)}
// macro that we will implement will allow us to write
#if 0
   BINARY(0 1 0 1)
#endif//0
// to get the constant \code{5}. In general, any sequence of the
// tokens \code{0} and \code{1} given to the \code{BINARY} macro is
// interpreted as a binary number and converted to the corresponding
// decimal constant.
//
// \subsection*{Token Extraction Macros} %==========================
//
// The C preprocessor doesn't have a built--in mechanism for
// deconstructing arbitrary sequences of tokens. Fortunately, it is
// possible to deconstruct a sequence of identifiers and pp--numbers
// by defining one macro for each distinct token and then using
// concatenation to invoke the macros. We refer to macros defined
// for the purpose of deconstructing token sequences as token
// extraction macros. Order supports the deconstruction of token
// sequences through object--like token extraction macros of the
// form
#if 0
   #define <prefix>_<token> (<value>)<more>
#endif//0
// \code{<prefix>} is just a name for referring to a set of token
// extraction macros. \code{<token>} is the token whose value is
// being extracted. The parenthesized element \code{<value>} will be
// the first value extracted, while the trailing \code{<more>} may
// contain further tokens to extract. In the simplest case,
// \code{<more>} is empty and \code{<token>} and \code{<value>} are
// the same. For our immediate needs, it is sufficient to provide
// two token extraction macros; one macro for the token \code{1} and
// another for \code{0}:
// \begin{verbatim}
#define BINARY_TOKEN_0 (0)
#define BINARY_TOKEN_1 (1)
// \end{verbatim}
// As a safety measure, it also makes sense to explicitly define the
// prefix as a self--evaluating macro:
// \begin{verbatim}
#define BINARY_TOKEN BINARY_TOKEN
// \end{verbatim}
// The purpose of the above definition is to prevent the possibility
// that someone might unknowingly define a macro by the name of the
// prefix and break the deconstruction mechanism. Of course, it is
// still possible to redefine the \code{BINARY_TOKEN} macro, but
// doing so without a diagnostic from a reasonable preprocessor
// requires an explicit \code{#undef}.
//
// \subsection*{The \code{BINARY} Macro} %==========================
//
// Having defined the token extraction macros, the task of
// implementing the \code{BINARY} macro becomes rather trivial:
// \begin{verbatim}
#define BINARY(tokens)                                          \
ORDER_PP(8to_lit(8seq_fold                                      \
                 (8fn(8R, 8X,                                   \
                      8add(8mul(8R, 2), 8X)),                   \
                  0,                                            \
                  8tokens_to_seq_with(8quote(tokens),           \
                                      8quote(BINARY_TOKEN)))))
// \end{verbatim}
// The above macro invokes the Order interpreter through the
// \code{ORDER_PP} macro to evaluate a simple Order program. Let's
// take a brief look at the program.
//
// The syntactic form \code{8quote} is used for quoting constants.
// Both the \code{tokens} being converted and the
// \code{BINARY_TOKEN} prefix are quoted. \code{8quote(<value>)} can
// also be abbreviated as \code{8(<value>)}, which is convenient
// when a program contains many quoted constants.
//
// To deconstruct a token sequence, the Order prelude provides the
// function \code{8tokens_to_seq_with(tokens, prefix)}. Given a
// token sequence and the prefix of a set of tokenizing macros, the
// \code{8tokens_to_seq_with} function returns a sequence of the
// extracted tokens. Sequence is the name of the primary aggregate
// data type supported by Order. The representation of a sequence is
// a sequence of parenthesized elements. For example, the token
// sequence \verb/1 0 1/ corresponds to the sequence
// \code{(1)(0)(1)}.
//
// The higher--order function \code{8seq_fold} folds a sequence to a
// value with a given binary function. In this case, the function is
// defined using a lambda expression \code{8fn(...)}. The function
// multiplies the folded value, bound to the variable \code{8R}, by
// \code{2} and adds the next value from the sequence, bound to the
// variable \code{8X}, to the result. The Order prelude provides a
// comprehensive set of both first--order and higher--order
// functions for manipulating sequences.
//
// The arithmetic operators \code{8mul} and \code{8add} accept both
// small signless integer literals in the range \code{[0, 100]} and
// arbitrary precision natural numbers, whose representation is an
// implementation detail of the Order prelude. The result of an
// arithmetic operation may be a small literal or a natural number.
// The function \code{to_lit} converts a number, whether a small
// literal or a natural number, to an integer literal. The
// conversion is needed, because the C language doesn't understand
// the representation of natural numbers used by Order.
//
// \subsection*{Grouping Digits} %==================================
//
// The previously defined macro only supports digits in groups of
// one. To specify a 32--bit constant, one needs to write at least
// 63 characters consisting of 32 digits and 31 spaces plus the
// macro invocation. It would be nice to have a shorter syntax.
// Also, in many cases, a range of bits forms a logical unit and it
// would make sense to show such grouping explicitly. Consider the
// difference between
#if 0
   BINARY(1 1 0 1 0 1 0 1 1 1 0 1)
#endif//0
// and
#if 0
   BINARY(11 0101 01 110 1)
#endif//0
// In the latter case, the bits are specified in groups of varying
// size. In addition to shortening the constant, grouping of digits
// can be a useful visual tool to communicate important aspects of
// binary constants.
//
// To support such grouping, we need to provide further token
// extraction macros. Recalling general form of token extraction
// macros
#if 0
   #define <prefix>_<token> (<value>)<more>
#endif//0
// we will take advantage of the trailing \code{<more>}. To support
// digits in groups of two, we defined the following four macros:
// \begin{verbatim}
#define BINARY_TOKEN_00 (0)0
#define BINARY_TOKEN_01 (0)1
#define BINARY_TOKEN_10 (1)0
#define BINARY_TOKEN_11 (1)1
// \end{verbatim}
// Each of the above macros extracts the first digit of the group of
// two digits and produces an additional token containing the second
// digit. The second digit will then be converted through the
// previously defined single digit token extraction macros.
//
// As we said earlier, one macro per token is required. To support
// groups of three and four digits, we need to define a total of 24
// macros:
// \begin{verbatim}
#define BINARY_TOKEN_000 (0)00
#define BINARY_TOKEN_001 (0)01
#define BINARY_TOKEN_010 (0)10
#define BINARY_TOKEN_011 (0)11
#define BINARY_TOKEN_100 (1)00
#define BINARY_TOKEN_101 (1)01
#define BINARY_TOKEN_110 (1)10
#define BINARY_TOKEN_111 (1)11

#define BINARY_TOKEN_0000 (0)000
#define BINARY_TOKEN_0001 (0)001
#define BINARY_TOKEN_0010 (0)010
#define BINARY_TOKEN_0011 (0)011
#define BINARY_TOKEN_0100 (0)100
#define BINARY_TOKEN_0101 (0)101
#define BINARY_TOKEN_0110 (0)110
#define BINARY_TOKEN_0111 (0)111
#define BINARY_TOKEN_1000 (1)000
#define BINARY_TOKEN_1001 (1)001
#define BINARY_TOKEN_1010 (1)010
#define BINARY_TOKEN_1011 (1)011
#define BINARY_TOKEN_1100 (1)100
#define BINARY_TOKEN_1101 (1)101
#define BINARY_TOKEN_1110 (1)110
#define BINARY_TOKEN_1111 (1)111
// \end{verbatim}
// Technically, we could support even longer groups of bits, but
// doing so would require many more macros. A group of four bits
// corresponds to a single hexadecimal digit. In the opinion of the
// author, support for longer groups of bits wouldn't significantly
// improve the usability of the \code{BINARY} macro.

# endif
