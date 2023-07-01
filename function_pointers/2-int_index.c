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
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		else
			return (-1);
	}
}
