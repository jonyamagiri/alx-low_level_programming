# include "main.h"

/**
* print_triangle - prints a triangle
* Description: function prints a triangle using the character #,
* followed by a new line
* @size: is the size of the triangle (If size is 0 or less, the function
* should print only a new line
* Return: Always success (0)
*/

void print_triangle(int size)
{
	int space, row, tr;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			space = 0;
			while (space < (size - 1) - row)
			{
				_putchar(' ');
				space++;
			}
			tr = 0;
			while (tr <= row)
			{
				_putchar('#');
				tr++;
			}
			_putchar('\n');
		}
	}
}
