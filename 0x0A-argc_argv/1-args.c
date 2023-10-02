#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This is the main function of the program. It takes
 * the command-line arguments and prints the count of arguments.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(int argc, char *argv[])
{
(void) *argv;

printf("%d", (argc - 1));

printf("\n");

return (0);
}
