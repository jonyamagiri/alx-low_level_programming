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
	int left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);

		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			right = middle - 1;

		else
			left = middle + 1;
	}

	return (-1);
}
