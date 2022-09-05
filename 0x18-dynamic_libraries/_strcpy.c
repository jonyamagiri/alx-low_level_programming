#include "main.h"

/**
  * *_strcpy - Entry point
  * @dest: char of dest
  * @src: char of src
  * Description: Function copies the string pointed to by src,
  * including the terminating null byte (\0), to the buffer
  * pointed to by dest
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
	return (dest);
}
