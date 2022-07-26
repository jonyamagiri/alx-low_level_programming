# include <stdio.h>

/**
* main - Entry point
* Desc: finds and prints sum of even-valued fibonacci terms under 4,000,000
* Return: Always success (0)
*/

int main(void)
{
	int num1, num2, fibn, fib_sum;

	num1 = 0;
	num2 = 1;
	fibn = 0;
	fib_sum = 0;

	for (; fibn < 4000000;)
	{
		fibn = num1 + num2;
		num1 = num2;
		num2 = fibn;
		if (fibn % 2 == 0)
			fib_sum = fib_sum + fibn;
	}
	printf("%i\n"), fib_sum;
	return (0);
}
