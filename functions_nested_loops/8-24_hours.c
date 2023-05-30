#include "main.h"

/**
 * jack_bauer - print 24 nours with minutes
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int w, x;

	w = 0;
	x = 0;

	while (w <= 23)
	{
		while (x <= 59)
		{
			_putchar(w / 10 + '0');
			_putchar(w % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');
			x++;
		}
		x = 0;
		w++;
	}
}
