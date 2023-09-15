#include "main.h"

/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{

char numbers[] = "01234567891011121314";
int length = 21;

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
