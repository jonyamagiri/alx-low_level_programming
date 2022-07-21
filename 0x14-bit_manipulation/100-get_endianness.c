#include "main.h"

/**
* get_endianness - checks endianness
* Return: 0 (if big endian), 1 (if little endian)
*/

int get_endianness(void)
{
	unsigned int endian = 1;

	if (*(char *)&endian == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
