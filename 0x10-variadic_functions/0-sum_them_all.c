#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters passed to the function
* @...: variable number of parameters whose sum will be determined
* Return: 0 (if n == 0), sum of all its parameters (otherwise)
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list inputs;
	unsigned int i, add = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(inputs, n);

	i = 0;
	while (i < n)
	{
		add = add + va_arg(inputs, const unsigned int);
		i++;
	}
	va_end(inputs);

	return (add);
}
