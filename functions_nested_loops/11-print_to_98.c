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
	int x, y, z;
	
	while (n)
	{
		if (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		else if (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}

		else
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		n++;
	}
}
