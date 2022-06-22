#include "main.h"

/**
  * _puts_recursion - prints a string, followed by a new line
  * @s: string to be printed
  * Return: void
  */

void _puts_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(++s);
	}
}
