#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: the interger provide as the size.
 * Return: result.
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
