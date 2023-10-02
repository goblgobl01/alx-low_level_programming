#include "main.h"

/**
 * _strcpy - a function that copy another one
 *@dest : the destination pointer
 *@src : the source pointer
 *
 *Return: A pointer to the destination string
*/

char *_strcpy(char *dest, char *src)
{
int i, j;
char *dest_start = dest;

i = 0;
while (*(src + i) != '\0')
	i++;

for (j = 0 ; j <= i ; j++)
	dest[j] = src[j];

return (dest_start);
}
