#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: An integer, the product.
 */

int main(int argc, char *argv[])

{
	int product;

	(void) argc;
	if (argv[1] && argv[2])
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
