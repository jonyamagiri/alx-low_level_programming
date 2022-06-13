# include "main.h"

/**
  * print_array - Entry point
  * @a: pointer to an array
  * @n: integer value
  * Description: Function prints n elements of an array of integers
  * Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
