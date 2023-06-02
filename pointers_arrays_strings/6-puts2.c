#include "main.h"

/**
 * puts2 - print every other charaa
 * @str: string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; str += 2)
	{
		if (*str != '\0')
		{
		_putchar(*str);
		}
	}
	_putchar('\n');
}
