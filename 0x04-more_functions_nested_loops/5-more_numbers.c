# include "main.h"

/**
* more_numbers - prints 10 times the numbers, frptm 0 to 14
* Description: function prints 10 times the numbers, frptm 0 to 14,
* followed by a new line. Use _putchar three times only.
* Return: Always success (0)
*/

void more_numbers(void)
{
	int i, rpt = 0;

	while (rpt < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		rpt++;
	}
}
