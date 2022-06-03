#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints the alphabet in lowercase, except q and e
  *
  *Return: Always success (0)
  */

int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		if (alphab != 'e' && alphab != 'q')
		{
			putchar(alphab);
		}
		else
		{
		}
	}
	putchar('\n');

	return (0);
}
