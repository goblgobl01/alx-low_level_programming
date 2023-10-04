#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters.
 *
 * @size: The size of the array to create.
 * @c: The character to fill the array with.
 *
 * Return: A pointer to the all.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == 0)
	return ('\0');

else
{
	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0 ; i < size ; i++)
		*(ptr + i) = c;
	return (ptr);
}

}
