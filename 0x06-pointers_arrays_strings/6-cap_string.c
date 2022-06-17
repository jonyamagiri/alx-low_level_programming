# include "main.h"

/**
  * *cap_string - Entry point
  * @str: pointer to string to be evaluated
  * Description: Function capitalizes all words of a string
  * Return: String with first characters of string capitalized
  */

char *cap_string(char *str)
{
	char omit[] = {32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int len = 13;
	int a, i;

	a = 0;
	while (str[a])
	{
		for (i = 0; i < len; i++)
		{
			if ((a == 0 || str[a - 1] == omit[i]) && (str[a] >= 'a' && str[a] <= 'z'))
			{
				str[a] = str[a] - 32;
			}
		}
		a++;
	}
	return (str);
}
