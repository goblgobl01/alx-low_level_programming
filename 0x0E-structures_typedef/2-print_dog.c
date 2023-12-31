#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the information of a dog struct
 * @d: pointer to a struct of type 'dog'
 *
 */

void print_dog(struct dog *d)
{
if (d == NULL)
	exit(1);

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);

if (d->age == 0.0)
	printf("Age: (nil)");
else
	printf("Age: %f\n", d->age);

if (d->owner == NULL)
	printf("Owner: (nil)");
else
	printf("Owner: %s\n", d->owner);

}
