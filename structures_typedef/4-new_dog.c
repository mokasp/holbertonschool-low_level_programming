#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner:
 * owner of dog
 *
 * Return: (new dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *d;

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return (NULL);
	return (d);
}
