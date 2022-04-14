#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: the array of integers
 * @size: size of the array
 * @cmp: the function to compare integer(function pointer)
 * Return: If no element matches or size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
