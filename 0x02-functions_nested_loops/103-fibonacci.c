# include "main.h"
#include <stdio.h>

/**
* main - entry point
* Description: program that finds and prints the sum of the even-valued terms
* in a fibonacci series, followed by a new line.
* Return: Always success (0)
*/

int main(void)
{
	long int num1, num2, fibn, sum_fibn;

	num1 = 1,
	num2 = 2;
	fibn = sum_fibn = 0;

	for (; fibn <= 4000000; )
	{
		fibn = num1 + num2;
		num1 = num2;
		num2 = fibn;
		if (num1 % 2 == 0)
			sum_fibn = sum_fibn + num1;
	}
	printf("%ld\n", sum_fibn);
	return (0);
}
