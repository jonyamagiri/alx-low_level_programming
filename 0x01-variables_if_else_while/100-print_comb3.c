#include <stdio.h>
#include <unistd.h>

/**
  *main - Entry point
  *
  *Description: Prints all possible different combinations of two digits
  *
  *Return: Always success (0)
  */

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || (a == 56 && b != 57))
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
	putchar('\n');
	return (0);
}
