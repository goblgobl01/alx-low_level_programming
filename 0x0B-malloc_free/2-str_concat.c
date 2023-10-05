#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 *
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: A pointer
 */

char *str_concat(char *s1, char *s2)
{
int i, j, a, b;
char *ptr;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

i = 0;
while (s1[i] != '\0')
	i++;

j = 0;
while (s2[j] != '\0')
	j++;

ptr = (char *)malloc((((j + 1) * sizeof(char)) + ((i + 1) * sizeof(char))) - 1);

if (ptr == NULL)
	return (NULL);

a = 0;
while (s1[a] != '\0')
{
	*(ptr + a) = s1[a];
	a++;
}

b = 0;
while (s2[b] != '\0')
{
	*(ptr + a) = s2[b];
	a++;
	b++;
}
*(ptr + a) = '\0';

return (ptr);
}
