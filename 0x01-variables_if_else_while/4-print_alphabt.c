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
char a;
for (a = 'a' ; a <= 'z' ; ++a)
	{
	if(a == 'q'|| a == 'e'){
	continue;
	}
	putchar(a);
	}
putchar('\n');
return (0);
}
