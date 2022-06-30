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
	unsigned int j;
	int i;
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

	dup = malloc(sizeof(char) * (i + n + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	i = j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		dup[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
	{
		dup[i] = s2[i];
	}
	dup[i] = '\0';

	return (dup);
}
