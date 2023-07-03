#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num1, num2, len, result;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = argv[2];

	if (ops == '/' || ops == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (0);
}
