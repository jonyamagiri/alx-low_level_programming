#include "main.h"

/**
  * *_strstr - finds the first occurrence of substring in string
  * @haystack: string to be evaluated
  * @needle: string to be searched within haystack string
  * Return: pointer to the beginning of the located substring or
  * NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (; *haystack; haystack++)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i++;
		}
	}
	return ('\0');
}
