#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to be evaluated
* @size: number of elements in the array
* @cmp: pointer to the function to be used to compare values
* Return: index of first element for which the cmp function does not return 0
* if no element matches or size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
