#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function to allocate memory for 2D array
 *
 * @width: the width of the array(Column)
 * @height: the height of the array(row).
 * Return: result.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid); 
}
