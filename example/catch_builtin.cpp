// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#include <iostream>
#include <typeinfo>
#include "order/interpreter.h"

// ## Catching built-in types
//
// This example demonstrates the usage of the Order interpreter for
// generating repetitive C++ code.
//
// ### Motivation
//
// The handling of exceptions of built-in types, such as `int' and
// `float', is one corner of C++ where the language requires
// repetitive code. Specifically, to handle built-in types, C++
// requires one catch per type:
//
//   // ...
//   catch (char  x) { /* ... */ }
//   catch (short x) { /* ... */ }
//   catch (int   x) { /* ... */ }
//   catch (long  x) { /* ... */ }
//   // ...
//
// Normally, you probably couldn't care less about handling
// exceptions of built-in types, because it rarely makes sense to
// throw values of built-in types, but suppose you want to write an
// exception handler that simply handles exceptions of all built-in
// types by, for example, simply writing a simple message to the
// standard error stream `cerr'. You could use such an exception
// handler to help debugging, for example.
//
// ### A sequence of built-in types
//
// We'll be referring to the built-in types we want to handle more
// than once in this example, so it makes sense to define a constant
// that contains the built-in types.

#define ORDER_PP_DEF_8builtin_types                     \
ORDER_PP_CONST((bool)                                   \
               (char)(signed char)(unsigned char)       \
               (wchar_t)                                \
               (short)(unsigned short)                  \
               (int)(unsigned int)                      \
               (long)(unsigned long)                    \
               (float)(double)(long double))

// The above object-like macro definition is an Order top-level
// constant definition. All Order top-level definitions use the
// prefix `ORDER_PP_DEF_'. The prefix helps to prevent unintended
// macro replacement and allows the interpreter to deconstruct
// expressions.
//
// The above definition defines a constant by the name
// `8builtin_types' that contains a sequence. A sequence is simply
// an aggregate data type that consists of a sequence of
// parenthesized elements. The purpose of the prefix `8' is to
// completely shield Order expressions from unintended macro
// replacement. Tokens that start with a digit are not subject to
// macro replacement.
//
// ### Generating handlers
//
// Why don't we then implement the function to handle built-in
// types. The below function, which needs to be called from an
// exception handler, simply rethrows the exception, handles
// exceptions of built-in types, and returns `true' iff the
// exception was of a built-in type.

bool log_builtin_type_exceptions() {
  try {
    throw ; // rethrow exception
  }
  ORDER_PP(8seq_for_each
           (8fn(8T,
                8print((catch) 8parens(8T (t))
                       ({ std::cerr << "Caught a ") 8stringize(8T) (": " << t << "\n"; }))),
            8builtin_types))
  catch (...) {
    return false;
  }
  return true;
}

// The interesting part above is the use of the `ORDER_PP' macro,
// which is an entry point to the Order interpreter. The `ORDER_PP'
// macro must be followed by a parenthesized Order expression that
// is the program to interpret.
//
// The program above, uses the higher-order function `8seq_for_each'
// to apply an anonymous function, `8fn(...)', to each element of
// the `8builtin_types' sequence we defined earlier. The Order
// prelude defines a comprehensive set of first-order and
// higher-order functions for manipulating sequences.
//
// The anonymous function applied to each built-in type uses a
// `8print' expression to output some C++ code. `8print' basically
// outputs any parenthesized sequence of tokens verbatim, and
// implicitly outputs the value of any non-parenthesized Order
// expression, like the expressions `8T' and `8stringize(8T)' above.
// The `8parens' special form, that can be used inside `8print',
// outputs a parenthesized sequence of tokens.
//
// ### Testing the generated code
//
// In order to thoroughly test generated code, it is often necessary
// to use a test that is also generated. Our `main' program is a
// simple generated test. It throws exceptions of the same built-in
// types that the `log_builtin_type_exceptions' function handles and
// checks that each exception was handled.

int main() {
  ORDER_PP(8seq_for_each
           (8fn(8T,
                8print((try { throw static_cast<) 8T (>('0'); }
                        catch (...) {
                          if (!log_builtin_type_exceptions())
                            std::cerr << "Handling of ") 8stringize(8T) (" failed!\n";)
                        (}))),
            8builtin_types))

  return 0;
}

// As you can see, the `main' program is generated using a similar
// program as used in the implementation of
// `log_builtin_type_exceptions'.
//
// One last note. You might have noticed the unbalanced brace `(})'
// above. The preprocessor actually treats only parentheses and
// commas specially and parentheses usually need be balanced. The
// preprocessor is not concerned about the balancing of other
// tokens, such as `{[<>]}', so we don't need to handle them
// specially either.
//
// ### Exercises
//
// 1. Does your compiler support built-in types, e.g. `long long',
//    that our example doesn't handle? Extend the example to handle
//    those types.
