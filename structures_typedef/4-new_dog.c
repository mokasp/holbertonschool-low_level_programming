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
 * @owner: owner of dog
 * owner of dog
 *
 * Return: (new dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		free(new_dog);
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
