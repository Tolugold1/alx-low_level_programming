#include "main.h"

/**
 * _isupper -  function to test for uppercase letter
 * @c: Alphabet provided.
 * Return: 1 if is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
