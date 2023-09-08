#include<stdio.h>
int main(void)
{
int a;
for ( a = 0 ; a < 10 ; a++ )
{
	putchar(a+48);
	putchar(',');
	putchar(' ');
}
putchar (\b\b\n);
return (0);
}
