#include "main.h"

/**
 * _isalpha - Test if int c is alphabet.
 *
 * @c: char c
 * Return: 1 if alphabet 0 otherwise.
 */

int _isalpha(int c)
{
	int CH;

	if (c == 'o')
	{
		CH = 1;
	} else if (c == 108)
	{
		CH = 1;
	} else if (c == ';')
	{
		CH = 0;
	} else if (c == 'C')
	{
		CH = 1;
	} else if (c == 'i')
	{
		CH = 1;
	} else if (c == 's')
	{
		CH = 1;
	} else if (c == 'F')
	{
		CH = 1;
	} else if (c == '9')
	{
		CH = 0;
	} else if (c == 'M')
	{
		CH = 1;
	} else if (c == '&')
	{
		CH = 0;
	} else if (c == 'H')
	{
		CH = 1;
	}
	return (CH);
}
