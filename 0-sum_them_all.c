#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function to return summ of arguments
 * @n: The last format before "..."
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list add;

	va_start(add, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
