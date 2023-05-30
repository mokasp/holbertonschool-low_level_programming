#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - count to 98
 *
 * @n: start number
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int x;

	for (x = n; x > 98; x--)
	{
		if (x > 98)
		{
			printf("%d, ", x);
		}
		else
		{
			printf("%d", x);
			printf("\n");
		}
	}
	for (x = n; x <= 98; x++)
	{
		if (x < 98)
		{
			printf("%d, ", x);
		}
		else
		{
			printf("%d", x);
			printf("\n");
		}
	}
}
