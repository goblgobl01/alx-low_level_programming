#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *First_charcter;

for (i = 0 ; s[i] != '\0' ; i++)
{
	for (j = 0 ; accept[j] != '\0' ; j++)
	{
	if (s[i] == accept[j])
		{
		First_charcter = &s[i];
		goto exitloops;
		}
	}
}
exitloops:


return (First_charcter);
}
