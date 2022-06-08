# include "main.h"

/**
  *jack_bauer - Entry point
  *@void: Does not take any arguments
  *Description: prints every minute of the day of Jack Bauer
  *Return: Void
  */

void jack_bauer(void)
{
	int ht, ho, mt, mo;

	for (ht = 48; ht <= 50; ht++)
	{
		for (ho = 48; ho <= 58; ho++)
		{
			for (mt = 48; mt <= 51; mt++)
			{
				for (mo = 48; mo <= 57; mo++)
				{
					_putchar(ht);
					_putchar(ho);
					_putchar(':');
					_putchar(mt);
					_putchar(mo);
					_putchar('\n');
				}
			}
		}
	}
}
