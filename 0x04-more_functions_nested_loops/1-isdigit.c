#include "main.h"

/**
 * _isdigit - Test for digits
 * @c: Value
 * Return: 1 if c is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int CH;

	if (c >= '0' && c <= '9')
	{
		CH = 1;
	}
	else
	{
		CH = 0;
	}
	return (CH);
}
