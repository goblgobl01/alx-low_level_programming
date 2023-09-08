#include <stdio.h>
/**
 * main-function declaration
 *
 *Description: a c program that print the size of variables
 *
 *Return: always 0 (success)
*/
int main(void)

{
int a;
char b;
long int c;
long long int d;
float e;
int A = sizeof(a);
int B = sizeof(b);
int C = sizeof(c);
int D = sizeof(d);
int E = sizeof(e);
printf ("Size of a char: %d byte(s)\n",A);
printf ("Size of a char: %d byte(s)\n",B);
printf ("Size of a char: %d byte(s)\n",C);
printf ("Size of a char: %d byte(s)\n",D);
printf ("Size of a char: %d byte(s)\n",E);
}
