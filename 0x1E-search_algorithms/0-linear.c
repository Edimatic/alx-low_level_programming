#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: The first index where @value is located,
 * or -1 if @value is not present in @array or if @array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t org;

	if (array == NULL)
	{
		return (-1);
	}

	for (org = 0; org < size; org++)
	{
		printf("Value checked array[%li] = [%i]\n", org, array[org]);
		if (array[org] == value)
		{
			return (org);
		}
	}
	return (-1);
}
