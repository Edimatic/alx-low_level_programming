#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: index first element cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int xy;

	if (array && cmp)
	{
		for (xy = 0; xy < size; xy++)
		{
			if (cmp(array[xy]) != 0)
			{
				return (xy);
			}
		}
	}
	return (-1);
}
