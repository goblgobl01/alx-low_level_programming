#include "main.h"

/**
 * print_numbers - this function print numbers from 0 to 9
 *
 * @i: this the operator that increment every time we print a number
 *
 * Return: void function wont  return anything
*/
void print_numbers(void)
{
	int i=0;

	for(i = 0 ; i < 10; i++)
		_putchar(i+48);
	_putchar('\n');
}

