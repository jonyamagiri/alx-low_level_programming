# include "main.h"

/**
  *print_diagonal - Entry point
  *@n: Integer value input
  *Description: Function draws a diagonal line in the terminal
  *Return: void
  */

void print_diagonal(int n)
{
	int dl, i;

	for (dl = 0; dl < n && n > 0; dl++)
	{
		for (i = 0; i < dl; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
