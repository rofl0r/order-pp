# ifndef ORDER_EXAMPLE_TYPELIST_HPP_VAJK20040620
# define ORDER_EXAMPLE_TYPELIST_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

// ## Creating Type Lists
//
// In the book \emph{Modern C++ Design} \cite{alexandrescu:2001},
// Andrei Alexandrescu shows how lists of types can be manipulated
// using template metaprogramming. Adopting the Lisp terminology,
// we'll use the `nil'-type and the `cons<H,T>'-template for
// representing type lists:
//<
namespace typelist {
  struct nil {};

  template<class H, class T = nil>
  struct cons {
    typedef H head_type;
    typedef T tail_type;
  };
}
//>
// A list of types can now be defined using a nested type
// expression. For example, the type expression
//<
//   cons<int, cons<pair<int, float>, cons<float, nil> > >
//>
// would define a list of three types: `int', `pair<int,float>' and
// `float'. As one can imagine, it can be a bit tedious to specify
// lists of types using nested expressions. To ease the burden,
// Alexandrescu introduces a family of `TYPELIST'-macros. Changed to
// use our `nil'-type and `cons'-template, the macros would look
// essentially like this:
//<
//   #define TYPELIST_1(t1) cons<t1, nil>
//   #define TYPELIST_2(t1, t2) cons<t1, TYPELIST_1(t2)>
//   #define TYPELIST_3(t1, t2, t3) cons<t1, TYPELIST_2(t2, t3)>
//   ...
//>
// Although the technique does have some appeal, it has a number of
// problems:
// \begin{itemize}
// \item Commas can cause a headache. For example,
//       `TYPELIST_1(std::pair<int, float>)' doesn't work.
// \item The length of the list must be specified explicitly, which
//       is quite tedious.
// \item The complexity of the implementation is considerable.
//       In order to support $N$ element lists, a total of $N^2$
//       characters of code need to be written.
// \end{itemize}
// The biggest problem is that there is little need to use macros
// for creating type lists. A ``variadic'' template metafunction can
// be defined that creates a list of types without having to
// manually type a heavily nested `cons'-expression. But for the
// sake of this example, let's pretend that we don't know about such
// metafunctions.
//
// ### A More Robust `TYPELIST'-macro
//
// To eliminate the need to count the number of elements, we could
// simply take advantage of variadic macros \cite{c:1999}. However,
// we would still not be able to have commas in types. To allow
// commas, the elements need to be parenthesized. A natural approach
// would be to specify the list of elements as a variadic sequence:
//<
//   TYPELIST((int)
//            (std::pair<int, float>)
//            (float))
//>
// Each parenthesized element of a variadic sequence can contain an
// arbitrary number of commas. We'll adopt this interface, because
// it solves the two main notational problems. The last problem to
// solve is to implement the `TYPELIST'-macro:
//<
#define TYPELIST(type_vseq)                                     \
ORDER_PP(8seq_for_each                                          \
         (8fn(8X,                                               \
              8print((::typelist::cons<) 8open(8X) (,))),       \
          8vseq_to_seq_of_tuples(8(type_vseq))))                \
  ::typelist::nil                                               \
ORDER_PP(8for_each_in_range                                     \
         (8delay(8put(8(>))),                                   \
          0, 8seq_size(8vseq_to_seq_of_tuples(8(type_vseq)))))
//>
// The above macro executes two Order-programs. The first program
// outputs a sequence of open `cons'-calls. The second program
// closes the calls by outputing a sequence of `>'-tokens.

# endif
