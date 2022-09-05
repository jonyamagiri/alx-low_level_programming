# include "main.h"

/**
  * *_strncat - Entry point
  * @src: source string
  * @dest: destination string to be appended
  * @n: the number of bytes from src to be appended to dest
  * Description: Function appends the src string to the dest string,
  * using at most n bytes from src; and src does not need to be
  * null-terminated if it contains n or more bytes
  * Return: a pointer to the resulting string in dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		continue;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
