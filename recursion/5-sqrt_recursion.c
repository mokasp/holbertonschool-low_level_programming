#include "main.h"
/**
 * helper - helps find square root
 * @n: number
 * @i: counter/root
 *
 * Return: Always 0 (Success)
 */

int helper(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}

	if (i == n / 2)
	{
		return (-1);
	}

	return (helper(n, i + 1));
}
/**
 * _sqrt_recursion - find square root of a number
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (helper(n, i));
}
