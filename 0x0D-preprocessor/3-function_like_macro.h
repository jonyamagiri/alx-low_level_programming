#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
* File: 3-function_like_macro.h
* Description: function-like macro ABS(x) that computes the absolute value
* of a number x
* @x: input number to be evaluated
*/

#define ABS(x) (x * ((x < 0) * (-1) + (x > 0)))


#endif /* FUNCTION_LIKE_MACRO_H */
