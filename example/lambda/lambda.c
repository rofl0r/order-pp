// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "brd_parser.h"
#include "datatype.h"
#include "error.h"
#include "str.h"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// ## An evaluator for the lambda calculus
//
// We will now implement a simple interpreter for the lambda
// calculus using the variant record generator ("datatype.h") and
// the backtracking recursive descent parser generator
// ("brd_parser.h"). We will discuss the generators here only
// briefly. The reader should already be familiar with them.
//
// ### Representation of programs
//
// Let's start by defining the most important data types used in the
// interpreter.
//
// We will represent identifiers using interned constant strings, as
// defined by the `str'-module ("str.h" and "str.c"). The main
// advantage of the representation is that it makes it very
// efficient to compare identifiers for equality.

typedef str_type id_type;

// Like many language processors do, our intepreter uses an abstract
// syntax tree representation for programs. A natural way to
// represent abstract syntax trees is to use variant records. In our
// little language, a program consist of a list of definitions and a
// single lambda calculus expression to evaluate. A definition
// associates an identifier with the value of an expression.
// Finally, an expression is either a lambda abstraction, a function
// application or a variable reference. This informal definition is
// captured precisely by the following data type definition, which
// defines a set of three variant records.

DATATYPE_define((prg_type,
                 (Prg_Def,
                  (def_type)(prg_type))
                 (Prg_Exp,
                  (exp_type)))
                (def_type,
                 (Def,
                  (id_type)(exp_type)))
                (exp_type,
                 (Exp_Lambda,
                  (id_type)(exp_type))
                 (Exp_Apply,
                  (exp_type)(exp_type))
                 (Exp_Var,
                  (id_type))))

// As indicated, the above defines three variant record types at
// once. The reason for defining them all at once is that the type
// of a program, `prg_type', refers to the type of definitions,
// `def_type', and the type of definitions refers to the type of
// expressions, `exp_type'. In this case, we could have also defined
// the three types separately, in reverse order, because the
// dependency relation between the types is acyclic, but it is
// perhaps more natural to define the type of programs first. If a
// set of variant records has a cyclic dependency relation, then
// there is no choice, but to define them all at once.
//
// In general, the `DATATYPE_define' macro takes a sequence of
// variant record type definitions. Each type definition consists of
// a pair of the type name and the sequence of constructors
// definitions. Each constructor definitions is a pair consisting of
// the constructor name and a sequence of field types. The
// `DATATYPE_define' macro then produces definitions of all the
// variant record types along with constructor functions for all the
// variant constructors.
//
// ### Unparsing programs
//
// In the previous section, we defined the representation of the
// abstract syntax of our little language. In this section we will
// consider the concrete syntax by defining a set of functions that
// translate an abstract syntax tree to the concrete syntax.
//
// First, let's take a look at a BNF description of the concrete
// syntax we are going to generate. The description is embedded in
// the constant string `lambda_syntax' below.

static const str_type lambda_syntax
= ("  <prg> ::= <def> <prg>         Sequence of definitions\n"
   "         |  <exp>               Expression to reduce\n"
   "\n"
   "  <def> ::= def id = <exp>      Constant definition\n"
   "\n"
   "  <exp> ::= \\ id . <exp>        Lambda abstraction\n"
   "         |  ( <exp> <exp> )     Function application\n"
   "         |  id                  Variable reference\n"
   "\n"
   "  id = [a-zA-Z_][0-9a-zA-Z_]*   Identifier\n");

// As you can see, each definition begins with the token `def' and
// the token `=' separates the identifier and the expression of a
// definition. Similarly a lambda abstraction begins with the token
// `\' and a `.' separates the identifier and the expression of a
// lambda abstraction. Function applications are parenthesized pairs
// of expression without a puncturator between the expressions.
//
// The description of the syntax of identifiers above isn't in BNF,
// but is rather a regular expression. An identifier must start
// with a letter or an underscore and can optionally continue with
// digits, letters or underscores.
//
// While not an explicit part of the above syntax description, we
// will also use whitespace to separate tokens.
//
// We will then define the unparsing functions that will translate
// the abstract syntax to the concrete syntax described above. The
// first function we define, `exp_unparse', translates an expression
// to a string containing the concrete syntax of the expression.

static str_type exp_unparse(exp_type exp) {
  DATATYPE_switch
    (exp, exp_type,
     (Exp_Lambda,(var)(body), {
       return str_cat("\\", var, ".", exp_unparse(body),
                      str_end); })
     (Exp_Apply,(lhs)(rhs), {
       return str_cat("(", exp_unparse(lhs),
                      " ", exp_unparse(rhs),
                      ")",
                      str_end); })
     (Exp_Var,(var), {
       return var; }));
}

