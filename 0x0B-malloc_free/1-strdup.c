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

if (str == NULL)
	return (NULL);
else if (*str == '\0')
	return ('\n');

else
{

	j = 0;
	while (str[j] != '\0')
		j++;

	j--;

	ptr = (char *) malloc(j * sizeof(char));
	for (i = 0 ; i <= j ; i++)
	*(ptr + i) = str[i];
	return (ptr);
}

}
