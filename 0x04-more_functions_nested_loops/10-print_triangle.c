#include "main.h"

/**
 * print_triangle - print triangle using #.
 * @size: number of lines.
 * Return: void.
 */

void print_triangle(int size)
{
	int row, column, k;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = size - row; column > 1; column--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= row; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
