#include "main.h"

/**
  *print_alphabet - Entry point
  *Description: Function that prints the alphabet,
  *in lowercase, followed by a new line
  *Return: void (0)
  */

void print_alphabet(void)
{
	int alphab;

	alphab = 97;
	while (alphab <= 122)
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}
