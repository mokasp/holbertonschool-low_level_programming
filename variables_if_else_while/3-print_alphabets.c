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
	int x = 97;

	while (x >= 97 && x <= 122)
	{
		putchar(x);
		++x;

		if (x >= 123)
		{
			x = 65;
		}

		while (x >= 65 && x <= 90)
		{
			putchar(x);
			++x;
		}
	}
	printf("\n");
	return (0);
}
