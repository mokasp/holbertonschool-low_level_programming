#include "3-calc.h"

/**
 * int op_add - add
 * @a: first int
 * @b: second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * int op_sub - subtract
 * @a: first int
 * @b: second int
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;

	return (dif);
}

/**
 * int op_mul - multiple
 * @a: first int
 * @b: second int
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	int pro;

	pro = a * b;

	return (pro);
}

/**
 * int op_div - divide
 * @a: first int
 * @b: second int
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	int res;

	res = a / b;

	return (res);
}

/**
 * int op_mod - modulo
 * @a: first int
 * @b: second int
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	int rem;

	rem = a % b;

	return (rem);
}
