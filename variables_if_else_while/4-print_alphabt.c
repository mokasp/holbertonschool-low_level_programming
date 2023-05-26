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
	int x = 96;

	while (x >= 96 && x <= 121)
	{
		++x;
		if (x == 101)
		{
			;
		}
		else if (x == 113)
		{
			;
		}
		else 
			putchar(x);
	}
	printf("\n");
	return (0);
}
