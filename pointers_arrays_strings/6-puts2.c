#include "main.h"

/**
 * puts2 - print every other charaa
 * @str: string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len])
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
