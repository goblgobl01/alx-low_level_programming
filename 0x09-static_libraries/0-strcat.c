#include "main.h"

/**
 * _strcat - contenate the copied string  to the destination
 *@dest : the destination pointer
 *@src : the source pointer
 *
 * Return: return a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
int dest_length;
int src_length;
int i;
int j;
char *dest_start = dest;

dest_length = 0;
src_length = 0;
while (*(dest + dest_length) != '\0')
	dest_length++;
while (*(src + src_length) != '\0')
	src_length++;

j = 0;
for (i = dest_length; i <= (dest_length + src_length) ; i++)
	{
	dest[i] = src[j];
	j++;
	}

return (dest_start);
}
