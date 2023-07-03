#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int v, addition1 = 0, addition2 = 0;

	for (v = 0; v < size; v++)
	{
		addition1 += *(a + (size * v + v));
		addition2 += *(a + (size * v + size - 1 - v));
	}
	printf("%d, ", addition1);
	printf("%d\n", addition2);
}
