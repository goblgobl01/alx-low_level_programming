#include <stdlib.h>
#include "main.h"
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
unsigned int i, j;
char *ptr;
if (s2 == NULL)
	s2 = "";
i = 0;
while (s1[i] != '\0')
	i++;
j = 0;
while (s2[j] != '\0')
	j++;

if (n >= j)
	ptr = malloc(i + j + 1);
else
	ptr = malloc(i + n + 1);

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
