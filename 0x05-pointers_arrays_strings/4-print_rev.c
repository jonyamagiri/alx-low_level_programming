# include "main.h"

/**
  * print_rev - Entry point
  * @s: pointer to a string
  * Description: Function prints a string in reverse
  * Return: void
  */

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
	{
		r++;
	}
	while (r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
