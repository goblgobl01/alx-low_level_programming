#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The input string.
 */
void puts2(char *str)
{

int i, j;

while (str[i] != '\0')
	i++;

i--;
for (j = 0 ; j < i ; j++)
{
	if (j % 2 == 0)
		_putchar(str[j]);
}

_putchar('\n');
}
