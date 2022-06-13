#include "main.h"

/**
  * rev_string - Entry point
  * @s: pointer to a string
  * Description: Function reverses a string input
  * Return: void
  */

void rev_string(char *s)
{
	int length, i;
	char temp;

	for (length = 0; s[length] != '\0'; length++)

	i = 0;

	while (i < length--)
	{
		temp = s[i];
		s[i++] = s[length];
		s[length] = temp;
	}
}
