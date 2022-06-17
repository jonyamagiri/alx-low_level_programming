# include "main.h"

/**
  * print_number - Entry point
  * @n: integer value to be printed
  * Description: Function prints an integer using _putchar()
  * Return: void
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
