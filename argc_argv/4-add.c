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
	int i, add;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i <= (argc - 1); i++)
		if (atoi(argv[i]))
			add = add + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	printf("%d\n", add);
	return (0);
}
