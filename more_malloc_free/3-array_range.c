#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - create array of ints
 * @min: start of array
 * @max: end of array
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int i;
	int *mem;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(int) * (max - min + 1));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		mem[i] = i;
	}

	return (mem);
}
