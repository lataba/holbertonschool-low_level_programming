#include <stdio.h>

/**
 * main - Program that prints all arguments it receives.
 * @argc: Number of arguments
 * @argv: The aguments
 * Return: (0) if success
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
