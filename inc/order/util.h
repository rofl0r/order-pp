// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_FRESH_ID(name) ORDER_PP_FX(FRESH_ID_B,(__LINE__,name))
#define ORDER_PP_FRESH_ID_B(line,name) ORDER_PP_ID_##line##_##name

#define ORDER_PP_DEF(t) ORDER_PP_DEF_##t
#define ORDER_PP_DEF_FIRST(P,...) ORDER_PP_DEF_FIRST_B(__VA_ARGS__##P,)
#define ORDER_PP_DEF_FIRST_B(t,...) ORDER_PP_DEF_##t

#define ORDER_PP_ASSERT_SYNTAX(def_t_p) ORDER_PP_IS_TUPLE_SIZE_1(,def_t_p)(,8EXIT_SYNTAX_ERROR ORDER_PP_COMMA,)
#define ORDER_PP_8EXIT_SYNTAX_ERROR(P,e,t,...) )(,1,ORDER_PP_SYNTAX_ERROR(!):P##t:(,P##e,P##t,P##__VA_ARGS__))
#define ORDER_PP_SYNTAX_ERROR() ORDER_PP_SYNTAX_ERROR

#define ORDER_PP_8EXIT_ERROR(P,err,msg,...) )(,1,P##err(!):P##msg:(,P##__VA_ARGS__))

#define ORDER_PP_BLOCK
#define ORDER_PP_NIL()
#define ORDER_PP_EAT(...)
#define ORDER_PP_EXPAND(l,...) l __VA_ARGS__
#define ORDER_PP_FW(f,w) ORDER_PP_##f w
#define ORDER_PP_FX(f,x) ORDER_PP_##f x
#define ORDER_PP_FY(f,y) ORDER_PP_##f y
#define ORDER_PP_FZ(f,z) ORDER_PP_##f z
#define ORDER_PP_OVERLOAD(f,n) ORDER_PP_PRIMITIVE_CAT(ORDER_PP_##f##_,n)
#define ORDER_PP_CAT(...) ORDER_PP_PRIMITIVE_CAT(__VA_ARGS__)
#define ORDER_PP_REVERSE_CAT(...) ORDER_PP_PRIMITIVE_REVERSE_CAT(__VA_ARGS__)
#define ORDER_PP_PRIMITIVE_CAT(l,...) l##__VA_ARGS__
#define ORDER_PP_PRIMITIVE_REVERSE_CAT(l,...) __VA_ARGS__##l
#define ORDER_PP_BOTH(P,...) P##__VA_ARGS__##P
#define ORDER_PP_LEFT(P,...) P##__VA_ARGS__
#define ORDER_PP_RIGHT(P,...) __VA_ARGS__##P
#define ORDER_PP_OPEN(P,...) P##__VA_ARGS__
#define ORDER_PP_REM(...) __VA_ARGS__
#define ORDER_PP_SCAN(...) __VA_ARGS__

#define ORDER_PP_INVOKE(K,...) ORDER_PP_##K(,__VA_ARGS__

#define ORDER_PP_8AP(P,f,x,...) (,P##x,ORDER_PP_OPEN f##P,P##__VA_ARGS__)

#define ORDER_PP_8STOP(P,x,...) )x##P
#define ORDER_PP_8STOP_NIL(...) )
#define ORDER_PP_8STOP_REM(P,x,...) )ORDER_PP_REM x##P

#define ORDER_PP_8PAIR(P,l,r,...) (,(P##l,P##r),P##__VA_ARGS__)

#define ORDER_PP_IF(c) ORDER_PP_PRIMITIVE_CAT(ORDER_PP_IF_,c)
#define ORDER_PP_IF_(P,c,...) P##c
#define ORDER_PP_IF_0(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_1(P,c,...) P##c
#define ORDER_PP_IF_8false(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_8true(P,c,...) P##c

#define ORDER_PP_IF_NOT_(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_NOT_0(P,c,...) P##c
#define ORDER_PP_IF_NOT_1(P,c,...) P##__VA_ARGS__
#define ORDER_PP_IF_NOT_8false(P,c,...) P##c
#define ORDER_PP_IF_NOT_8true(P,c,...) P##__VA_ARGS__

#define ORDER_PP_WHEN_(P,...) P##__VA_ARGS__
#define ORDER_PP_WHEN_0(...)
#define ORDER_PP_WHEN_1(P,...) P##__VA_ARGS__
#define ORDER_PP_WHEN_8false(...)
#define ORDER_PP_WHEN_8true(P,...) P##__VA_ARGS__

#define ORDER_PP_UNLESS_(...)
#define ORDER_PP_UNLESS_0(P,...) P##__VA_ARGS__
#define ORDER_PP_UNLESS_1(...)
#define ORDER_PP_UNLESS_8false(P,...) P##__VA_ARGS__
#define ORDER_PP_UNLESS_8true(...)

#define ORDER_PP_EAT_UNLESS_
#define ORDER_PP_EAT_UNLESS_0(...)

#define ORDER_PP_SELECT_4(P,c0,c1) ORDER_PP_CAT(P##c0(ORDER_PP_SELECT_4_,1,0),P##c1(,1,0))
#define ORDER_PP_SELECT_4_11(P,tt,tf,ft,...) P##tt
#define ORDER_PP_SELECT_4_10(P,tt,tf,ft,...) P##tf
#define ORDER_PP_SELECT_4_01(P,tt,tf,ft,...) P##ft
#define ORDER_PP_SELECT_4_00(P,tt,tf,ft,...) P##__VA_ARGS__

#define ORDER_PP_SAME(P,x,y) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_##x##_##y(,),,0)
#define ORDER_PP_NOT_SAME(P,x,y) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_##x##_##y(,),0,)

#define ORDER_PP_IS_EDIBLE(P,x) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_IS_EDIBLE_TEST x##P,,0)
#define ORDER_PP_IS_EDIBLE_TEST(...) ,,

#define ORDER_PP_IS_SYM(P,x) ORDER_PP_IS_EDIBLE(,P##x)(ORDER_PP_,EAT_FALSE,IS_SYM_NOT_EDIBLE)(P##x)
#define ORDER_PP_IS_SYM_NOT_EDIBLE(x) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_SYM_##x##_##x(,),,0)

#define ORDER_PP_IS_NIL(P,x) ORDER_PP_IS_EDIBLE(,P##x)(ORDER_PP_,EAT_FALSE,IS_NIL_NOT_EDIBLE)(P##x)
#define ORDER_PP_IS_NIL_NOT_EDIBLE(x) ORDER_PP_TEST(ORDER_PP_IF_,ORDER_PP_IS_NIL_##x,,0)
#define ORDER_PP_IS_NIL_ ,,

#define ORDER_PP_EAT_FALSE(...) ORDER_PP_IF_0

#define ORDER_PP_TEST(P,x,c,a) ORDER_PP_TUPLE_AT_3(,x,P##c,,P##a,)

#define ORDER_PP_COMMA_0 ,0
#define ORDER_PP_COMMA_1 ,1
#define ORDER_PP_COMMA_2 ,2
#define ORDER_PP_COMMA_3 ,3
#define ORDER_PP_COMMA_4 ,4
#define ORDER_PP_COMMA_5 ,5
#define ORDER_PP_COMMA_6 ,6
#define ORDER_PP_COMMA_7 ,7
#define ORDER_PP_COMMA_8 ,8
#define ORDER_PP_COMMA_9 ,9
#define ORDER_PP_COMMA_10 ,10

#define ORDER_PP_LPAREN (
#define ORDER_PP_COMMA ,
#define ORDER_PP_RPAREN )
