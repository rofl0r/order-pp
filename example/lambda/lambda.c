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
// calculus using the data type facility ("datatype.h") and the
// backtracking recursive descent parser generator ("brd_parser.h").
//
// ### Representation of data
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
// In general, the `DATATYPE_define' form takes a sequence of
// variant record type definitions. Each type definition consists of
// a pair of the type name and the sequence of constructors
// definitions. Each constructor definitions is a pair consisting of
// the constructor name and a sequence of field types. The
// `DATATYPE_define' form then produces definitions of all the
// variant record types along with constructor functions for all the
// variant constructors.
//
// We will also be using environments to store the values of named
// definitions. In our interpreter, the names will be identifiers
// and the values will be expressions. A convenient, although not
// very efficient, way to represent environments is to use
// association lists. An association list is essentially a linked
// list whose nodes contain a pair containing a key and a value. We
// will represent environments using a variant record that mimics an
// association list.

DATATYPE_define((env_type,
                 (Env_Bind,
                  (id_type)(exp_type)(env_type))
                 (Env_Nil,
                  )))

// Note that `Env_Nil' is a nullary constructor.
//
// While we are at it, why don't we define a function that finds and
// returns the expression associated with an identifier from an
// environment. The `env_get' function

static exp_type env_get(env_type env, id_type var) {
  DATATYPE_switch
    (env, env_type,
     (Env_Bind,(key)(value)(rest), {
       return key == var
         ? value
         : env_get(rest, var); })
     (Env_Nil,, {
       ERROR_exit("Unbound variable '%s'.", var); }));
}

// uses the `DATATYPE_switch' form to deconstruct environments. The
// `DATATYPE_switch' form takes three parameters. The first
// parameter is the expresion whose value is to be deconstructed.
// The second is the type of the value. The third parameter is a
// sequence of cases. Each case, represented by a variadic tuple,
// names a constructor and variables to be bound to the fields of
// the constructor and ends with the code to be executed if the
// constructor matches the value. Strictly speaking, it isn't
// necessary to make the code into a block by surrouding it with
// braces, but it can makes the code stand out making it easier to
// read.
//
// The `DATATYPE_switch' form generates code that evaluates the
// given expression and examines its value to decide which case to
// execute, depending on the constructor. Then the variables
// specified along with the constructor pattern are given the values
// of the fields of the variant. The combination of case analysis
// and the binding of variables to fields makes `DATATYPE_switch'
// rather convenient to use compared to writing code with similar
// semantics manually.
//
// On a `Env_Bind' variant, `env_get' tests whether the key stored
// in the variant is the same as the identifier being looked up. If
// that is the case, then the associated value is returned.
// Otherwise the function calls itself recursively to process the
// rest of the environment. We will be using recursion throughout
// the interpreter. Recursion is a natural way to process inductive
// variant records.
//
// The second variant of an environment is `Env_Nil', which
// terminates the association list. If `env_get' reaches `Env_Nil',
// it directly reports an error and terminates the program. In a
// more serious language implementation, such a simple error
// handling strategy would probably not be appropriate. We leave it
// as an exercise to the reader to implement better error messages.
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

// As could be expected, the `exp_unparse' function uses the
// `DATATYPE_switch' form and recursion.
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
// is, substition of values for variables.
//
// We will start by defining the `exp_subst' function, which
// substitutes a given expresion for the variable `id' in an
// expression.

static exp_type exp_subst(id_type id, exp_type in, exp_type with) {
  DATATYPE_switch
    (in, exp_type,
     (Exp_Lambda,(var)(body), {
       return var == id
         ? in
         : Exp_Lambda(var, exp_subst(id, body, with)); })
     (Exp_Apply,(lhs)(rhs), {
       return Exp_Apply(exp_subst(id, lhs, with),
                        exp_subst(id, rhs, with)); })
     (Exp_Var,(var), {
       return var == id
          ? with
          : in; }));
}

// Then we will define the function `exp_reduce', which reduces, or
// evaluates, a given expression.

static exp_type exp_reduce(exp_type exp, env_type env) {
  DATATYPE_switch
    (exp, exp_type,
     (Exp_Lambda,, {
       return exp; })
     (Exp_Apply,(lhs)(rhs), {
       DATATYPE_switch
         (exp_reduce(lhs, env), exp_type,
          (Exp_Lambda,(var)(body), {
            return exp_reduce(exp_subst(var,
                                        body,
                                        exp_reduce(rhs, env)),
                              env); })
          (Exp_Apply,, {
            ERROR_exit("'%s' doesn't reduce to a Lambda.",
                       exp_unparse(lhs)); })
          (Exp_Var,, {
            ERROR_exit("'%s' doesn't reduce to a Lambda.",
                       exp_unparse(lhs)); })); })
     (Exp_Var,(var), { 
       return env_get(env, var); }));
}

static exp_type prg_eval(prg_type prg, env_type env) {
  DATATYPE_switch
    (prg, prg_type,
     (Prg_Def,(first)(rest), {
       DATATYPE_switch
         (first, def_type,
          (Def,(var)(body), {
            return prg_eval(rest,
                            Env_Bind(var,
                                     exp_reduce(body, env),
                                     env)); })); })
     (Prg_Exp,(last), {
       return exp_reduce(last, env); }));
}

// ### The parser

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

  exp_type reduced_exp = prg_eval(prg, Env_Nil());
  printf("%s\n", exp_unparse(reduced_exp));

  return EXIT_SUCCESS;
}

// ### Exercises
//
// 1. Change the parser to treat `def' as a keyword.
// 2. Design and implement better error messages.