// The most interesting thing in `exp_unparse' is the use of the
// `DATATYPE_switch' macro. Everything else is quite obvious.
//
// The `DATATYPE_switch' macro takes three parameters. The first
// parameter is the expression whose value is to be deconstructed.
// The second is the type of the value. The third parameter is a
// sequence of cases. Each case, represented by a variadic tuple,
// names a constructor and variables to be bound to the fields of
// the constructor and ends with the code to be executed if the
// constructor matches the value. Strictly speaking, it isn't
// necessary to make the code into a block by surrouding it with
// braces, but it can makes the code stand out making it easier to
// read.
//
// The `DATATYPE_switch' macro generates code that evaluates the
// given expression and examines its value to decide which case to
// execute, depending on the constructor. Then the variables
// specified along with the constructor pattern are given the values
// of the fields of the variant. The combination of case analysis
// and the binding of variables to fields makes `DATATYPE_switch'
// rather convenient to use compared to writing code with similar
// semantics manually.
//
// You might also make a note of the use of recursion. Recursion is
// a natural way to implement algorithms on variant records. While C
// doesn't require a compiler to implement tail recursion
// optimizations, a good compiler implements it anyway and the
// performance cost of using recursion is not prohibitive.
//
// Then we'll define a simple function `def_unparse' to translate a
// definition to a string containing the concrete syntax of a
// definition.

static str_type def_unparse(def_type def) {
  DATATYPE_switch
    (def, def_type,
     (Def,(var)(body), {
       return str_cat("def ", var, " = ", exp_unparse(body),
                      str_end); }));
}

// The above function simply calls `exp_unparse' to translate the
// body of a definition to a string.
//
// Finally, we will define the function `prg_unparse', which
// translates a complete program to a string containing the concrete
// syntax.

static str_type prg_unparse(prg_type prg) {
  DATATYPE_switch
    (prg, prg_type,
     (Prg_Def,(first)(rest), {
       return str_cat(def_unparse(first), " ", prg_unparse(rest),
                      str_end); })
     (Prg_Exp,(last), {
       return exp_unparse(last); }));
}

// ### Evaluating programs
//
// We will now turn to the evaluation of programs. The simple
// evaluator we will implement here is based on beta reduction, that
// is, substitution of values for variables.
//
// We will start by defining the `exp_subst' function, which
// substitutes a given expression for a given variable in another
// expression.

static exp_type exp_subst(exp_type with, id_type id, exp_type in) {
  DATATYPE_switch
    (in, exp_type,
     (Exp_Lambda,(var)(body), {
       return var == id
         ? in
         : Exp_Lambda(var, exp_subst(with, id, body)); })
     (Exp_Apply,(lhs)(rhs), {
       return Exp_Apply(exp_subst(with, id, lhs),
                        exp_subst(with, id, rhs)); })
     (Exp_Var,(var), {
       return var == id
          ? with
          : in; }));
}

// Then we will define the function `exp_reduce', which reduces, or
// evaluates, a given expression. Our `exp_reduce' has the strict
// semantics, meaning that arguments are evaluated before
// substitution.

static exp_type exp_reduce(exp_type exp) {
  DATATYPE_switch
    (exp, exp_type,
     (Exp_Lambda,, {
       return exp; })
     (Exp_Apply,(lhs)(rhs), {
       DATATYPE_switch
         (exp_reduce(lhs), exp_type,
          (Exp_Lambda,(var)(body), {
            return exp_reduce(exp_subst(exp_reduce(rhs),
                                        var,
                                        body)); })
          (Exp_Apply,, {
            ERROR_exit("'%s' doesn't reduce to a Lambda.",
                       exp_unparse(lhs)); })
          (Exp_Var,, {
            ERROR_exit("'%s' doesn't reduce to a Lambda.",
                       exp_unparse(lhs)); })); })
     (Exp_Var,(var), {
       ERROR_exit("Unbound variable '%s'.", var); }));
}

// The astute reader familiar with lambda calculus and beta
// reduction might now be thinking that we forgot alpha conversion,
// that is, renaming of bound variables to avoid incorrect variable
// capture. We could have handled alpha conversion in `exp_reduce',
// like is often done in mathematical definitions of beta reduction,
// but doing so would be inefficient, leading to repeated alpha
// conversion of the same variables. Instead, we will perform full
// alpha conversion just once.
//
// First we'll define the function `id_fresh' that generates a fresh
// identifier. We make a point of making the form of the generated
// identifier such that it doesn't correspond to the syntax of the
// language.

static id_type id_fresh(id_type base) {
  static unsigned int counter = 0;

  if (!++counter)
    ERROR_exit("Counter overflow.");

  return str_cat(base, "{", uint_to_str(counter), "}", str_end);
}

// Then we'll define the function `exp_fresh' which renames all
// bound variables in an expression producing a new expression.

static exp_type exp_fresh(exp_type exp) {
  DATATYPE_switch
    (exp, exp_type,
     (Exp_Lambda,(var)(body), {
       id_type new_var = id_fresh(var);
       return Exp_Lambda(new_var,
                         exp_fresh(exp_subst(Exp_Var(new_var), var, body))); })
     (Exp_Apply,(lhs)(rhs), {
       return Exp_Apply(exp_fresh(lhs), exp_fresh(rhs)); })
     (Exp_Var,, {
       return exp; }));
}

