#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;
	int calc;
	char *ops;

	calc = get_op_func(ops);
	printf("%d\n", calc);
}
