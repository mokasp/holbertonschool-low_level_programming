#include "main.h"

/**
 * helper - helps find prime number
 * @n: number
 * @i: 2
 *
 * Return: Always 0 (Success)
 */

int helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (helper(n, i + 1));
}

/**
 * is_prime_number - find if number is prime
 * @n: number
 *
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper(n, 2));
}
