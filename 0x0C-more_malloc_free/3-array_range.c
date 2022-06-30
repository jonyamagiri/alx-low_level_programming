#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: first value of array
  * @max: last value of array
  * Return: NULL (min > max, if function fails)
  * pointer to the newly created array (otherwise)
  */

int *array_range(int min, int max)
{
	int *grp;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	grp = malloc(sizeof(int) * size);
	if (grp == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		grp[i] = min++;
	}

	return (grp);
}
