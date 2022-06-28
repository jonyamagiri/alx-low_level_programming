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

	dup = malloc(sizeof(char) * (slen + 1));

	for (i = 0; i < (slen + 1); i++)
	{
		dup[i] = str[i];
	}
	if (dup == NULL)
	{
		return (NULL);
	}

	return (dup);
}
