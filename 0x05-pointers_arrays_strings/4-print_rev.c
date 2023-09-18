#include "main.h"

/**
 *print_rev - a function that print a string in reverse
 *@s : this the pointer to the string
 *
*/
void print_rev(char *s)
{
int i, j;

i = 0;
while (*(s + i) != '\0')
	i++;
for (j = i ; j >= 0 ; j--)
	_putchar(*(s + j));
_putchar('\n');
}

