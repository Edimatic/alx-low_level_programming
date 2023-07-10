#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars and initialize with a specific char
 * @size: The size of the array
 * @c: The char used to initialize the array
 *
 * Return: Always a pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int f = 0; f < size; f++)
		array[f] = c;

	return (array);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned int size = 10;
	char c = 'A';

	char *array = create_array(size, c);

	if (array != NULL)
	{
		for (unsigned int f = 0; f < size; f++)
			printf("%c ", array[f]);
		printf("\n");

		free(array);
	}
	else
	{
		printf("Creation of an array not possible. \n");
	}

	return (0);
}

