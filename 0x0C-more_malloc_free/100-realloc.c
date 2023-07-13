#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: Always pointer at the end
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone;
	char *relloc;
	unsigned int ab;

	if (ptr != NULL)
	clone = ptr;
	else
	{ return (malloc(new_size));
	}
	if (new_size == old_size)

		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

	return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
	return (0);
	for (ab = 0; ab < (old_size || ab < new_size); ab++)
	{
		*(relloc + ab) = clone[ab];
	}
	free(ptr);
return (relloc);
}
