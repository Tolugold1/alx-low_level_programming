#include "main.h"

/**
 * _print_rev_recursion - Function that print a string in reverse
 * @s: The string to be reverse.
 * Return: reversed string.
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[-1]);
	}
}
