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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
