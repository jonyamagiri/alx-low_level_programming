#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct ds - struct type defining a type to be printed
*@letter: letter representing a data type
* @func: a function pointer to a function that prints a data type
* matching the letter
*/

typedef struct ds
{
	char *letter;
	void (*func)(va_list inputs);
	
} dataset;


#endif /* VARIADIC_FUNCTIONS_H */
