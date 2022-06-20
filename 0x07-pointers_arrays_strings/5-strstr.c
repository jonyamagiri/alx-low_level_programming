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
	int len = strlen(needle);
	char *ref = needle;

	while (*haystack && *ref)
	{
		if (*haystack++ == *ref)
		{
			ref++;
		}
		if (!*ref)
		{
			return (haystack - len);
		}
		if (len == (ref - needle))
		{
			ref = needle;
		}
	}
	return (NULL);
}
