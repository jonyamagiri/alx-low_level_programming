# include "main.h"

/**
  * *_strcat - Entry point
  * @src: source string
  * @dest: destination string to be appended
  * Description: Function appends the src string to the dest string,
  * overwriting the terminating null byte (\0) at the end of dest,
  * and then adds a terminating null byte
  * Return: a pointer to the resulting string in dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		continue;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
