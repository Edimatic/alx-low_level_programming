#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum input
 * @max: maximum output
 * Return: array at the end.
 */
int *array_range(int min, int max)
{
	int *arry;
	int f = 0;
	int v = min;

	if (min > max)
		return (0);
	arry = malloc((max - min + 1) * sizeof(int));

	if (!arry)
		return (0);
	while (f <= max - min)
		arry[f++] = v++;
	return (arry);
}
