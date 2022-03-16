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
	int CH;

	if (c == 'a' && c <= 'z')
	{
		CH = 1;
	} else if (c == 'A' && c <= 'Z')
	{
		CH = 0;
	} else if (c >= 0)
	{
		CH = 1;
	}
	return (CH);
}
