#include "main.h"

/**
 * swap_int- a function that swap betwenn to integer
 *@a : the first pointer
 *@b : the second one
 *
 *Return: always 0 (success)
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
