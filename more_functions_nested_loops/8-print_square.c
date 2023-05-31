#include "main.h"

/**
 * print_square - print square
 * @n: number of hashtags
 *
 * Return: Always 0 (Success)
 */

void print_square(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
