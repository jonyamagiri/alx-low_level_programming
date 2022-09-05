# include "main.h"

/**
  * _isupper - Entry point
  * @c: The integer value input
  * Description: Function checks for uppercase character
  * Return: 1 if (uppercase); 0 if otherwise
  */

int _isupper(int c)
{
	int ch;

	ch = 65;
	while (ch <= 90)
	{
		if (c == ch)
		{
			return (1);
		}
		else
		{
		}
		ch++;
	}
	return (0);
}
