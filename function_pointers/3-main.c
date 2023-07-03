#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num1, num2, result;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ops = argv[2];

	result = get_op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
