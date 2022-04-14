#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Print number followed by a new line
 * @separator: as name implies, seperator symbol
 * @n: int before "..."
 * @...: argument list.
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, p;
	va_list print;

	va_start(print, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			p = va_arg(print, int);
			printf("%d", p);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				separator = "";
			}
			p = va_arg(print, int);
			printf("%d%s", p, separator);
		}
	}
	printf("\n");
}

