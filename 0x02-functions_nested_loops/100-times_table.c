# include "main.h"

/**
* _islower - prints the n times table, starting with 0
* @n: number times table (n < 15)
* Description: Function prints the n times table, starting with 0
* Return: Nothing (If n is greater than 15 or less than 0)
*/

void print_times_table(int n)
{
	int i = 0;
	int j, k, l, m, o;

	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				l = k / 100;
				m = (k / 10) % 10;
				o = (k % 100) % 10;
				if (j == 0)
					_putchar('0');
				else if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + o);
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar('0' + m);
					_putchar('0' + o);
				}
				else
				{
					_putchar('0' + l);
					_putchar('0' + m);
					_putchar('0' + o);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
			i++;
		}
	}
}
