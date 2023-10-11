#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the dog's name
 * @age: The age of the dog
 * @owner: Pointer to the owner's name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
	printf("Invalid pointer to struct dog\n");
	exit(1);
}

d->name = name;
d->owner = owner;
d->age = age;
}
