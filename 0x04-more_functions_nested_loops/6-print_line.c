# include "main.h"

/**
  * print_line - Entry point
  *@n: Integer value input
  * Description: Function draws a straight line in the terminal
  * Return: void
  */

void print_line(int n)
{
	int pl;

	for (pl = 0; pl < n && n > 0; pl++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
