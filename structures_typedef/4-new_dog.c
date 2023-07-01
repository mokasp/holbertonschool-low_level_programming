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
	if (dog_t == NULL)
		return (NULL);

	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;

	return (dog_t);
}
