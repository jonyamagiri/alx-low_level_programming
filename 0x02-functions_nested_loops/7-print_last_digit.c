#include "main.h"

/**
  *print_last_digit - Entry point
  *@i: Accepts an interger
  *Description: prints the last digit of a number
  *Return: Value of the last digit
  */

int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;
	if (i < 0)
	{
		lastdigit *= -1;
	}
	else
	{
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
