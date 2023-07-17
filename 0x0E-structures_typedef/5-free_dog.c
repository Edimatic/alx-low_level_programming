#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - The dog has free memory
 * @d: pointer to dog
 * Return: No
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
