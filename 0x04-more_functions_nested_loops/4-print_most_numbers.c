# include "main.h"

/**
  * print_most_numbers - Entry point
  * Description: Function prints numbers (0-9, without 2,4)
  * Return: void
  */

void print_most_numbers(void)
{
	int ns;

	for (ns = 48; ns <= 57; ns++)
	{
		if (ns != 50 && ns != 52)
		{
			_putchar(ns);
		}
		else
		{
		}
	}
	_putchar('\n');
}
