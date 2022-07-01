#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string input
  * @s2: second string input
  * @n: first string input
  * Return: NULL (if function fails)
  * pointer to the concatenated space in memory (otherwise)
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, slen = n;
	char *dup;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		slen++;

	dup = malloc(sizeof(char) * (slen + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	slen = 0;

	for (i = 0; s1[i]; i++)
	{
		dup[slen++] = s1[i];
	}

	for (i = 0; i < n && s2[i]; i++)
	{
		dup[slen++] = s2[i];
	}
	dup[slen] = '\0';

	return (dup);
}
