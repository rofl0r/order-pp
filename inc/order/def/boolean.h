#ifndef ORDER_DEF_BOOLEAN_H
#define ORDER_DEF_BOOLEAN_H

/* (C) Copyright Vesa Karvonen 2004.
 *
 *    Distributed under the Boost Software License, Version 1.0.
 */

#define ORDER_DEF_true 8DEF_CONST,true
#define ORDER_SYM_true_true(P,v) ,P##v,
#define ORDER_DEF_false 8DEF_CONST,false
#define ORDER_SYM_false_false(P,v) ,P##v,

#endif
