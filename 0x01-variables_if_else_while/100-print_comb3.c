#include <stdio.h>
/**
 * main-function declaration
 *
 *Description: a c program that print a simple string
 *
 *Return: always 0 (success)
*/
int main(void)
{
int i;
int j;
for (i = 0 ; i < 10 ; i++)
{
	for (j = 0 ; j < 10 ; j++)
	{
	putchar(i+48);
	putchar(j+48);
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');

return (0);
}
