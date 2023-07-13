#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointa;

	pointa = malloc(b);
	if (pointa == NULL)
		exit(98);
	return (pointa);
}
