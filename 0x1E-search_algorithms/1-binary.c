#include "search_algos.h"

/**
 * binary_search -  function that searches for a
 * value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to be searched for in the array
 * Return: the index of the value searched for.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, middle_number;

	low = 0;
	high = size - 1;

	if (!array)
	{
		return (-1);
	}

	while (low <= high)
	{
		printArray(array, low, high);
		middle_number = floor((low + high) / 2);
		if (array[middle_number] < value)
		{
			low = middle_number + 1;
		}
		else if (array[middle_number] > value)
		{
			high = middle_number - 1;
		}
		else
		{
			return (middle_number);
		}
	}
	return (-1);
}


/**
 * printArray - print the current array
 * @array: the array to work with
 * @low: the starting index
 * @high: the last index
 * Return: void
 */

void printArray(int *array, size_t low, size_t high)
{
	size_t index;

	printf("Searching in array: ");
	for (index = low; index < high; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("%d\n", array[index]);
}
