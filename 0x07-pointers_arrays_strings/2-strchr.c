#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: If the character is found, a pointer to the first occurrence
 *         of the character in the string; otherwise, NULL.
 */

char *_strchr(char *s, char c)
{
int i, j;
char *p;

j = 0;
while (*(s + j) != '\0')
	j++;

for (i = 0 ; i < j ; i++)
{
	if (s[i] == c)
		break;
}
p = &s[i];

return (p);
}
