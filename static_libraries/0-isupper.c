#include "main.h"

/**
 * _isupper - check if upper case
 * @c: character to be checked
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

