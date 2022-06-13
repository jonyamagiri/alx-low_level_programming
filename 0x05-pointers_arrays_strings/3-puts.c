# include "main.h"

/**
  * _puts - Entry point
  * @str: pointer to a string
  * Description: Function prints a string to stdout
  * Return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
