#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function to print string
 * @separator: the string seperator
 * @n: number of argument supply
 * Return: string.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list p_string;

	va_start(p_string, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(p_string, char *);
			if (string == NULL)
			{
				string = "(nil)";
			}
			printf("%s", string);
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
			string = va_arg(p_string, char *);
			if (string == NULL)
			{
				string = "(nil)";
			}
			printf("%s%s", string, separator);
		}
	}
	va_end(p_string);
	printf("\n");
}
