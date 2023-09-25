#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to be searched.
 * @accept: The characters to search for in `s`.
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int incrementor;
unsigned int temp;

incrementor = 0;
for (i = 0 ; s[i] != '\0' ; i++)
{
	temp = incrementor;
	for (j = 0 ; accept[j] != '\0' ; j++)
	{
	if (s[i] == accept[j])
		incrementor++;
	}
	if (temp == incrementor)
		break;
}
return (incrementor);
}
