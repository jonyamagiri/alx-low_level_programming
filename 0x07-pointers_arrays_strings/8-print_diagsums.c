#include "main.h"

/**
  * print_diagsums - prints sum of diagonals of integer square matrix
  * @a: the matrix to be evaluated
  * @size: size of the integer matrix
  * Return: sum of the diagonals of the given matrix
  */

void print_diagsums(int *a, int size)
{
	int i, j;
	int principal = 0, secondary = 0;

	i = 0;

	while (i <= (size * size))
	{
		principal += *(a + i);
		i = i + size + 1;
	}

	j = size - 1;

	while (j <= (size * size) - size)
	{
		secondary += *(a + j);
		j = j + size - 1;
	}

	printf("%d, %d\n", principal, secondary);
}
