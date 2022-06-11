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

	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m / 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
