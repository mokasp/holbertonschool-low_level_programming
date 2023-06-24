#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - deallocates memory for a 2d array
 * @grid: grid created with **alloc_grid
 * @height: h
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i  < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
