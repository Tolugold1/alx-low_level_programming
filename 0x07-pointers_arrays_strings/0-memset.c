#include "main.h"

/**
 * _memset - function to fill memory with contant byte
 * @s: the  array
 * @b: the constant variable
 * @n: the size  of variable b
 * Return: result
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i  = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
