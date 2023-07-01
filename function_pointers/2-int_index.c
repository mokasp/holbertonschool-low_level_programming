#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searchers for int
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function to compare
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
	return (i)
}
