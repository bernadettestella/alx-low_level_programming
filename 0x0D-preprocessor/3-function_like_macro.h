#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
 *	 Header file guarded to avoid the problem of double inclusion.
 * @x: the parameter set
 */

#define ABS(x) ((x) < 0 ? (-(x)) : (x))

#endif
