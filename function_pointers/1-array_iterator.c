#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - uses function as parameter on elements of array
 * @array: array to use
 * @size: size of array
 * @action: pointer to function to use as parameter
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (*array)
		action(*array);
}

