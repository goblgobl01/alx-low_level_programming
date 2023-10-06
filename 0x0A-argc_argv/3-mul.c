#include <stdio.h>


int main(int argc, char **argv)
{
int i, j;
int result1, result2;
int result;
(void) argc;

if (argv[1] == NULL || argv[2] == NULL)
{
	printf ("Error\n");
	return (1);
}

else
{
i=0;
while (argv[1][i])
{
	if(argv[1][i] >= '0' && argv[1][i]  <= '9')
		result1 = result1 *10 + (argv[1][i] - '0');
	i++;
}

j=0;
while (argv[2][j])
{
	if(argv[2][j] >= '0' && argv[2][j]  <= '9')
		result2 = result2 *10 + (argv[2][j] - '0');
	j++;
}

result = result1 * result2;

printf("%d\n", result);
}
return (0);
}
