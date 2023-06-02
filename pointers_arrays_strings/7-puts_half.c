#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, len, mid, n;

	len = 0;

	while (str[len])
	{
		len++;
	}

	mid = len / 2;
	n = (len - 1) / 2;

	if (mid % 2 == 0)
	{
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = mid; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
