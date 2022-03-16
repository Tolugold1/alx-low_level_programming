#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: supplied value.
 * Return: return the last digit of the int.
 */

int print_last_digit(int n)
{

	int c = n;
	int int_min;

	if (c < 0)
	{
		int_min = c * -1;
		int_min = int_min % 10;
		_putchar(int_min + '0');
		return (int_min);
		continue;
	} else
	{
		c = c % 10;
		_putchar(c + '0');
	}
	return (c);
}
