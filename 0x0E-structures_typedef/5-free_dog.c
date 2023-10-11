#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 */
void free_dog(dog_t *d)
{
free(d);
}
