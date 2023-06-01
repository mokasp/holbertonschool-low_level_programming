#include "main.h"

/**
 * swap_int -- swap value of a pointer
 * @a: value to be swapped
 * @b: value to be swapped
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;

	*a = *b;
	*b = x;
}
