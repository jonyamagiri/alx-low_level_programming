#include "main.h"

/**
  * print_chessboard - prints the chessboard
  * @a: size of the chess matrix to be printed
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int i, num;

	num = 0;

	while (num < 8)
	{
		i = 0;

		while (i < 8)
		{
			_putchar(a[num][i]);
			i++;
		}
		num++;
		_putchar('\n');
	}
}
