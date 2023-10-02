#include "main.h"

/**
 * _memset - affect a charater to all adresses
 * @s : a pointer to the buffer
 * @b : the character to affect
 * @n : the number of times
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *pointer_start = s;
unsigned int i;

for (i = 0 ; i < n ; i++)
	s[i] = b;

return (pointer_start);
}
