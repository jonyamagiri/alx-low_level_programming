#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - performs simple operations and prints result to stdio
* @argc: number of command line arguments supplied
* @argv: array of pointers to the arguments supplied
* Return: Always success (0)
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opr = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (((*opr == '/') && (*argv[3]) == '0')||
	((*opr == '%') && (*argv[3] == '0')))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(opr);
	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
