// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

// \section{A Taste of Order} %*************************************
//
// The following chapters gradually introduce and formally define
// the elements of the Order language, but in this section we will
// take a brief informal look at a concrete example. The code
// snippets that we will show in this section may look ``funny'' and
// may be difficult to understand on first reading, but you
// shouldn't worry about it. You may want to read this section again
// after you've finished a few more chapters.
//
// As we said, Order is a C preprocessor metalanguage that can be
// used to generate sequences of preprocessing tokens. Normally, the
// generated preprocessing tokens would eventually be converted to C
// or C++ tokens and would constitute program code. To avoid
// motivating and defining an actual code generation problem, we
// will show two ways to use Order to generate the complete lyrics
// to the song ``99 Bottles of Beer on the Wall''. While the actual
// logic required to generate the lyrics is quite trivial, this
// example is sufficient to give an idea how Order can actually be
// used.
//
// Let's first consider the song, which can be thought of as a
// countdown from 99 to 1. Each phrase, between 99 and 3, looks like
// this:
#if 0
  N bottles of beer on the wall,
  N bottles of beer, take one down, pass it around,
  N-1 bottles of beer on the wall.
#endif//0
// Boring, isn't it? Well, things get a bit more interesting in the
// last two phrases. When there is just 1 bottle of beer we must
// drop the plural. When there are no more bottles, we must say so.
// The last two phrases look like this:
#if 0
  2 bottles of beer on the wall,
  2 bottles of beer, take one down, pass it around,
  1 bottle of beer on the wall.

  1 bottle of beer on the wall,
  1 bottle of beer, take one down, pass it around,
  no more bottles of beer on the wall.
#endif//0
// So, the key is to generate the correct phrase for referring to
// the number of bottles. We can express the rule in Order code
// using a conditional expression with three clauses:
#if 0
               8cond((8greater(8N, 1),
                      8separate(8N, 8quote(bottles)))
                     (8equal(8N, 1),
                      8quote(1 bottle))
                     (8else,
                      8quote(no more bottles)))
#endif//0
// Undoubtedly the first thing to notice was the prefix `8'. It
// is a prefix of \emph{all} Order expressions and its purpose is to
// prevent \emph{unintended macro replacement} of Order expressions.
// A token that starts with a digit, like `8cond', is called a
// \emph{pp-number} and because it isn't an \emph{identifier} it
// isn't subject to macro replacement. The use of pp-numbers is
// admittedly an ugly detail, but it is absolutely necessary,
// because otherwise an Order expression might get macro replaced by
// a user or standard defined macro, like the \emph{abominable}
// macro `I' incredibly defined by the C standard\footnote{There
// aren't words strong enough that I could credibly use here to
// describe what I think about the quality of certain parts of the C
// standard \cite{c:1999}.}, before the Order interpreter gets to
// analyze the expression. Please note that unintended macro
// replacement isn't a novel problem introduced by the Order
// interpreter. It is a well known problem of the C preprocessor
// \cite{stroustrup:1994}. It should be noted that \emph{all} macros
// defined by the implementation of the Order interpreter have the
// prefix `ORDER_PP'. This makes it very unlikely that the Order
// interpreter would cause unintended macro replacements.
//
// The second thing to notice in the above expression is the
// conditional expression `8cond(...)'.\footnote{Borrowed from
// Scheme.} A conditional expression consists of a sequence of
// clauses. Each clause is a parenthesized list of comma separated
// expressions. The first expression of each clause must be a
// boolean expression or `8else', which can only be used in the
// last clause. Roughly speaking, a conditional expression is
// evaluated by evaluating the boolean expressions, starting at the
// first clause, until a boolean expression is found that evaluates
// to true. Then the rest of the expressions of the true clause are
// evaluated.
//
// The `8quote' syntactic form is used to quote values that must not
// be evaluated by the interpreter. All values manipulated by the
// Order interpreter are sequences of preprocessing tokens. A value
// manipulated by the Order interpreter must be eligible as a single
// macro argument. We use the term \emph{pp-arg} to refer to such
// preprocessing token sequences. A \emph{pp-arg} must not contain,
// nor macro replace to a token sequence containing, unparenthesized
// commas nor unbalanced parentheses.
//
// The binary function `8separate', given two arguments, evaluates
// to a new token sequence that consists of the tokens of the two
// arguments separated by a space. The expression `8N' is a variable
// reference. By default, variable identifiers in the Order
// interpreter are limited to the tokens `8[A-Z]', meaning the digit
// `8' followed by a capital letter.\footnote{The interpreter can be
// extended to be able to use additional variable symbols by
// defining suitable macros.}
//
// Let's then continue with the example. To make the above
// conditional expression really useful, we can wrap it inside a
// function that we can apply to any number of bottles:
#if 0
           8fn(8N,
               8cond((8greater(8N, 1),
                      ...
                      8quote(no more bottles))))
