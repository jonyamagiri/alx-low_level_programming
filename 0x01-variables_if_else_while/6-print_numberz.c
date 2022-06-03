#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: Prints all single digit numbers of base 10 starting from 0,
  *using putchar()
  *
  *Return: Always success (0)
  */

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
