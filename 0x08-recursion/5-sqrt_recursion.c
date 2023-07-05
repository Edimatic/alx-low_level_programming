#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int value)
{

	if (value * value == n)
		return (value);
	else if (value * value < n)
		return  (square(n, value + 1));
	else
		return (-1);

}
