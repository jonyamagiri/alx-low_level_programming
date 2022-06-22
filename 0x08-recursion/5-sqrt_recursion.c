#include "main.h"

/**
  * sqroot - tests if the number is a perfect square
  * @nm: number to be evaluated for square root
  * @rt: test root number
  * Return: natural square root; -1 (if not natural root)
  */

int sqroot(int nm, int rt)
{
	if ((rt * rt) == nm)
	{
		return (rt);
	}
	else if (rt == nm / 2)
	{
		return (-1);
	}
	else
	{
		return (sqroot(nm, rt + 1));
	}
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: integer whose square root we want to evaluate
  * Return: -1 (if n doesn't have a natural sqrt); otherwise sqrt
  */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqroot(n, 0));
	}
}
