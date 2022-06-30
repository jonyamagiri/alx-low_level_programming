#include "main.h"

/**
  * *_memset - fills memory with a constant byte
  * @s: pointer to a memory area
  * @b: constant byte to fill  memory area
  * @n: number of bytes to be filled
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
