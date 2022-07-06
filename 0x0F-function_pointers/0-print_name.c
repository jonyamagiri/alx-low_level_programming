#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: the name to be printed
* @f: pointer to the function that prints a name
* Return: Nothing (void)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
