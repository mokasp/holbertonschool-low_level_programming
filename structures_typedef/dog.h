#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure dog
 * @name: name of dog, char pointer
 * @age: age of dog, float
 * @owner: owner of dog, char pointer
 */

/* defines a new type of structure */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
