#include "main.h"

/**
  * _abs - Entry point
  * Description: Computes the absolute value of an integer
  * @n: Takes integer as input
  * Return: Absolute integer
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
