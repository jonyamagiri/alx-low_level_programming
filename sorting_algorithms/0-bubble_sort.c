#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order using the
* Bubble sort algorithm
* @array: array to be sorted
* @size: the size of the array
* Return: Nothing (void)
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, n, new_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	for(n = size; n > 0; n = new_n)
	{
		new_n = 0;
		for (i = 0; i < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new_n = i + 1;
				print_array(array, size);
			}
		}
	}
}
