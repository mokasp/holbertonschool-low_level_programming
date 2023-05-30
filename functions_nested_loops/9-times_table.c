#include "main.h"

/**
 * times_table - 9's times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int x, y, w, z, q;

	x = 0;

	while (x <=  9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;

			if (z > 9)
			{
				w = z % 10;
				q = z / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(q + '0');
				_putchar(w + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
