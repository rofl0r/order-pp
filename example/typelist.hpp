# ifndef ORDER_EXAMPLE_TYPELIST_HPP_VAJK20040620
# define ORDER_EXAMPLE_TYPELIST_HPP_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include "order/interpreter.h"

namespace typelist {
  struct nil {};

  template<class H, class T = nil>
  struct cons {
    typedef H head_type;
    typedef T tail_type;
  };
}

#define TYPELIST(type_vseq)                                     \
ORDER_PP(8seq_for_each                                          \
         (8emit(8(TYPELIST_CONS_OPEN)),                         \
          8vseq_to_seq_of_tuples(8(type_vseq))))                \
  ::typelist::nil                                               \
ORDER_PP(8for_each_in_range                                     \
         (8chain(8emit(8(>)),                                   \
                 8ignore),                                      \
          0,                                                    \
          8seq_size(8vseq_to_seq_of_tuples(8(type_vseq)))))

#define TYPELIST_CONS_OPEN(...) ::typelist::cons<__VA_ARGS__,

# endif
