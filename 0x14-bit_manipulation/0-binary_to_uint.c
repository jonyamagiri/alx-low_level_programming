#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: 0 (If b is NULL or contains chars not 0 or 1)
* the converted number (otherwise)
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == NULL)
		return (0);

	for (n = 0; *b; b++)
	{
		if (*b == '1')
			n = (n << 1) | 1;
		else if (*b == '0')
			n <<= 1;
		else
			break;
	}
	return (n);
}
