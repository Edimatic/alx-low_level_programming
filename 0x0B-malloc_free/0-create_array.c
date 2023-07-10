#include "main.h"

/**
 * create_array - Create an array of chars and initialize with a specific char
 * @size: The size of the array
 * @c: The char used to initialize the array
 *
 * Return: Always pointer to the created array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*While for array*/
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}

}
