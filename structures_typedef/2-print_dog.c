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
	if (d = NULL)
		printf("");

	while (*d)
	{
		if (*d = NULL)
			print("(nil)");
		else
		{
			printf("%c\n", d->name);
			printf("%f\n", d->age);
			printf("%c\n", d->owner);
		}
}
