#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of the division.
 *	If b is 0, print an error message and return 0.
 */
int div(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Division by zero\n");
	return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder of the division of two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The remainder of the division.
 *	If b is 0, print an error message and return 0.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error: Modulo by zero\n");
	return (0);
	}
	return (a % b);
}

