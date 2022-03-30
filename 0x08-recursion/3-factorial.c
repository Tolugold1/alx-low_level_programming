#include "main.h"

/**
 * factorial - Function that return factorial of a number
 * @n: number to return its factorial answer.
 * Return: factorial of n
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		i = -1;
	}
	else if (n == 0)
	{
		i = 1;
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
