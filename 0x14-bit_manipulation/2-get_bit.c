#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: pointer to a string of 0 and 1 chars
* @index: is the index, starting from 0 of the bit you want to get
* Return: -1 (If error occured)
* the value of the bit at index index (otherwise)
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	bit = (n >> index) & 1;
	if ((bit == 1) || (bit == 0))
	{
		return (bit);
	}
	else
	{
		return (-1);
	}
}
