# include <stdio.h>

/**
  * main - Entry point
  * Description: Program prints first 50 Fibonacci numbers from 1 and 2
  * Return: Always success (0)
  */

int main(void)
{
	int a, b, i, result;
	int n = 50;

	a = 1;
	b = 2;

	for (i = 1; i <= n; i++)
	{
		printf("%d", a);
		result = (a + b);
		a = b;
		b = result;
		if (i < 50)
		{
			printf(", ");
		}
		continue;
	}
	printf("\n");
	return (0);
}
