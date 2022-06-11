# include "main.h"

/**
  *jack_bauer - Entry point
  *@void: Does not take any arguments
  *Description: prints every minute of the day of Jack Bauer
  *Return: Void
  */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m / 10) + '0');
		}
	}
}
