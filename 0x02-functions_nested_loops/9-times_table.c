#include "main.h"

/**
 * times_table - Entry point
 * Description: Function prints the 9 times table,
 * starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j, res;

	i = 0;

	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			if ((res / 10) == 0)
			{
				if (j != 0)
				_putchar(' ');
				_putchar(res + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		i++;
		_putchar('\n');
	}
}
