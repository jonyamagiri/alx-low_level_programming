#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previously allocated
  * @old_size: size, in bytes, of the allocated space
  * @new_size: new size, in bytes of the new memory block
  * Return: ptr (if new_size == old_size),
  * NULL (if new_size == 0 and ptr is not NULL)
  * Otherwise - a pointer to the reallocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory = 0;
	char *dup_ptr, *buffer;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
		{
			return (NULL);
		}
		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	buffer = memory;

	i = 0;
	while (i < old_size && i < new_size)
	{
		buffer[i] = *dup_ptr++;
	}

	free(ptr);
	return (memory);
}
