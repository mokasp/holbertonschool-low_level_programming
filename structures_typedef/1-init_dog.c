#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog structure
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
