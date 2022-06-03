#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: Prints the alphabet in lowercase, and then in uppercase
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

	alphab = 'A';
	while (alphab <= 'Z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar('\n');

	return (0);
}
