#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the programme
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 if the program executed successfully, 1 if there was an error.
 */
int main(int argc, char *argv[])
{
int num2, num1;
int result;

if (argc != 3)
{
printf("Error: Please provide exactly two integer arguments.\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
