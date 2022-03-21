#include "main.h"

/**
 * swap_int - function to swap ints.
 * @a: first integer
 * @b: second integer.
 * Return: answer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a + *b;

	*a = c - *a;
	*b = c - *b;
}
