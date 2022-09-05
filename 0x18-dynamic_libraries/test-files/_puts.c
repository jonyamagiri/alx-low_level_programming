# include "main.h"

/**
  * _puts - Entry point
  * @s: pointer to a string
  * Description: Function prints a string to stdout
  * Return: void
  */

void _puts(char *s)
{

	int str = 0;

	while (s[str] != '\0')
	{
		_putchar(s[str]);
		str++;
	}
	_putchar('\n');
}
