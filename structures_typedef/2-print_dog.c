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
	if (d != NULL)
	{
		if (d == NULL)
			printf("(nil)");
		else
		{
			printf("%s\n", d->name);
			printf("%f\n", d->age);
			printf("%s\n", d->owner);
		}
}
