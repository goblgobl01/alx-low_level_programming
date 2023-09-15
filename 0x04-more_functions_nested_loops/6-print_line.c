#include "main.h"

/**
 * print_line - this function print a line
 *@n: charcter number
*/

void print_line(int n)
{

int i;

if (n >= 0)
{
	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}

else
	_putchar('\n');

}
