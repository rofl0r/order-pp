#ifndef ORDER_EXAMPLE_IS_FUNCTION_HPP_VAJK20040620
#define ORDER_EXAMPLE_IS_FUNCTION_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include "order/interpreter.h"

// ## `is_function_tester' templates
//
// In this example we generate some repetitive code that could be
// used to implement a particular C++ type traits template, namely a
// type trait by the name `is_function<T>', which tests whether a
// given type is a function type. The reader might want to refer to
// the documentation and source code of the `is_function<T>' type
// trait of the Boost type traits library [Boost].
//
// In order to portably distinguish function types from other types,
// the implementation of the `is_function<T>' type trait could use
// a couple of auxiliary types

struct yes_type { int type[2]; };
typedef int no_type;

// an ellipsis function

no_type is_function_tester(...);

// and function templates of the form

#if 0
template<class R>
yes_type is_function_tester(R (*)());

template<class R, class A0>
yes_type is_function_tester(R (*)(A0));

template<class R, class A0, class A1>
yes_type is_function_tester(R (*)(A0,A1));

// ...
#endif

// It is then possible to distinguish between function types and
// other types taking advantage of overload resolution and the
// compile-time 'sizeof' operator.
//
// One function template is required for each number of parameters
// and, as can easily be seen, in order to support $n$ parameters,
// $\Theta(n^2)$ tokens are needed. Instead of laboriously writing
// the repetitive templates by hand, we'd like to generate them
// using a simple metaprogram.
//
// Even if we would be willing to write the repetitive code by hand,
// we would still have one problem. We don't know how many
// repetitions we need. If we would support 10 parameters, someone
// would surely need 11 parameters. On the other hand, if we would
// support 100 parameters, it would slow down compilation for all
// users. Ideally, of course, we wouldn't want to have the
// repetition in the first place, but we are somewhat out of luck
// here.{Actually, in this particular case, given a fully conforming
// C++ compiler, we wouldn't need the repetition, but the repetition
// is needed for portability and structurally identical (isomorphic)
// repetition is needed, even on conforming C++ compilers, in other
// cases.} The next best thing is that the maximum number of
// parameters could easily be specified, making the `is_function<T>'
// type trait configurable. So, let's make it so, by using a
// conditional macro definition, that can be externally overridden
// by a user.

#ifndef IS_FUNCTION_MAX_ARGS
#define IS_FUNCTION_MAX_ARGS 10
#endif

// We can then refer to the `IS_FUNCTION_MAX_ARGS' macro in the
// following program that generates the `is_function_tester'
// templates.

ORDER_PP(8for_each_in_range
         (8fn(8N,
              8print((template<class R) 8emit_trailing_params(0, 8N, 8(class A)) (>)
                     (yes_type is_function_tester)
                     8parens((R(*)) 8parens(8emit_params(0, 8N, 8(A))))
                     (;))),
          0,
          8inc(IS_FUNCTION_MAX_ARGS)))

// The above program uses the higher-order function
// `8for_each_in_range' to invoke an anonymous function, defined by
// the `8fn(...)' expression, for each number in the range `[0,
// IS_FUNCTION_MAX_ARGS]'. On each invocation, the anonymous
// function outputs a single `is_function_tester' template with the
// number of parameters determined by the number passed by
// `8for_each_in_range'.
//
// The `8print' block used in the above code makes it fairly
// convenient to generate arbitrary output, even unbalanced
// parentheses. `8print' basically outputs any sequence of tokens
// inside parentheses verbatim and implicitly outputs the value of
// any non-parenthesized Order expression. The `8parens' form, that
// can be used inside `8print', outputs a parenthesized sequence of
// tokens.
//
// `8emit_params' and `8emit_trailing_params' are some of the most
// specific procedures provided by the Order prelude to support
// typical code generation tasks. Both of them output an indexed and
// comma separated sequence of tokens. The only difference is that
// `8emit_trailing_params' outputs a comma preceding the first
// generated token.
//
// As you can see, no ad hoc code generation macros were needed to
// produce the output. In fact, the Order interpreter is complete in
// the sense that it can theoretically produce any sequence of up to
// a few billion tokens without requiring the use of additional
// macros. However, it usually makes sense to use ad hoc code
// generation macros, as well as Order definition macros, because
// they can both simplify and speed up the generator program.

#endif
