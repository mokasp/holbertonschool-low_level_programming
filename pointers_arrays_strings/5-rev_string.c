#include "main.h"

/**
 * rev_string - print string to stdout
 * @s: string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len, middle, i;
	char temp;

	len = 0;

	while (s[len])
	{
		len++;
	}
	middle = len / 2;
	
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
