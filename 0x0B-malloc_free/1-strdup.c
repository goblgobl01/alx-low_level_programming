#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string in memory.
 *
 * @str: The input string to duplicate.
 *
 * Return: If str is NULL or memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the newly allocated string.
 */


char *_strdup(char *str)
{
char *ptr;
int i, j;

j = 0;
while (str[j] != '\0')
	j++;

if (j == 0)
	return ('\0');

else
{
	ptr = (char *) malloc(j *sizeof(char));
	for (i = 0 ; i <= j + 1 ; i++)
		*(ptr + i) = str[i];
	return (ptr);
}

}
