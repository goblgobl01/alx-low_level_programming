#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	while (argv[i])
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	result = result + atoi(argv[i]);
	i++;
}
printf ("%d\n", result);
}
return (0);
}
