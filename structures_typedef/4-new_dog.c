#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicate a string
 * @elmnt: element to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *elmt)
{
	char *dup;
	char *p;
	int len = 0;

	if (elmt == NULL)
		return (NULL);

	while (elmt[len])
		len++;

	dup = (char *)malloc(sizeof(char) * len + 1);

	if (dup == NULL)
		return (NULL);

	p = dup;

	while (*elmt)
	{
		*p = *elmt;
		p++;
		elmt++;
	}
	*p = '\0';

	return (dup);
}

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
	struct dog_t *new_dog;

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	return (new_dog);
}
