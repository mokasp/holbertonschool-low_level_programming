#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
