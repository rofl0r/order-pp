#ifndef ORDER_INC_ORDER_LIB_LIMITS_H_VAJK20040620
#define ORDER_INC_ORDER_LIB_LIMITS_H_VAJK20040620

// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#include <limits.h>

#if SCHAR_MAX == 127ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((7)(2)(01))
#elif SCHAR_MAX == 255ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((5)(5)(02))
#elif SCHAR_MAX == 32767ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((7)(6)(7)(2)(03))
#elif SCHAR_MAX == 65535ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((5)(3)(5)(5)(06))
#elif SCHAR_MAX == 2147483647ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif SCHAR_MAX == 4294967295ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif SCHAR_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif SCHAR_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8schar_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported SCHAR_MAX value"
#endif

#if CHAR_MAX == 127ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((7)(2)(01))
#elif CHAR_MAX == 255ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((5)(5)(02))
#elif CHAR_MAX == 32767ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((7)(6)(7)(2)(03))
#elif CHAR_MAX == 65535ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((5)(3)(5)(5)(06))
#elif CHAR_MAX == 2147483647ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif CHAR_MAX == 4294967295ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif CHAR_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif CHAR_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8char_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported CHAR_MAX value"
#endif

#if UCHAR_MAX == 255ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((5)(5)(02))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(8)
#elif UCHAR_MAX == 32767ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((7)(6)(7)(2)(03))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(15)
#elif UCHAR_MAX == 65535ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((5)(3)(5)(5)(06))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(16)
#elif UCHAR_MAX == 2147483647ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(31)
#elif UCHAR_MAX == 4294967295ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(32)
#elif UCHAR_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(63)
#elif UCHAR_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8uchar_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
# define ORDER_PP_DEF_8char_bit ORDER_PP_CONST(64)
#else
# error "Unsupported UCHAR_MAX value"
#endif

#if SHRT_MAX == 32767ul
# define ORDER_PP_DEF_8shrt_max ORDER_PP_CONST((7)(6)(7)(2)(03))
#elif SHRT_MAX == 65535ul
# define ORDER_PP_DEF_8shrt_max ORDER_PP_CONST((5)(3)(5)(5)(06))
#elif SHRT_MAX == 2147483647ul
# define ORDER_PP_DEF_8shrt_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif SHRT_MAX == 4294967295ul
# define ORDER_PP_DEF_8shrt_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif SHRT_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8shrt_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif SHRT_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8shrt_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported SHRT_MAX value"
#endif

#if INT_MAX == 32767ul
# define ORDER_PP_DEF_8int_max ORDER_PP_CONST((7)(6)(7)(2)(03))
#elif INT_MAX == 65535ul
# define ORDER_PP_DEF_8int_max ORDER_PP_CONST((5)(3)(5)(5)(06))
#elif INT_MAX == 2147483647ul
# define ORDER_PP_DEF_8int_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif INT_MAX == 4294967295ul
# define ORDER_PP_DEF_8int_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif INT_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8int_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif INT_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8int_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported INT_MAX value"
#endif

#if USHRT_MAX == 65535ul
# define ORDER_PP_DEF_8ushrt_max ORDER_PP_CONST((5)(3)(5)(5)(06))
#elif USHRT_MAX == 2147483647ul
# define ORDER_PP_DEF_8ushrt_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif USHRT_MAX == 4294967295ul
# define ORDER_PP_DEF_8ushrt_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif USHRT_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8ushrt_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif USHRT_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8ushrt_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported USHRT_MAX value"
#endif

#if UINT_MAX == 65535ul
# define ORDER_PP_DEF_8uint_max ORDER_PP_CONST((5)(3)(5)(5)(06))
#elif UINT_MAX == 2147483647ul
# define ORDER_PP_DEF_8uint_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif UINT_MAX == 4294967295ul
# define ORDER_PP_DEF_8uint_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif UINT_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8uint_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif UINT_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8uint_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported UINT_MAX value"
#endif

#if LONG_MAX == 2147483647ul
# define ORDER_PP_DEF_8long_max ORDER_PP_CONST((7)(4)(6)(3)(8)(4)(7)(4)(1)(02))
#elif LONG_MAX == 4294967295ul
# define ORDER_PP_DEF_8long_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif LONG_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8long_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif LONG_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8long_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported LONG_MAX value"
#endif

#if ULONG_MAX == 4294967295ul
# define ORDER_PP_DEF_8ulong_max ORDER_PP_CONST((5)(9)(2)(7)(6)(9)(4)(9)(2)(04))
#elif ULONG_MAX == 9223372036854775807ul
# define ORDER_PP_DEF_8ulong_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
#elif ULONG_MAX == 18446744073709551615ul
# define ORDER_PP_DEF_8ulong_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
#else
# error "Unsupported ULONG_MAX value"
#endif

#ifdef LLONG_MAX
# if LLONG_MAX == 9223372036854775807ul
#  define ORDER_PP_DEF_8llong_max ORDER_PP_CONST((7)(0)(8)(5)(7)(7)(4)(5)(8)(6)(3)(0)(2)(7)(3)(3)(2)(2)(09))
# elif LLONG_MAX == 18446744073709551615ul
#  define ORDER_PP_DEF_8llong_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
# else
#  error "Unsupported LLONG_MAX value"
# endif
#endif

#ifdef ULLONG_MAX
# if ULLONG_MAX == 18446744073709551615ul
#  define ORDER_PP_DEF_8ullong_max ORDER_PP_CONST((5)(1)(6)(1)(5)(5)(9)(0)(7)(3)(7)(0)(4)(4)(7)(6)(4)(4)(8)(01))
# else
#  error "Unsupported ULLONG_MAX value"
# endif
#endif

#endif
