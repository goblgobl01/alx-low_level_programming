#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status code 98 on failure
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
