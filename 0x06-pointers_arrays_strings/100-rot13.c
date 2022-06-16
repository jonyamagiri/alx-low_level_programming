# include "main.h"

/**
  * *rot13 - Entry point
  * @str: pointer to string to be evaluated
  * Description: Function encodes a string using rot13
  * Return: String with characters encoded to rot13
  */

char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str && str[i]; i++)
	{
		if (str[i] >= 'a' && (str[i] + 13) <= 'z')
		{
			str[i] = str[i] + 13;
		}
	}
	return (str);
}
