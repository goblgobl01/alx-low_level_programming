#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
int i, j, result1, result2, result, sign1, sign2;
(void) argc;

sign1 = 1;
sign2 = 1;

if (argv[1] == NULL || argv[2] == NULL)
{
	printf("Error\n");
	return (1);
}

else
{
if (argv[1][0] == '-')
	sign1 = 0;

i = 0;
while (argv[1][i])
{

	if (argv[1][i] >= '0' && argv[1][i]  <= '9')
		result1 = result1 * 10 + (argv[1][i] - '0');
	i++;
}

if (sign1 == 0)
	result1 = -result1;


if (argv[2][0] == '-')
	sign2 = 0;

j = 0;
while (argv[2][j])
{
	if (argv[2][j] >= '0' && argv[2][j]  <= '9')
		result2 = result2 * 10 + (argv[2][j] - '0');
	j++;
}

if (sign2 == 0)
	result2 = -result2;

result = result1 * result2;

printf("%d\n", result);
}
return (0);
}
