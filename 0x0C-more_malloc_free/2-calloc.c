#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function to allocate memory for an array
 * @nmemb: the size of the array
 * @size: the size of the data type.
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = malloc(nmemb * size);
	if (t == 0)
	{
		return (NULL);
	}

	_memset(t, 0, nmemb * size);

	return (t);
}

/**
 * _memset - Function to set memory.
 * @c: poiniter pointing to a memory
 * @s: character to constantly set the memory byte to
 * @e: the n byte of the set memory
 *
 * Return: result.
 */

char *_memset(char *c, char s, unsigned int e)
{
	unsigned int i;

	for (i = 0; i < e; i++)
	{
		c[i] = s;
	}
	return (c);
}
