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
	char i;
	int CH;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			CH = 1;
		}
	}
	return (CH);
}
