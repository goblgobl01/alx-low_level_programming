#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplicatiion of two parameters
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 1 if error 0 if success
 */
int main(int argc, char **argv)
{
int i, result, j;

if (argc == 1)
{
	printf("0\n");
	return (0);
}

else
{
	i = 1;
	result = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	result = result + atoi(argv[i]);
	i++;
	}
printf("%d\n", result);
}
return (0);
}
