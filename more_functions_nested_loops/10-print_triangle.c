#include "main.h"

/**
 * print_triangle - print triangle
 * @n: number of hashtags
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(' ');
			}
			for(z = 1; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar('\n');
}
