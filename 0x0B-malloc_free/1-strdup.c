#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * which contains a copy of the string given as a parameter
  * @str: string to be duplicated
  * Return: NULL (if str = NULL or insufficient memory was available);
  * pointer to the duplicated string (otherwise)
  */

char *_strdup(char *str)
{
	int i, slen = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str[i]; i++)
	{
		slen++;
	}

	dup = malloc((slen + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}

	dup[slen] = '\0';

	return (dup);
}
