#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc and argv
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always (Successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
