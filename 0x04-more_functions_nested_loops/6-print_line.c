#include "main.h"

/**
 * print_line- function draw line.
 * @n: number of time to draw _
 *
 * Return: absolute 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
