#include "search_algos.h"

/**
 * interpolation_search -  function that searches
 * for a value in a sorted array of integers
 *  using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to be searched for in the array
 * Return: the index of the searched element.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, middle_number;

	low = 0;
	high = size - 1;
	if (!array)
		return (-1);
	while ((array[high] != array[low]) &&
			(value >= array[low]) &&
			(value <= array[high]))
	{
		middle_number = low + ((value - array[low]) *
			 (high - low) / (array[high] - array[low]));
		if (value > array[middle_number])
		{
			printf("Value checked array[%ld] = [%d]\n",
					middle_number, array[middle_number]);
			low = middle_number + 1;
		}
		else if (value < array[middle_number])
		{
			printf("Value checked array[%ld] = [%d]\n",
					middle_number, array[middle_number]);
			high = middle_number - 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n",
					middle_number, array[middle_number]);
			return (middle_number);
		}
	}
	middle_number = low + ((value - array[low]) *
			(double)(high - low) / (array[high] - array[low]));
	printf("Value checked array[%ld] is out of range\n", middle_number);
	if (array[low] == value)
		return (low);
	return (-1);
}

