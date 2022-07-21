#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip to get
* from one number to another
* @n: 1st number
* @m: 2nd number to be flipped from n
* Return: number of bits needed to flip n to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int countbits = n ^ m, count = 0;

	while (countbits > 0)
	{
		count = count + (countbits & 1);
		countbits >>= 1;
	}
	return (count);
}
