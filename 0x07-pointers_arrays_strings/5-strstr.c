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
	int i, j;
	int flag = 0;

	if ((haystack == NULL || needle == NULL))
		return (NULL);
	for (i = 0; hastack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i; ; j++)
			{
				if (needle[j - i] == '\0')
				{
					flag = 1;
					break;
				}
				if (haystack[j] == needle[j - i])
					continue;
				else
					break;
			}
		}
		if (flag == 1)
		break;
	}
	if (flag)
		return (haystack + i);
	else
		return (NULL);
}
