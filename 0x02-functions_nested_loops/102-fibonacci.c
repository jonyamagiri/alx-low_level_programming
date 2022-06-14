# include <stdio.h>

/**
  * main - Entry point
  * Description: Program prints first 50 Fibonacci numbers from 1 and 2
  * Return: Always success (0)
  */

int main(void)
{
	long a, b, result;
	int i;
	int n = 50;

	a = 0;
	b = 1;

	for (i = 1; i <= n; i++)
	{
		result = (a + b);
		a = b;
		b = result;
		printf("%lu", result);
		if (i < 50)
		{
			printf(", ");
		}
		continue;
	}
	printf("\n");
	return (0);
}
