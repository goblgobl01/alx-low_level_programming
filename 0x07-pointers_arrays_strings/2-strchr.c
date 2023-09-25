#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: if the character is found the pointer if not null
 */

char *_strchr(char *s, char c)
{
int i, j;

j = 0;
while (*(s + j) != '\0')
	j++;

for (i = 0 ; i < j ; i++)
{
	if (s[i] == c)
		return (&s[i]);
}

return (0);
}
