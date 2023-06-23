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
	int i;

	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
	}

	if (grid == NULL)
	{
		return (NULL);
	}

	return (grid);
}
