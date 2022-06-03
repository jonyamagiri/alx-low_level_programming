#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints the alphabet in lowercase
  *
  *Return: Always success (0)
  */

int main(void)
{
	char alphab;

	alphab = 'a';
	while (alphab <= 'z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar('\n');

	return (0);
}
