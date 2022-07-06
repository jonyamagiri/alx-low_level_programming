#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter on each element
* of an array
* @array: the array to be evaluated
* @size: the size of the array
* @action: pointer to the function to be evaluated
* Return: Nothing (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
