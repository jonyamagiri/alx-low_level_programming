# include "main.h"

/**
  * _isdigit- Entry point
  * @c: The integer value input
  * Description: Function checks for a digit (0-9)
  * Return: 1 if (digit); 0 if otherwise
  */

int _isdigit(int c)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		if (c == num)
		{
			return (1);
		}
		else
		{
		}
	num++;
	}
	return (0);
}
