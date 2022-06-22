#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: integer being evaluated
  * Return: -1 (if n < 0, indicating error); otherwise factorial
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
