#include "search_algos.h"

/**
 * linear_search - searches for first occurance of a value in an array
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: On success, the index of the value found. On failure, -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
	}

	return (-1);
}
