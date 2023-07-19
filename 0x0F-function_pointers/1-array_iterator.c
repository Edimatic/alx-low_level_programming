#include <stdio.h>

/**
 * array_iterator - executes function
 * @array: array of elements implemented
 * @size: array's size
 * @action: pointer to function
 * Return: Nothing at the end
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ab;

	if (array && size && action)
	{
		for (ab = 0; ab < size; ab++)
		{
			(*action)(array[ab]);
		}
	}
}
