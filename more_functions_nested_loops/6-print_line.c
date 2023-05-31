#include "main.h"

/**
 * print_line - print a line
 * @n: number of lines
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
