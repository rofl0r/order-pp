# ifndef ORDER_EXAMPLE_IS_SAME_HPP_VAJK20040620
# define ORDER_EXAMPLE_IS_SAME_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

template<class L, class R>
struct is_same {
  static const bool value = false;
};

template<class T>
struct is_same<T,T> {
  static const bool value = true;
};

# endif