// There is one more thing left to do. Definitions are not a normal
// part of the lambda calculus and aren't evaluated by our previous
// functions. For the sake of simplicity and to demonstrate that
// definitions aren't actually needed, we will simply convert a
// program into an expression by turning definitions into an
// expression that applies the body of a definition to a lambda
// whose variable is the name of the definition and whose body is
// the rest of the program.

static exp_type prg_to_exp(prg_type prg) {
  DATATYPE_switch
    (prg, prg_type,
     (Prg_Def,(first)(rest), {
       DATATYPE_switch
         (first, def_type,
          (Def,(var)(body), {
            return Exp_Apply(Exp_Lambda(var, prg_to_exp(rest)),
                             body); })); })
     (Prg_Exp,(last), {
       return last; }));
}

// We could now build programs by calling the variant constructors
// by hand and then calling the evaluation functions. However, we
// will not do it, because it is much more convenient to define a
// parser and then use the much shorter concrete syntax.
//
// ### The parser
//
// We will use the simple backtracking recursive descent parser
// generator ("brd_parser.h") to implement the parser, but first we
// need a function for lexing an identifier token.

static _Bool id_parse(str_type *pstr, id_type *id) {
  assert(pstr);
  assert(*pstr);

  str_type str = *pstr;

  if (!isalpha(*str) && '_' != *str)
    return 0;

  while (isalnum(*str) || '_' == *str)
    ++str;

  *id = str_substr(*pstr, str);
  *pstr = str;

  return 1;
}

// With the `id_parse' and a couple of functions provided by the
// `str'-module ("str.h" and "str.c"), namely `str_skip_spaces' and
// `str_match_prefix', we are ready to define the parser.

BRD_PARSER(static, prg_parse,
           str_skip_spaces, str_match_prefix,
           (id, id_type, id_parse),
           (prg, prg_type,
            ((def,first)(prg,rest), {
              *prg = Prg_Def(first, rest); })
            ((exp,last), {
              *prg = Prg_Exp(last); }))
           (def, def_type,
            (("def")(id,var)("=")(exp,body), {
              *def = Def(var, body); }))
           (exp, exp_type,
            (("\\")(id,var)(".")(exp,body), {
              *exp = Exp_Lambda(var, body); })
            (("(")(exp,lhs)(exp,rhs)(")"),  {
              *exp = Exp_Apply(lhs, rhs); })
            ((id,var), {
              *exp = Exp_Var(var); })))

// The `BRD_PARSER' macro implements the simple parser generator.
// The first two parameters of the macro specificy the linkage and
// name of the main entry point to the generated parser. The next
// two parameters specify what to do between tokens and how to match
// punctuation tokens. The next parameter is a sequence of token
// specification each being a triple of the name, type and lexing
// function. The last parameter is a sequence of productions,
// defining the grammar, with semantic actions.
//
// The `BRD_PARSER' macro then generates a simple backtracking
// recursive descent parser according to the grammar that executes
// the semantic actions while parsing. The semantics actions should
// not have side effects, because, for simplicity, the generated
// parser doesn't wait until it has a complete parse, but rather
// calls the actions immediately upon recognizing a complete
// production.
//
// The above parser doesn't recognize `def' as a keyword, but
// instead allows an identifier named def. This could lead to
// syntactic errors being reported too late. We leave it as an
// exercise to treat `def' properly as a keyword that is not allowed
// as an identifier.
//
// ### Putting it all together

int main(int argc, char* argv[]) {
  if (2 != argc) {
    fprintf
      (stderr,
       "Usage: lambda '<prg>'\n"
       "\n"
       "The entire program must be a single argument.\n"
       "\n"
       "Syntax:\n"
       "\n"
       "%s"
       "\n"
       "For example,\n"
       "\n"
       "  lambda 'def true = \\t.\\e.t\n"
       "          def false = \\t.\\e.e\n"
       "          ((true false) true)'\n"
       "\n"
       "would print\n"
       "\n"
       "  \\t.\\e.e\n",
       lambda_syntax);
    return EXIT_FAILURE;
  }

  str_type str = argv[1];
  prg_type prg = 0;
  if (!prg_parse(&str, &prg))
    ERROR_exit("Couldn't parse '%s'.", str);
  str_skip_spaces(&str);
  if ('\0' != *str)
    ERROR_exit("Garbage '%s' following program.", str);

  exp_type reduced_exp = exp_reduce(exp_fresh(prg_to_exp(prg)));
  printf("%s\n", exp_unparse(reduced_exp));

  return EXIT_SUCCESS;
}

// ### Exercises
//
// 1. Change the parser to treat `def' as a keyword.
// 2. Design and implement better error messages.
