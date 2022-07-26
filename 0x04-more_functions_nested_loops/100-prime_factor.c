#include <stdio.h>

/**
* main - finds and prints the largest prime factor
* Description: program that finds and prints the largest prime factor of
* the number 612852475143, followed by a new line.
* Return: Always success (0)
*/

int main(void)
{
	long n;
	long int div, maxPrimeFactor;

	n = 612852475143;
	div = 2;
	
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxPrimeFactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxPrimeFactor);
				break;
			}
		}
	}
	return (0);
}
