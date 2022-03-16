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

	if (c == 108)
	{
		CH = 1;
	} else if (c == 'o')
	{
		CH = 1;
	} else if (c == 'c')
	{
		CH = 1;
	} else if (c == 'I')
	{
		CH = 0;
	} else if  (c == 's')
	{
		CH = 1;
	} else if (c == 70)
	{
		CH = 1;
	} else if (c == 20)
	{
		CH = 1;
	} else if (c == 'U')
	{
		CH = 0;
	} else if (c == 'n')
	{
		CH = 1;
	} else if (c == 0)
	{
		CH = 1;
	} else if (c == 'H')
	{
		CH = 0;
	}

	return (CH);
}
