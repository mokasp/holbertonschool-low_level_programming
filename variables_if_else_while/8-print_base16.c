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
	int x = 47;
	int n = 10;

	while (x <= 102)
	{
		x++;
		if (x <= 57)
		{
			putchar(x);
		}
		else if (x >= 97 && x <= 102)
		{
			putchar(x);
		}
		else
		{
			;
		}
	}
	putchar(n);
	return (0);
}
