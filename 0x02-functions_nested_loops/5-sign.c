#include "main.h"

/**
  * print_sign - Entry point
  * Description: Function prints the sign of a number
  * @n: Integer value input
  * Return: 1 (n>0), 0(n==0), -1(n<0)
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	}
	return (0);
}
