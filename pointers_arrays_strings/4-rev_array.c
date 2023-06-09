#include "main.h"

/**
 * reverse_array - compare two strings
 * @a: string to be reversed
 * @n: number of elements
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int x, i, j;

	i = 0;
	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
		j = j - 1;
	}
}
