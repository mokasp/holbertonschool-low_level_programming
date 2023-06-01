#include "main.h"

/**
 * _puts - print string to stdout
 * @str: string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
