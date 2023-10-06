#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate command line arguments into a single string.
 *
 * @ac: The number of command line arguments.
 * @av: An array of strings representing the command line arguments.
 *
 * Return: A pointer
 */

char *argstostr(int ac, char **av)
{
int total_length = 0;
int current_position = 0;
int i, j;
int a, b;

if (ac == 0 || av == NULL)
	return (NULL);

for (int a = 0; a < ac; a++)
{
	b = 0;
	while (av[a][b] != '\0')
	{
		total_length++;
		b++;
	}
	total_length++;
}

char *result = (char *)malloc(total_length + 1);

if (result == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	j = 0;
	while (av[i][j] != '\0')
	{
	result[current_position] = av[i][j];
	current_position++;
	j++;
	}
	result[current_position] = '\n';
	current_position++;
}

result[total_length] = '\0';

return (result);
}
