# include "main.h"
/**
  * swap_int - Entry point
  * @a: 1st pointer
  * @b: 2nd pointer
  * Description: Function that swaps the values of two integers
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
