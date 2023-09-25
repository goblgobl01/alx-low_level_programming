#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - caculate the sum of the diagonals
 * @a: Pointer to the square matrix.
 * @size: The size of the square matrix.
 *
 */
void print_diagsums(int *a, int size)
{
int i;
int temp1 = 0;
int temp2 = 0;

for (i = 0; i < size; i++)
{
	temp1 += *(a + i * size + i);
}
for (i = 0; i < size; i++)
{
	temp2 += *(a + i * size + (size - 1 - i));
}
printf("%d,", temp1);
printf(" %d\n", temp2);
}

