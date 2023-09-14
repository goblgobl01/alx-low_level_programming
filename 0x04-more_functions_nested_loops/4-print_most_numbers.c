#include "main.h"

/**
 * print_most_numbers - this function print numbers from 0 to 9 except 2 & 4
 *
 *
 * Return: void function wont  return anything
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0 ; c < 10; c++)
	{
		if (c == 2 || c == 4)
			continue;
		else
			_putchar(c + 48);
	}
	_putchar('\n');
}
