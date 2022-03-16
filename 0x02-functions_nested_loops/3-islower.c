#include "main.h"

/**
 * _islower - Test to check if character provided is lowercase letter.
 *
 * @c:  character provided
 *
 * Return: 1 if c is lower, 0 otherwise.
 */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
