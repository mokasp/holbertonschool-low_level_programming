#include "main.h"

/**
 * _abs  - print absolute value
 *
 * @n: number to be checked
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
