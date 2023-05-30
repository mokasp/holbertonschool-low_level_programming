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

	while (w <= 24)
	{
		if (w <= 9)
		{
			_putchar('0');
			_putchar(w % 10 + '0');
			_putchar(':');
		}
		else if (w >= 10 && w <= 19)
		{
			_putchar('1');
			_putchar(w % 10 + '0');
			_putchar(':');
		}
		else if (w >= 20 && w <= 24)
		{
			_putchar('2');
			_putchar(w % 10 + '0');
			_putchar(':');
		}
		w++;
	}

	while (x <= 59)
	{
		_putchar(x / 10 + '0');
		_putchar(w % 10 + '0');
		_putchar('\n');
	}
}
