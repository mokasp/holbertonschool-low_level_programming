#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print size of types'
 *
 * Return: Always (0)
 */
int main(void)
{
	size_t charSize = sizeof(char);
	size_t intSize = sizeof(int);
	size_t longIntSize = sizeof(long int);
	size_t longLongIntSize = sizeof(long long int);
	size_t floatSize = sizeof(float);

	printf("Size of a char: %i byte(s)\n", charSize);
	printf("Size of an int: %i byte(s)\n", intSize);
	printf("Size of a long int: %i byte(s)\n", longIntSize);
	printf("Size of a long long int: %i byte(s)\n", longLongIntSize);
	printf("Size of a float: %i byte(s)\n", floatSize);
}
