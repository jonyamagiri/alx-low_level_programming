#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: Prints all possible combinations of single-digit numbers,
  *using putchar()
  *
  *Return: Always success (0)
  *
  */

int main(void)
{
	int nm;

	nm = 0;
	do {
		putchar((nm % 10) + '0');
		if (nm != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nm++;
	} while (nm <= 9);
	putchar('\n');

	return (0);
}
