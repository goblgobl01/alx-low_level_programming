#include "main.h"

/**
 * reverse_array  - this function reverse a array
 * @a: a pointer to an array
 * @n: the number of element
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int j;
int temp;

for (j = 0 ; j < n ; j++)
{
	temp = a[j];
	a[j] = a[n - 1];
	a[n - 1] = temp;
	n--;
}

}
