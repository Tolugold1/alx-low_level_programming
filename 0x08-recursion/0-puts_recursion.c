#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 * @s: string to print out.
 * Return: The string.
 */

void _puts_recursion(char *s)
{
	int i, len;

	len = strlen(s);
	i = 0;

	if (i < len)
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
	}
}
