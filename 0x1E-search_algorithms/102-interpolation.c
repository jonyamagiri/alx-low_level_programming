#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 (If value is not present in array or if array is NULL);
 * otherwise (index where value is located)
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1;

	if (!array)
		return (-1);

	while (r >= l)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i >= size)
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
