#include<stdio.h>
int main(void)
{
char a;
for ( a = 0 ; a < 10 ; a++ )
{
	putchar(a+48);
	putchar(',');
	putchar(' ');
}
putchar (0);
return (0);
}
