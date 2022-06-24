#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: number of command line arguments
* @argv: array of all parameters
* atoi: function converts string numbers to integers
* Return: Always success (0)
*/

int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
