#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonal elements
 * @a: 2d array of ints
 * @size: size
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

