#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - allocates memory for a 2d array
 * @width: row
 * @height: columns
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **grid = 0;

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
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
