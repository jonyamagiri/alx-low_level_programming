#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: size of the allocated memory
  * Return: pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *memptr;

	memptr = malloc(b);

	if (memptr == NULL)
	{
		exit(98);
	}
	return (memptr);
}
