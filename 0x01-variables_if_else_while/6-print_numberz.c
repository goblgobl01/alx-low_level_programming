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
int a;
for (a = 0 ; a  <10 ; a++)
	putchar(a+48);
putchar('\n');

return (0);
}
