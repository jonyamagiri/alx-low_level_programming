#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - performs summation of two numbers
* @a: 1st number
* @b: 2nd number
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - performs subtration of two numbers
* @a: 1st number
* @b: 2nd number
* Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - performs multiplication of two numbers
* @a: 1st number
* @b: 2nd number
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - performs division of two numbers
* @a: 1st number
* @b: 2nd number
* Return: the result of the division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - performs modulus operation on two numbers
* @a: 1st number
* @b: 2nd number
* Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
