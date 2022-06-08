# include "main.h"

/**
  *print_to_98 - Entry point
  *@n: Interger value input
  *Description: prints all natural numbers from n to 98
  *Return: Void
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		do {
			printf("%d, ", n);
			n++;
		} while (n < 98);
	}
	else if (n > 98)
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n > 98);
	}
	printf("98\n");
}
