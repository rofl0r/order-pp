// (C) Copyright Vesa Karvonen 2004.
//
//    Distributed under the Boost Software License, Version 1.0.

#include <stdio.h>
#include <ctype.h>
#include "datatype.h"
#include "ll1_parser.h"

typedef char* c_string;
typedef c_string sym_type;

#define DATATYPE_term_type (term_type,                  \
                            ((Lambda,                   \
                              (sym_type)(term_type)))   \
                            ((Apply,                    \
                              (term_type)(term_type)))  \
                            ((Ref,                      \
                              (sym_type))))

DATATYPE_declare(term_type);
DATATYPE_define(term_type);

static void skip_space(c_string* str) {
  while (isspace(**str))
    ++*str;
}

static int match(c_string pat, c_string str) {
  int result = 0;
  while ('\0' != *pat && *pat == *str) ++result, ++pat, ++str;
  return '\0' == *pat
    ? result
    : 0;
}

static sym_type parse_sym(c_string* str) {
  if (!isalpha(**str))
    return null;
  sym_type start = *str;
  while (isalnum(**str) || '_' == **str)
    ++*str;
  return intern_sym(start, *str);
}

static term_type parse_term(c_string str) {
  LL1_PARSER(str, skip_space, match,
             ((sym, sym_type, parse_sym)),
             (term, term_type,
              (("\\") ((sym, var)) (".") ((term, body)),
               ({ return term_type_Lambda(var, body); }))
              (("(") ((term, lhs)) ((term, rhs)) (")"),
               ({ return term_type_Apply(lhs, rhs); }))
              (((sym, var)),
               ({ return term_type_Ref(var); }))));
}

static term_type subst(sym_type sym, term_type in, term_type with) {
  DATATYPE_switch
    ( in, term_type,
      ((Lambda,(var)(body),
        ({ return (var == sym)
             ? in
             : term_type_Lambda(var,
                                subst(sym, body, with)); })))
      ((Apply,(lhs)(rhs),
        ({ return term_type_Apply(subst(sym, lhs, with),
                                  subst(sym, rhs, with)); })))
      ((Ref,(var),
        ({ return (var == sym)
             ? with
             : var; }))) );
}

static term_type reduce(term_type term) {
  DATATYPE_switch
    ( term, term_type,
      ((Lambda,(var)(body),
        ({ return term; })))
      ((Apply,(lhs)(rhs),
        ({ DATATYPE_switch
             ( reduce(lhs), term_type,
               ((Lambda,(var)(body),
                 ({ return reduce(subst(var,
                                        body,
                                        reduce(rhs))); })))
               ((Apply,,
                 ({ error("'%s' doesn't reduce to a Lambda.",
                          term_to_string(lhs)); })))
               ((Ref,,
                 ({ error("'%s' doesn't reduce to a Lambda.",
                          term_to_string(lhs)); })))); })))
      ((Ref,(var),
        ({ error("Unbound variable '%s'.", var); }))) );
}

int main(int argc, c_string argv[]) {
  if (argc < 2) {
    printf("Usage: lambda '<term>'\n"
           "\n"
           "Syntax:\n"
           "\n"
           "  <term> ::= \\ sym . <term>\n"
           "           | ( <term> <term> )\n"
           "           | sym\n"
           "\n"
           "  sym = [a-zA-Z][a-zA-Z0-9_]+\n");
    return 0;
  }

  printf(term_to_string(reduce(parse_term(&argv[1]))));

  return 0;
}
