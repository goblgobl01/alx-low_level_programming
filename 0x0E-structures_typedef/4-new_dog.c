#include "dog.h"
#include <string.h>

/*

Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
char *name_storage;
char *owner_storage;

strcpy(name_storage,name);
strcpy(owner_storage,owner);

ptr->name = name_storage;
ptr->owner = owner_storage;
ptr->age = age;

if (ptr == NULL)
	return(NULL);
else
	return(ptr);

}
