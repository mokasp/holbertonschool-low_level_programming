#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: pointer to struct dog_t/dog
 *
 * Return: null
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
