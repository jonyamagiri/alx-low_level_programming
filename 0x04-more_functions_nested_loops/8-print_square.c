# include "main.h"

/**
  *print_square - Entry point
  *@s: Integer value input
  *Description: Function prints a square in the terminal
  *Return: void
  */

void print_square(int s)
{
	int sq, i;

	for (sq = 0; sq < s && s > 0; sq++)
	{
		for (i = 0; i < s; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (sq == 0)
		_putchar('\n');
}
