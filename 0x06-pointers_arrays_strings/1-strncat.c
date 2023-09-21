#include "main.h"

/**
 * _strncat - a function concatenates two strings
 * @dest: the destination pointer
 * @src: the source pointer
 * @n : the number of charcter that gonna be concatented
 *
 * Return: A pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_length;
int i;
char *dest_start = dest;

dest_length = 0;
while (*(dest + dest_length) != '\0')
	dest_length++;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[dest_length + i] = src[i];
}
dest[dest_length + i] = '\0';

return (dest_start);
}
