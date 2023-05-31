#include "main.h"

/**
 * more_numbers - print more nums
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int x, z;

	for (z = 1; z <= 10; z++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar(10);
	}
}

