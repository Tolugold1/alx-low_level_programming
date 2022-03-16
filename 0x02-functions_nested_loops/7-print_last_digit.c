#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: supplied value.
 * Return: return the last digit of the int.
 */

int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
