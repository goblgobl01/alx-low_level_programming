#include "main.h"

/**
 * string_toupper - Convert lowercase characters in a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*str != '\0')
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ('a' - 'A');
	}
	str++;
}
return (ptr);
}
