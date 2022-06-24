# include "main.h"

/**
  * _puts - Entry point
  * @str: pointer to a string
  * Description: Function prints a string to stdout
  * Return: void
  */

void _puts(char *str)
{

	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
