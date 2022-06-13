#include "main.h"

/**
  * puts_half - Entry point
  * @str: pointer to a string of characters
  * Description: Function prints prints half of a string
  * Return: void
  */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
