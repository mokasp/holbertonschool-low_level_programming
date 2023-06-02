#include "main.h"

/**
 * print_rev - print string to stdout
 * @s: string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;

	while (s[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
