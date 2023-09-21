#include <main.h>

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
int j;
char *dest_start = dest;

dest_length = 0;
while (*(dest + dest_length) != '\0')
dest_length++;

j = 0;
for (i = dest_length; i < (dest_length + n); i++)
{
dest[i] = src[j];
j++;
}

if (dest_length + n < 98)
dest[dest_length + n] = '\0';

return (dest_start);
}
