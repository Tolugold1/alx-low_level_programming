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
	s[n]  = b;
	return (s);
}
