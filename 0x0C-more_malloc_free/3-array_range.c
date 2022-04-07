#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function to create an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: the array
 */

int *array_range(int min, int max)
{
	int *t;
	int i, ans;

	if (min > max)
	{
		return (NULL);
	}

	t = malloc(sizeof(int) * (1 + max - min));
	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0, ans = min; ans <= max; i++, ans++)
	{
		t[i] = ans;
	}
	return (t);
}
