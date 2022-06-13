# include "main.h"

/**
  * _strlen - Entry point
  * @str: pointer to a char
  * Description: Function that returns the length of a string
  * Return: integer length of string at address
  */

int _strlen(char *str)
{
	int slen;

	while (*str++)
	{
		slen++;
	}
	return (slen);
}
