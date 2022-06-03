#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: Prints the lowercase alphabet in reverse,
  *using only putchar()
  *
  *Return: Always success (0)
  */

int main(void)
{
	char alph;

	alph = 'z';

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
