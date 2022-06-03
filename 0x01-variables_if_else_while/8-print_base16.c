#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: Prints all the numbers of base 16 in lowercase,
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
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
