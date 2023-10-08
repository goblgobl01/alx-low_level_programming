#include "main.h"
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
	return (NULL);
ptr = malloc(sizeof(int) * max);
if (ptr == NULL)
	return (NULL);

for (i = 0; i < max; i++)
	*(ptr + i) = i;

return (ptr);
}
