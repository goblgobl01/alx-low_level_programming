#include <stdlib.h>
#include "main.h"
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a,b;
char *ptr;

if (n >= sizeof(s2))
	ptr = malloc (sizeof(s1) + sizeof(s2) - 1);

else
	ptr = malloc (sizeof(s1) + n);

a = 0;
while (s1[a] != '\0')
{
	*(ptr + a) = s1[a];
	a++;
}

b = 0;
while (s2[b] != '\0' && b <= n)
{
	*(ptr + a) = s2[b];
	a++;
	b++;
}
*(ptr + a) = '\0';

return (ptr);
}
