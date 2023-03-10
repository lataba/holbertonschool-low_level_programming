#include <stdio.h>

/**
 * main - Function that prints the number of arguments passed into it.
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) *argv[argc];
	return (0);
}
