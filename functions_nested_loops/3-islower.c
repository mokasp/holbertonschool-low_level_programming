#include "main.h"

/**
 * _islower - check if lower case
 *
 * @c: checks if lowercase
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
