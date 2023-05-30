#include "main.h"

/**
 * print_last_digit  - print last digit
 *
 * @n: number to be checked
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
