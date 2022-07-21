#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to a string of 0 and 1 chars
* @index: is the index, starting from 0 of the bit you want to set
* Return: -1 (If error occured)
* 1 (if it worked or otherwise)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
