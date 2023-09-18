#include "main.h"
#include <unistd.h>

/**
 *_puts - a function that print a string
 *@str : a simple pointer to the string
 *
*/
void _puts(char *str)
{
int i;

i = 0;
while (*(str + i) != '\0')
	i++;
write(1, str, i);
_putchar('\n');
}
