#include "main.h"
/**
 * reverse_array - reverse a int array
 * @a: pointer
 * @n: array length
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int y = 0, half;

	for (half = n / 2; half > 0; half--, y++)
	{
		a[n - y- 1] += a[y];
		a[y] = a[n - y - 1] - a[y];
		a[n - y - 1] = a[n - y - 1] - a[y];
	}
}
