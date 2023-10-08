#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: If nmemb or size is 0, or if malloc fails, returns NULL.
 *         Otherwise, returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

memset(ptr, 0, (nmemb * size));

return (ptr);
}
