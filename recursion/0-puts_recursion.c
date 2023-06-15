#include "main.h"

/**
 * _puts_recursion - print string using recursion
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
