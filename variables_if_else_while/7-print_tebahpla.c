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
	int x = 122;
	int n = 10;

	while (x >= 97)
	{
		putchar(x);
		--x;
	}
	putchar(n);
	return (0);
}
