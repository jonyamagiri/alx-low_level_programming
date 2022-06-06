#include <stdio.h>
#include <unistd.h>

/**
  *main - Entry point
  *
  *Description: Prints all possible different combinations of three digits
  *
  *Return: Always success (0)
  *
  */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
					}
				}
				else
				{
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
