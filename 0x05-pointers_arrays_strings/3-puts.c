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
i = _strlen(str);
write(1, str, i);
}
