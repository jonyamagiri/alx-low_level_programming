#include <stdio.h>
#include <unistd.h>

/**
  *main - Entry point
  *
  *Description: Prints all possible combinations of two two-digit numbers
  *
  *Return: Always success (0)
  *
  */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				d = 48;
				while (d <= 57)
				{
				if (((c + d) > (a + b) && c >= a) || a < c)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && a + b + c + d == 227)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				d++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
