#include "main.h"

/**
 * binary_to_uint -  function that converts a binary
 * number to an unsigned int.
 * @b: the string set of 1s and 0s
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, count;
	int i, len;

	count = 0;
	result = 1;
	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			count += result;
		}
		result *= 2;
	}
	return (count);
}

/**
 * _strlen - Function to return the length of a string
 * @s: string.
 * Return: length.
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}
