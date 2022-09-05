# include "main.h"

/**
  * _islower - Entry point
  * @c: The integer value it receives
  * Description: Function checks for lowercase character
  * Return: 1 if (lowercase); 0 if otherwise
  */

int _islower(int c)
{
	int ch;

	ch = 97;
	while (ch <= 122)
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
