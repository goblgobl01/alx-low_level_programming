#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
char *ptr;
if (s2 == NULL)
	s2 = "";

if (n >= strlen(s2))
{
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
}
else
{
	ptr = malloc(strlen(s1) + n + 1);
}

if (ptr == NULL)
	return (NULL);

a = 0;
while (s1[a] != '\0')
{
	*(ptr + a) = s1[a];
	a++;
}

b = 0;
while (s2[b] != '\0' && b < n)
{
	*(ptr + a) = s2[b];
	a++;
	b++;
}
*(ptr + a) = '\0';

return (ptr);
}