#include "main.h"
#include <stdio.h>

/**
 *print_array - a function that print arrays
 *@a : is the pointer to the string
 *@n : is the array lengeth
 *
*/
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (i == 0)
	printf("%d", a[i]);
else
	printf(", %d", a[i]);
}
printf("\n");
}
