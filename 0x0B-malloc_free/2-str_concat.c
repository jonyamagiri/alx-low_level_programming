#include "main.h"
#include <stdlib.h>

/**
  * str_concat- concatenates two strings
  * @s1: first string for concatenation
  * @s2: second string for concatenation
  * Return: NULL (if concatenation fails);
  * otherwise (pointer to a newly allocated space in memory which
  * contains the concatenated string contents)
  */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, new_i = 0, slen = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		slen++;
	}

	new_str = malloc(slen * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i])
	{
		new_str[new_i++] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i])
	{
		new_str[new_i++] = s2[i];
		i++;
	}

	return (new_str);
}

