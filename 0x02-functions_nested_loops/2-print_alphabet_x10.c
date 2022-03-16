#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times.
 *
 * Return: absolute zero.
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
