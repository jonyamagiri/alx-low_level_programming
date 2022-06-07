#include "main.h"

/**
  *print_alphabet_x10 - Function that prints 10 times the alphabet,
  *in lowercase, followed by a new line
  *
  *Return: void (0)
  */

void print_alphabet_x10(void)
{
	int alphab;
	int i;

	i = 0;
	while (i <= 10)
	{
		alphab = 97;
		while (alphab <= 122)
		{
			_putchar(alphab);
			alphab++;
		}
	i++;
	_putchar('\n');
	}
}
