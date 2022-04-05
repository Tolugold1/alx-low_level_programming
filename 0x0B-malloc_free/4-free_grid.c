#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory allocated by using malloc
 * @grid: the memory allocated
 * @height: the height of the array
 * Return: result
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
