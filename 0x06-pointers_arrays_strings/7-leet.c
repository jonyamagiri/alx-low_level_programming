# include "main.h"

/**
  * **leet - Entry point
  * @str: pointer to string to be evaluated
  * Description: Function encodes a string into 1337
  * Return: String with characters encoded to 1337
  */

char *leet(char *str)
{
	int i, j;
	char replace[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char change[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char leet[] = {'4', '3', '0', '7', '1', '\0'};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == replace[j] || str[i] == change[j])
			{
				str[i] = leet[j];
			}
		}
		i++;
	}
	return (str);
}
