// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include "datatype.h"
#include "error.h"
#include "ll1_parser.h"
#include "str.h"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef str_type sym_type;

DATATYPE_define(exp_type,
                ((Exp_Lambda,
                  (sym_type)(exp_type)))
                ((Exp_Apply,
                  (exp_type)(exp_type)))
                ((Exp_Ref,
                  (sym_type))))

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

LL1_PARSER(static, exp_parse, str_skip_spaces, str_match_prefix,
           ((sym, sym_type, sym_parse)),
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
        ({ return str_cat("\\", var, ".", exp_unparse(body), str_end); })))
      ((Exp_Apply,(lhs)(rhs),
        ({ return str_cat("(", exp_unparse(lhs), " ", exp_unparse(rhs), ")", str_end); })))
      ((Exp_Ref,(var),
        ({ return var; }))) );
  assert(0);
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
             : in; }))) );
  assert(0);
}

static exp_type exp_reduce(exp_type exp) {
  DATATYPE_switch
    ( exp, exp_type,
      ((Exp_Lambda,,
        ({ return exp; })))
      ((Exp_Apply,(lhs)(rhs),
        ({ DATATYPE_switch
             ( exp_reduce(lhs), exp_type,
               ((Exp_Lambda,(var)(body),
                 ({ return exp_reduce(exp_subst(var,
                                                body,
                                                exp_reduce(rhs))); })))
               ((Exp_Apply,,
                 ({ error("'%s' doesn't reduce to a Lambda.",
                          exp_unparse(lhs)); })))
               ((Exp_Ref,,
                 ({ error("'%s' doesn't reduce to a Lambda.",
                          exp_unparse(lhs)); })))); })))
      ((Exp_Ref,(var),
        ({ error("Unbound variable '%s'.", var); }))) );
  assert(0);
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("Usage: lambda '<exp>'\n"
           "\n"
           "Syntax:\n"
           "\n"
           "  <exp> ::= \\ sym . <exp>\n"
           "         |  ( <exp> <exp> )\n"
           "         |  sym\n"
           "\n"
           "  sym = [a-zA-Z_][a-zA-Z0-9_]+\n");
    return EXIT_SUCCESS;
  }

  str_type str = argv[1];
  exp_type exp = 0;
  if (!exp_parse(&str, &exp))
    error("Couldn't parse '%s'\n", str);
  printf("exp = %s\n", exp_unparse(exp));

  exp_type reduced_exp = exp_reduce(exp);
  printf("reduced exp = %s\n", exp_unparse(reduced_exp));

  return EXIT_SUCCESS;
}
