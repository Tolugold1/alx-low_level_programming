#include "search_algos.h"

/**
 * jump_search -  function that searches
 * for a value in a sorted array of integers
 *  using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to be searched for in the array
 * Return: the index of the searched element.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t y, z;

	y = 0;
	z = sqrt(size);
	if (!array)
	{
		return (-1);
	}
	while (array[y] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		y += z;
		if (y >= size)
		{
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", y - z, y);
	y -= z;

	while (array[y] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		y = y + 1;
		if (y == size)
		{
			return (-1);
		}
	}

	if (array[y] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		return (y);
	}
	return (-1);
}
