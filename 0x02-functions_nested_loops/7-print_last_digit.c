#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: supplied value.
 * Return: return the last digit of the int.
 */

int print_last_digit(int n)
{

	int c = n;

	if (c < 0)
	{
		c = c * -1;
		c = c % 10;
		_putchar(c + '0');
	} else
	{
		c = c % 10;
		_putchar(c + '0');
	}
	return (c);
}
