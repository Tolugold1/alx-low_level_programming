#include "main.h"

/**
 * print_sign - return 1 if character supply is > 0,0 otherwise and if less -1
 *
 * @n: value provided
 *
 * Return: 1, 0 -1 according to the value provided.
 */

int print_sign(int n)
{
	int CH;

	if (n > 0)
	{
		_putchar('+');
		CH = 1;
	} else if (n == 0)
	{
		_putchar(0);
		CH = 0;
	} else if (n < 0)
	{
		_putchar('-');
		CH = -1;
	}
	return (CH);
}
