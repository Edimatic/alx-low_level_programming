#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog struct
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: New_dog at end
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0, h = 0, m;
	dog_t *doge;

	while (name[x] != '\0')
		x++;
	while (owner[h] != '\0')
		x++;
	/* Allocate memory for the new dog */
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(x * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (m = 0; m <= x; m++)
		doge->name[m] = name[m];
	doge->age = age;
	doge->owner = malloc(h * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
	/* Don't forget to free the memory when you are done with the dog */
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (m = 0; m <= h; m++)
		doge->owner[m] = owner[m];
	return (doge);
}
