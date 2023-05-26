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
	int y = 44;
	int z = 32;
	int n = 10;

	while (x <= 57)
	{
		putchar(x);
		x++;
		if (x <= 57)
		{
			putchar(y);
			putchar(z);
		}
	}
	putchar(n);
	return (0);
}
