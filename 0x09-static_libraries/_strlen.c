# include "main.h"

/**
  * _strlen - Entry point
  * @s: pointer to a char
  * Description: Function that returns the length of a string
  * Return: integer length of string at address
  */

int _strlen(char *s)
{
	int slen = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}
	return (slen);
}
