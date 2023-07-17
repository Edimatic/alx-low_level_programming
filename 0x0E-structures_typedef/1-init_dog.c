#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer is pointing to struct type dog
 * @name: pointer is pointing to char name's dog
 * @age: age's dog
 * @owner: pointer is pointing to char owner's dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
