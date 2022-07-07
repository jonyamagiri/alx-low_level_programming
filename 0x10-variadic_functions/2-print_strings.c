#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
*@separator:  the string to be printed between the strings
* @n: the number of strings passed to the function
* @...: variable number of parameters to be printed
* Return: void (if separator is NULL), (nil) printed if one of the strings
* is NULL, print strings (otherwise)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list inputs;

	if (separator == NULL)
	{
		return;
	}

	va_start(inputs, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(inputs, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(inputs);
}
