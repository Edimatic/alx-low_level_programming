#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: sumnd 1
 * @b: sumnd 2
 * Return: result at the end
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: minuend
 * @b: sustrnd
 * Return: result at the end
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: multp 1
 * @b: multp 2
 * Return: result after operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: divisr
 * @b: dividndo
 * Return: result after operation
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo operator
 * @a: vaper 1
 * @b: vaper 2
 * Return: result after operation
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
