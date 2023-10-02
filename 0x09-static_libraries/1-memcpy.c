#include "main.h"

/**
 * _memcpy - copies a area of memory to another area
 * @dest: pointer of the destination
 * @src: pointer of the destination src
 * @n : the size of the area
 *
 * Return: a pointer to the first character of the copied string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *return_value = dest;
unsigned int i;

for (i = 0 ; i < n ; i++)
	dest[i] = src[i];

return (return_value);
}
