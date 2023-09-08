#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-function declaration
 *
 *Description: a c program that  display a random number sign
 *
 *Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0){
	printf("is positive");
	}else if(n<0){
	printf("is negative");
	}else if(n==0){
	printf("is zero");
	}

	return (0);
}
