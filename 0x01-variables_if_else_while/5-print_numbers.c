#include <stdio.h>
/**
  *main - Entry point
  *
  *Description: Prints all single digit numbers of base 10 starting from 0
  *
  *Return: Always success (0)
  */

int main(void)
{
	int num;

	num = 0;
	do {
		printf("%d", num);
		num++;
	} while (num < 10);

	printf("\n");
	return (0);
}
