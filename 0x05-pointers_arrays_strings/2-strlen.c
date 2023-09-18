#include "main.h"

/**
 * _strlen- a function that return the length of a string
 *@s : is a pointer that pont to the string
 *@i : is simple loop increment
 *
 *
 *Return: always 0 (success)
*/
int _strlen(char *s)
{
int i;

i = 0;
while (*(s + i) != '\0')
	i++;
return (i);
}
