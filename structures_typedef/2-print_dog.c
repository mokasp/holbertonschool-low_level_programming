#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("(nil)");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)");
}
