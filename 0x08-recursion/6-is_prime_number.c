#include "main.h"

/**
  * checkprime - check if a number is prime
  * @num: number to be evaluated if its prime
  * @i: number to divide with
  * Return: 1 (if n is prime); otherwise 0
  */

int checkprime(int num, int i)
{
	if (num == 1)
	{
		return (1);
	}
	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (checkprime(num, i + 1));
		}
	}
}

/**
  * is_prime_number - returns 1 if input integer is a prime number
  * @n: integer input to be evaluated
  * Return: 1 (if prime number); otherwise 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 && n == 3)
	{
		return (1);
	}
	return (checkprime(n, n / 2) > 0);
}
