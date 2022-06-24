#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: represents the number of command line arguments
* @argv: array of character pointers (contains all parameters.)
* Return: Always success (0)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		i = 0;

		while (*argv)
		{
			i++;
			argv++;
			continue;
		}
		printf("%d\n", i - 1);
	}

	return (0);
}
