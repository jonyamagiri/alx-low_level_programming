# include <stdio.h>

/**
* main - Entry point
* Desc: finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: Always success (0)
*/

int main(void)
{
	unsigned long int fibn, fibn1, fibn2;
	unsigned long int fibnu, fibnu1, fibnu2;
	unsigned long int fibnum, fibnum1, fibnum2;
	unsigned long int i = 3, j = 89;

	fibn = 1;
	fibnu = 2;
	fibnum = fibn + fibnu;

	printf("%lu, ", fibn);
	printf("%lu, ", fibnu);
	while (i < 89)
	{
		printf("%lu, ", fibnum);
		fibn = fibnu;
		fibnu = fibnum;
		fibnum = fibn + fibnu;
		i++;
	}

	fibnu1 = fibnu / 1000000000;
	fibnu2 = fibnu % 1000000000;
	fibnum1 = fibnum / 1000000000;
	fibnum2 = fibnum % 1000000000;

	while (j < 98)
	{
		printf("%lu%lu, ", fibnum1, fibnum2);
		fibn1 = fibnu1;
		fibn2 = fibnu2;
		fibnu1 = fibnum1;
		fibnu2 = fibnum2;
		fibnum1 = fibn1 + fibnu1 + ((fibn2 + fibnu2) / 1000000000);
		fibnum2 = (fibn2 + fibnu2) % 1000000000;
		j++;
	}
	printf("%lu%lu\n", fibnum1, fibnum2);
	return (0);
}
