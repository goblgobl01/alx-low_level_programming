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
	return write(1, str, 9);
}
