#include <stdio.h>

/**
 *  more_numbers - this function print numbers from 0 to 15 ten times
 *
 *
 * Return: void function wont  return anything
*/

void more_numbers(void)
{

char numbers[] = "01234567891011121314";
int length = sizeof(numbers) - 1;

for (int j = 0; j < 10 ; j++)
	{
	for (int i = 0; i < length; i++)
		{
		putchar(numbers[i]);
		}
	putchar ('\n');
	}

	putchar('\n');

}
