#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
*@separator: the string to be printed between numbers
* @n: the number of integers passed to the function
* @...: variable number of parameters to be printed
* Return: void (if separator is NULL), print numbers (otherwise)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(inputs);
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(inputs, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(inputs, const unsigned int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(inputs);
}
