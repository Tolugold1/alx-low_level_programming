#include "main.h"

/**
 * is_prime_number - Function to test for prime numbers
 * @n: the numbser to be tested
 * @i: the tester
 * Return: 1 if n is prime otherwise return 0
 */

int prime(int n, int i);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime(n, n - 1));
	}
}

/**
 * prime - testing function
 * @n: the value supplied and to be checked
 * @i: the testing value
 * Return: result.
 */

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, i - 1));
	}
}