#endif//0
// The `8fn(...)' syntactic form defines an anonymous
// first-class function. The above function binds the variable
// `8N', which is referred to in the conditional expression.
//
// Given the number of bottles bound to the variable `8N' and
// the above auxiliary function bound to the variable `8B', we
// can now output one phrase of the song using a `8print'
// expression:
#if 0
           8print(8ap(8B, 8N) (of beer on the wall,) 8space
                  8ap(8B, 8N) (of beer,) 8space
                  (take one down, pass it around,) 8space
                  8ap(8B, 8dec(8N)) (of beer on the wall.))
#endif//0
// A `8print' expression is evaluated by implicitly outputing the
// value of any unparenthesized Order expression and outputing any
// parenthesized sequence of tokens verbatim. The `8ap' syntactic
// form is the function application expression. \emph{Top-level}
// functions, like the prelude function `8greater', but also
// \emph{user-defined} top-level functions, can be applied without
// using `8ap', but `8ap' needs to be used otherwise. The `8space'
// syntactic form can only be used inside `8print' and causes a
// space to be output.\footnote{In other words, the keyword `8space'
// is part of the syntax of `8print' expressions.} Ordinarily, while
// generating program code, \emph{whitespace separations} in the
// output are insignificant, and it doesn't matter that heading and
// trailing whitespace is implicitly removed from the output, but in
// this case we'd like to have a space after each comma. The
// `8print' form can actually be used to output arbitrary sequences
// of preprocessing tokens, including unbalanced parentheses using
// the syntactic forms `8lparen' and `8rparen' that output a left
// and a right paren, respectively.
//
// To execute the above `8print' expression for all numbers from 99
// to 1 we can wrap it in an anonymous function and use the
// \emph{higher-order} function `8for_each_in_range', conveniently
// provided by the Order prelude, to make the function applications:
#if 0
      8for_each_in_range
      (8fn(8N,
           8print(8ap(8B, 8N) (of beer on the wall,) 8space
                  ...
                  8ap(8B, 8dec(8N)) (of beer on the wall.))),
       100, 1)
#endif//0
// You may wonder about the above upper bound of 100.
// `8for_each_in_range' always considers the upper bound open and
// the lower bound closed regardless of the direction, ascending or
// descending, in which the range is specified. This minimizes
// special cases.
//
// To complete the program, we use a `8let' expression to bind the
// auxiliary function to `8B', include the Order interpreter header,
// and invoke the Order interpreter using the `ORDER_PP' macro:
//<
#include "order/interpreter.h"

ORDER_PP
(8let((8B, 8fn(8N,
               8cond((8greater(8N, 1),
                      8separate(8N, 8quote(bottles)))
                     (8equal(8N, 1),
                      8quote(1 bottle))
                     (8else,
                      8quote(no more bottles))))),
      8for_each_in_range
      (8fn(8N,
           8print(8ap(8B, 8N) (of beer on the wall,) 8space
                  8ap(8B, 8N) (of beer,) 8space
                  (take one down, pass it around,) 8space
                  8ap(8B, 8dec(8N)) (of beer on the wall.))),
       100, 1)))
