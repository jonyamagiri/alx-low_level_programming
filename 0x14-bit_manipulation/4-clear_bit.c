#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: pointer to a string of 0 and 1 chars
* @index: is the index, starting from 0 of the bit you want to set
* Return: -1 (If error occured)
* 1 (if it worked or otherwise)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
