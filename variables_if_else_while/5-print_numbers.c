#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'specific digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int n = 10;

	while (x <= 57)
	{
		putchar(x);
		++x;
	}
	putchar(n);
	return (0);
}
