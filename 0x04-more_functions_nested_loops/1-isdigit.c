#include "main.h"

/**
 * _isdigit - Test for digits
 * @c: Value
 * Return: 1 if c is digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int i;
	int CH;

	i = c % 10;
	if (i >= 0 && i <= 9)
	{
		CH = 1;
	}
	else if ((i == 'a' && i <= 'z') && (i == 'A' && i <= 'Z'))
	{
		CH = 0;
	}
	return (CH);
}
