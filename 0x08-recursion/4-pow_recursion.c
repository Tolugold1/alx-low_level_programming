#include "main.h"

/**
 * _pow_recursion - Function that return the value of x raised to the
 * power if y
 * @x: first integer.
 * @y: the power of x.
 * Return: answer.
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		i = -1;
	}
	else if (y == 0)
	{
		i = 1;
	}
	else if (y > 0)
	{
		i = x * _pow_recursion(x, y - 1);
	}
	return (i);
}
