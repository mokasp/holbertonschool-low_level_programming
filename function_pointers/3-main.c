#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, op;
	int calc;

	op = atoi(s);

	calc = get_op_func(op, a, b);
	printf("%d\n", calc);
}
