#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destination pointer
 * @src: the source pointer
 * @n : the number of string character to be copied
 *
 * Return: A pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
char *dest_start = dest;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
if (src[i] == '\0')
	dest[i] = '\0';

return (dest_start);
}
