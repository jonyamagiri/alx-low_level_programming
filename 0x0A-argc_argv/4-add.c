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
	int i;
	int add;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[i]);
	}

	return (0);
}
