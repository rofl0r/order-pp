# ifndef ORDER_EXAMPLE_ENUM_HPP_VAJK20041119
# define ORDER_EXAMPLE_ENUM_HPP_VAJK20041119

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

# include <string>
# include <stdexcept>
# include <istream>
# include <ostream>

# include "order/interpreter.h"

// ## Heavy Weight Enumerations
//
// \cite{besser:2003}
//
//<
namespace detail {
  struct enum_entry {
    unsigned long value;
    const char* identifier;
  };
}
//>

//<
namespace detail {
  inline unsigned long to_value(const std::string& identifier,
                                const enum_entry* begin,
                                const enum_entry* end) {
    while (begin != end)
      if (begin->identifier == identifier)
        return begin->value;
      else
        ++begin;

    throw std::logic_error("Unknown enum identifier.");
  }
}
//>

//<
namespace detail {
  inline const char* to_string(unsigned long value,
                               const enum_entry* begin,
                               const enum_entry* end) {
    while (begin != end)
      if (begin->value == value)
        return begin->identifier;
      else
        ++begin;

    throw std::logic_error("Unknown enum value.");
  }
}
//>

//<
#define ENUM(name, rators)                                      \
enum name                                                       \
{ ORDER_PP(8seq_for_each_with_delimiter                         \
           (8fn(8X,                                             \
                8if(8equal(1, 8tuple_size(8X)),                 \
                    8put_open(8X),                              \
                    8print(8tuple_at_0(8X) (=)                  \
                           8open(8tuple_drop_1(8X))))),         \
            8emit_comma,                                        \
            8vseq_to_seq_of_tuples(8(rators)))) };              \
                                                                \
const detail::enum_entry ORDER_PP_FRESH_ID(name)[] =            \
{ ORDER_PP(8seq_for_each_with_delimiter                         \
           (8fn(8I,                                             \
                8print(({) 8I (,) 8stringize(8I) (}))),         \
            8emit_comma,                                        \
            8seq_map(8tuple_at_0,                               \
                     8vseq_to_seq_of_tuples(8(rators))))) };    \
                                                                \
inline const char* to_string(name value) {                      \
  return detail::to_string(static_cast<unsigned long>(value),   \
                           ORDER_PP_FRESH_ID(name),             \
                           ORDER_PP_FRESH_ID(name) +            \
                           sizeof(ORDER_PP_FRESH_ID(name)) /    \
                           sizeof(*ORDER_PP_FRESH_ID(name)));   \
}                                                               \
                                                                \
inline name to_##name(const std::string& identifier) {          \
  return static_cast<name>(detail::to_value                     \
                           (identifier,                         \
                            ORDER_PP_FRESH_ID(name),            \
                            ORDER_PP_FRESH_ID(name) +           \
                            sizeof(ORDER_PP_FRESH_ID(name)) /   \
                            sizeof(*ORDER_PP_FRESH_ID(name)))); \
}                                                               \
                                                                \
inline std::istream& operator>>(std::istream& s, name& out) {   \
  std::string identifier;                                       \
  if (s >> identifier)                                          \
    out = to_##name(identifier);                                \
  return s;                                                     \
}                                                               \
                                                                \
inline std::ostream& operator<<(std::ostream& s, name value) {  \
  return s << to_string(value);                                 \
}
//>

# endif
