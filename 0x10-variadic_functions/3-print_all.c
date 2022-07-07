#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list inputs);
void print_int(va_list inputs);
void print_float(va_list inputs);
void print_string(va_list inputs);
void print_all(const char * const format, ...);

/**
* print_char - prints a char
*@inputs: the chars to be printed
* Return: void
*/
void print_char(va_list inputs)
{
	printf("%c", va_arg(inputs, int));
}

/**
* print_int - prints an int
*@inputs: the ints to be printed
* Return: void
*/
void print_int(va_list inputs)
{
	printf("%d", va_arg(inputs, int));
}

/**
* print_float - prints a float
*@inputs: the floats to be printed
* Return: void
*/
void print_float(va_list inputs)
{
	printf("%f", va_arg(inputs, double));
}

/**
* print_string - prints a string
*@inputs: the string to be printed
* Return: void
*/
void print_string(va_list inputs)
{
	char *str;

	str = va_arg(inputs, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
* print_all - function prints anything
*@format: a list of types of arguments passed to the function
* @...: variable number of parameters to be printed
* Return: (nil) if a string argument is NULL, ignore any other char
* print the argument types (char, integer, float, char * (otherwise)
*/

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list inputs;

	dataset types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}};

	va_start(inputs, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i)) != *(types[j].letter))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			types[i].func(inputs);
			separator = ", ";
		}
		i++;
	}
	va_end(inputs);
	printf("\n");
}
