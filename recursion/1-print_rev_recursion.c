#include "main.h"

/**
 * _print_rev_recursion - print reverse of string w recursion
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
