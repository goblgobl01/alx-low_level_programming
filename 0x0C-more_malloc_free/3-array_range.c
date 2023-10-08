#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers from min to max (inclusive).
 *
 * @min: The minimum value for the array.
 * @max: The maximum value for the array.
 *
 * Return: A pointer to the newly allocated array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
	return (NULL);
ptr = malloc(sizeof(int) * (max + 1));
if (ptr == NULL)
	return (NULL);
for (i = 0; i <= max - min; i++)
	*(ptr + i) = min + i;

return (ptr);
}
