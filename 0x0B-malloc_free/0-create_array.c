#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array using malloc
 *
 * @size: size of the array
 * @c: character
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