//>
// The above program, when preprocessed, generates some 2773 tokens
// on one line containing the desired lyrics. As you can see, we
// didn't need to define any macros to generate the desired output.
// In fact, the Order intepreter is complete in the sense that it
// can \emph{theoretically} generate any finite sequence of
// preprocessing tokens without requiring the definition of
// additional macros. In practice, however, it usually makes sense
// to use additional macros in the form of \emph{ad hoc code
// generation macros} and Order \emph{top-level definitions} to
// both simplify and optimize a generator. Let's see how to do it.
//
// First we'll write an ad hoc macro for generating one phrase of
// the song:
//<
#define GEN_phrase(N_bottles, N_minus_1_bottles)    \
  N_bottles of beer on the wall,                    \
  N_bottles of beer, take one down, pass it around, \
  N_minus_1_bottles of beer on the wall.
//>
// The above function-like macro, named `GEN_phrase', takes two
// arguments, `N_bottles' and `N_minus_1_bottles', and expands to a
// single phrase of the song. The idea is to use the above macro to
// generate all the phrases of the song by outputing a sequence of
// 99 macro invocations. In general, a viable design heuristic is to
// completely parameterize any ad hoc code generation macro and then
// use the Order interpreter to implement any non-trivial logic to
// compute the parameters. This minimizes the need to implement
// complex logic using only the low-level macro mechanism.
//
// To compute the arguments to the `GEN_phrase' macro, we give a
// top-level definition, named `8bottles', for the previously used
// auxiliary function for referring to the number of bottles:
//<
#define ORDER_PP_DEF_8bottles                          \
ORDER_PP_FN(8fn(8N,                                    \
                8cond((8greater(8N, 1),                \
                       8separate(8N, 8quote(bottles))) \
                      (8equal(8N, 1),                  \
                       8quote(1 bottle))               \
                      (8else,                          \
                       8quote(no more bottles)))))
//>
// The above object-like macro definition is an Order top-level
// definition. Order top-level definition macros use the prefix
// `ORDER_PP_DEF_', which makes accidental macro replacement
// unlikely and allows the Order interpreter to deconstruct
// expressions using concatenation. The `ORDER_PP_FN' tagging macro
// effectively tells the Order interpreter that `8bottles' defines a
// function. Order also has other forms of top-level definitions
// such as constant and macro definitions.
//
// To actually output an invocation of the `GEN_phrase' macro, we
// use the `8emit' procedure:
#if 0
              8emit(8quote(GEN_phrase),
                    8tuple(8bottles(8N),
                           8bottles(8dec(8N))))
#endif//0
// Given two arguments, the `8emit' procedure outputs both of the
// arguments separated by a space. Above, `8emit' is used to output
// the identifier of a function-like macro and a tuple\footnote{In
// Order, a tuple is a parenthesized and comma separated list of
// elements.} that matches the formal parameters of the
// function-like macro `GEN_phrase'. As one could expect, it will
// eventually result in expanding the function-like macro generating
// one phrase of the song.
//
// The complete program now looks like this:
//<
#include "order/interpreter.h"

#define GEN_phrase(N_bottles, N_minus_1_bottles)    \
  N_bottles of beer on the wall,                    \
  N_bottles of beer, take one down, pass it around, \
  N_minus_1_bottles of beer on the wall.

#define ORDER_PP_DEF_8bottles                          \
ORDER_PP_FN(8fn(8N,                                    \
                8cond((8greater(8N, 1),                \
                       8separate(8N, 8quote(bottles))) \
                      (8equal(8N, 1),                  \
                       8quote(1 bottle))               \
                      (8else,                          \
                       8quote(no more bottles)))))

ORDER_PP(8for_each_in_range
         (8fn(8N,
              8emit(8quote(GEN_phrase),
                    8tuple(8bottles(8N),
                           8bottles(8dec(8N))))),
          100, 1))

#undef GEN_phrase
//>
// Depending on the preprocessor, the above program can be
// preprocessed significantly faster than the previous program using
// `8print'. This is because the state of the program being
// evaluated is smaller and the program performs fewer steps. The C
// preprocessor has some interesting performance characteristics,
// which we will investigate later.
//
// All that is left to do is to preprocess this example, direct the
// output to the printer, get 99 bottles of beer and a few friends
// to sing the song\ldots{} On second thought, you could also just
// continue reading.
