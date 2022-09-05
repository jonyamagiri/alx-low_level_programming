# include "main.h"

/**
  * *_strncpy - Entry point
  * @src: pointer to source string to be copied
  * @dest: pointer to destination of copied content
  * @n: the number of bytes from src to be copied to dest
  * Description: Function that copies a string
  * Return: a pointer to the resulting string in dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
