#include "main.h"

/**
  * *_strpbrk - searches a string for first occurence of byte
  * @s: string to be evaluated
  * @accept: string containing the characters to match
  * Return: pointer to the byte in s that matches one of the bytes in accept,
  * NULL if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	int i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
