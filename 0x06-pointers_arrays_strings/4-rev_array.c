# include "main.h"

/**
  * reverse_array - Entry point
  * @a: an array of integers
  * @n: the number of elements to swap
  * Description: Function that reverses the content of an array of integers
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		i++;
		j--;
	}
}
