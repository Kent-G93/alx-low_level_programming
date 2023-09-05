#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2d array of int
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));

		if (grid[x] == NULL)
		{
			for (j = 0; j < x; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[x][j] = 0;
		}
	}
	return (grid);
}
