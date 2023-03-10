#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers.
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: (0)
 */

int main(int argc, char *argv[])

{
	int i, j, add;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i <= (argc - 1); i++)
	{
		for (j = 0; argv[i][j]; j++)
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
