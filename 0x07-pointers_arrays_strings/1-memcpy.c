#include "main.h"

/**
  * *_memcpy - copies memory area
  * @src: pointer to source memory area
  * @dest: pointer to destination memory area
  * @n: number of bytes to be copied
  * Return: a pointer to destination memory area
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
