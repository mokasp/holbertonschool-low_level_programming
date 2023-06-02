#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (str[len])
	{
		len++;
	}

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
