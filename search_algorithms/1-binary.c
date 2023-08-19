#include "search_algos.h"

/**
 * binary_search - repeatedly divides search interval to find value in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: middle element on success, (-1) on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + ((high - low) / 2);
		if (array[mid] == value)
		{
			printf("Searching in array: ");
			printArray(array, low, high);
			return (mid);
		}
		if (array[mid] < value)
		{
			printf("Searching in array: ");
			printArray(array, low, high);
			low = mid + 1;
		}
		else
		{
			printf("Searching in array: ");
			printArray(array, low, high);
			high = mid - 1;
		}
	}
	return (-1);
}

/**
 * printArray - prints array that was searched
 * @array: array to print
 * @low: start of array
 * @high: end of array
 *
 * Return: void
 */
void printArray(int *array, size_t low, size_t high)
{
	size_t i;

	for (i = low; i <= high; i++)
	{
		if (i < high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
