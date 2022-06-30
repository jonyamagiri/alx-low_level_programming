#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: number of array elements
  * @size: number of bytes of each array element
  * Return: NULL (if nmemb or size = 0, if function fails)
  * pointer to the allocated memory (otherwise)
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memptr;
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memptr = malloc(size * nmemb);
	if (memptr == NULL)
	{
		return (NULL);
	}

	buffer = memptr;

	i = 0;
	while (i < (size * nmemb))
	{
		buffer[i] = '\0';
		i++;
	}

	return (memptr);
}
