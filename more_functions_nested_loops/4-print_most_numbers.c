#include "main.h"

/**
 * print_most_numbers - print nums
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x !=  50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar(10);
}

