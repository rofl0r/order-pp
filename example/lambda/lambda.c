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

typedef str_type sym_type;

DATATYPE_define(/*** Program ***/
                ((prg_type,
                  ((Prg_Def,
                    (def_type)(prg_type)))
                  ((Prg_Exp,
                    (exp_type)))))
                /*** Definition ***/
                ((def_type,
                  ((Def,
                    (sym_type)(exp_type)))))
                /*** Expression ***/
                ((exp_type,
                  ((Exp_Lambda,
                    (sym_type)(exp_type)))
                  ((Exp_Apply,
                    (exp_type)(exp_type)))
                  ((Exp_Ref,
                    (sym_type))))))

DATATYPE_define(/*** Environment ***/
                ((env_type,
                  ((Env_Bind,
                    (sym_type)(exp_type)(env_type)))
                  ((Env_Nil,
                    )))))

static exp_type env_get(env_type env, sym_type var) {
  DATATYPE_switch
    ( env, env_type,
      ((Env_Bind,(key)(value)(rest),
        ({ return key == var
             ? value
             : env_get(rest, var); })))
      ((Env_Nil,,
        ({ ERROR_exit("Unbound variable '%s'.", var); }))));
}

static _Bool sym_parse(str_type *pstr, sym_type *sym) {
  assert(pstr);
  assert(*pstr);

  str_type str = *pstr;

  if (!isalpha(*str) && '_' != *str)
    return 0;

  while (isalnum(*str) || '_' == *str)
    ++str;

  *sym = str_substr(*pstr, str);
  *pstr = str;

  return 1;
}

BRD_PARSER(static, prg_parse,
           str_skip_spaces, str_match_prefix,
           /*** Symbol terminal ***/
           ((sym, sym_type, sym_parse)),
           /*** Program ***/
           ((prg, prg_type,
             ((((def, first)) ((prg, rest)),
               ({ *prg = Prg_Def(first, rest); })))
             ((((exp, last)),
               ({ *prg = Prg_Exp(last); })))))
           /*** Definition ***/
           ((def, def_type,
             ((("def") ((sym, var)) ("=") ((exp, body)),
               ({ *def = Def(var, body); })))))
           /*** Expression ***/
           ((exp, exp_type,
             ((("\\") ((sym, var)) (".") ((exp, body)),
               ({ *exp = Exp_Lambda(var, body); })))
             ((("(") ((exp, lhs)) ((exp, rhs)) (")"),
               ({ *exp = Exp_Apply(lhs, rhs); })))
             ((((sym, var)),
               ({ *exp = Exp_Ref(var); }))))))

static str_type exp_unparse(exp_type exp) {
  DATATYPE_switch
    ( exp, exp_type,
      ((Exp_Lambda, (var)(body),
        ({ return str_cat("\\", var, ".", exp_unparse(body),
                          str_end); })))
      ((Exp_Apply,(lhs)(rhs),
        ({ return str_cat("(", exp_unparse(lhs),
                          " ", exp_unparse(rhs),
                          ")",
                          str_end); })))
      ((Exp_Ref,(var),
        ({ return var; }))));
}

static str_type def_unparse(def_type def) {
  DATATYPE_switch
    ( def, def_type,
      ((Def,(var)(body),
        ({ return str_cat("def ", var, " = ", exp_unparse(body),
                          str_end); }))));
}

static str_type prg_unparse(prg_type prg) {
  DATATYPE_switch
    ( prg, prg_type,
      ((Prg_Def,(first)(rest),
        ({ return str_cat(def_unparse(first), " ",
                          prg_unparse(rest),
                          str_end); })))
      ((Prg_Exp,(last),
        ({ return exp_unparse(last); }))));
}

static exp_type exp_subst(sym_type sym, exp_type in, exp_type with) {
  DATATYPE_switch
    ( in, exp_type,
      ((Exp_Lambda,(var)(body),
        ({ return var == sym
             ? in
             : Exp_Lambda(var,
                          exp_subst(sym, body, with)); })))
      ((Exp_Apply,(lhs)(rhs),
        ({ return Exp_Apply(exp_subst(sym, lhs, with),
                            exp_subst(sym, rhs, with)); })))
      ((Exp_Ref,(var),
        ({ return var == sym
             ? with
             : in; }))));
}

static exp_type exp_reduce(exp_type exp, env_type env) {
  DATATYPE_switch
    ( exp, exp_type,
      ((Exp_Lambda,,
        ({ return exp; })))
      ((Exp_Apply,(lhs)(rhs),
        ({ DATATYPE_switch
             ( exp_reduce(lhs, env), exp_type,
               ((Exp_Lambda,(var)(body),
                 ({ return exp_reduce(exp_subst(var,
                                                body,
                                                exp_reduce(rhs, env)),
                                      env); })))
               ((Exp_Apply,,
                 ({ ERROR_exit("'%s' doesn't reduce to a Lambda.",
                               exp_unparse(lhs)); })))
               ((Exp_Ref,,
                 ({ ERROR_exit("'%s' doesn't reduce to a Lambda.",
                               exp_unparse(lhs)); })))); })))
      ((Exp_Ref,(var),
        ({ return env_get(env, var); }))));
}

static exp_type prg_eval(prg_type prg, env_type env) {
  DATATYPE_switch
    ( prg, prg_type,
      ((Prg_Def,(first)(rest),
        ({ DATATYPE_switch
             ( first, def_type,
               ((Def,(var)(body),
                 ({ return prg_eval(rest,
                                    Env_Bind(var,
                                             exp_reduce(body, env),
                                             env)); })))); })))
      ((Prg_Exp,(last),
        ({ return exp_reduce(last, env); }))));
}

int main(int argc, char* argv[]) {
  if (2 != argc) {
    printf("Usage: lambda '<prg>'\n"
           "\n"
           "Syntax:\n"
           "\n"
           "  <prg> ::= <def> <prg>\n"
           "         |  <exp>\n"
           "\n"
           "  <def> ::= def sym = <exp>\n"
           "\n"
           "  <exp> ::= \\ sym . <exp>\n"
           "         |  ( <exp> <exp> )\n"
           "         |  sym\n"
           "\n"
           "  sym = [a-zA-Z_][a-zA-Z0-9_]+\n");
    return EXIT_SUCCESS;
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
