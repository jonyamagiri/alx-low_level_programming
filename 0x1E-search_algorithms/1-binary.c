#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 (If value is not present in array or if array is NULL);
 * otherwise (index where value is located)
*/

int binary_search(int *array, size_t size, int value)
{
	int first = 0, last = 0, middle = 0, i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	first = 0, last = size - 1;
	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d%c", array[i], i == last ? '\n' : ',');
		}

		middle = (first + last) / 2;
		if (array[middle] < value)
			first = middle + 1;
		else if (array[middle] > value)
			last = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
