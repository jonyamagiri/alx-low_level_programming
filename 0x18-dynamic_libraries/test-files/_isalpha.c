# include "main.h"

/**
  * _isalpha - Entry point
  * Description: Checks for alphabetic character
  * @c: Integer value as input
  * Return: 1 (lower or uppercase), 0 otherwise
  */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
