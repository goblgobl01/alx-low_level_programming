#include<unistd.h>

/**
 * main-function declaration
 *
 *Description: this a  simple programm that define a function that i can use on another file
 *
 *Return: always 0 (success)
*/
int _putchar(void) {
	char str[] = "_putchar\n";
	int length = sizeof(str) - 1;
	return write(1, str, length);
}
