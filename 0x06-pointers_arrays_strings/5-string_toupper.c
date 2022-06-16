# include "main.h"

/**
  * *string_toupper - Entry point
  * @str: pointer to string to be evaluated
  * Description: Function changes lowercase letters of a string to uppercase
  * Return: String in uppercase
  */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
