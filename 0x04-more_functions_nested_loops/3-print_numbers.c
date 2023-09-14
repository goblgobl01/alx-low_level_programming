#include "main.h"

/**
 * print_numbers - this function print numbers from 0 to 9
 *
 *
 * Return: void function wont  return anything
*/
void print_numbers(void)
{
	int c;

	for (c = 0 ; c < 10; c++)
		_putchar (c + 48);
	_putchar('\n');
}
