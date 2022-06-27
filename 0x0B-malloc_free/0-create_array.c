#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes
  * it with a specific char
  * @size: size of the array
  * @c: first character to initialize array
  * Return: NULL (if size = 0, or fails);
  * pointer to the array (otherwise)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(int));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
